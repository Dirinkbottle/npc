/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "sdb.h"
#include "ast.h"
#include "../include/color.h"
#include <assert.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  char expr[256];
  ASTType val_type;
  union {
    int int_val;
    long long long_val;
    double dbl_val;
    char str_val[32];
  } old_val;
} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }
  head = NULL;
  free_ = wp_pool;
}

// 从 free_ 链表头取出一个节点，挂到 head 链表头
static WP* new_wp(void) {
  assert(free_ != NULL && "No free watchpoints");

  WP* new_head = free_;
  free_ = free_->next;

  new_head->next = head;
  head = new_head;
  return new_head;
}

// 从 head 链表中摘除 wp，归还到 free_ 链表头
static void free_wp(WP *wp) {
  assert(wp != NULL);

  if (wp == head) {
    head = head->next;
  } else {
    WP* pre = head;
    while (pre && pre->next != wp) {
      pre = pre->next;
    }
    assert(pre != NULL && "wp not in active list");
    pre->next = wp->next;
  }

  wp->next = free_;
  free_ = wp;
}

// 按编号查找使用中的监视点
static WP* wp_find(int no) {
  WP* cur = head;
  while (cur)
  {
    if (cur->NO==no)
    {
      return cur;
    }
    
    cur= cur->next;
  }
  

  // not find
  return NULL;
  
}

// 设置监视点
void wp_set(char *expr_str) {
  if (!expr_str || !*expr_str) {
    printf("Usage: w <expression>\n");
    return;
  }



  // 先验证表达式合法性
  ASTNode *result = expr(expr_str);
  if (!result) {
    printf(FMT_RED "Invalid expression: %s" FMT_NONE "\n", expr_str);
    return;
  }



  WP* newwp = new_wp();
  assert(newwp != NULL);

  strncpy(newwp->expr, expr_str, 255);
  newwp->expr[255] = '\0';

  // 初始化旧值
  newwp->val_type = result->type;
  switch (result->type) {
    case AST_INT:    newwp->old_val.int_val = result->int_val; break;
    case AST_LONG:   newwp->old_val.long_val = result->long_val; break;
    case AST_DOUBLE: newwp->old_val.dbl_val = result->dbl_val; break;
    case AST_STRING:
      memcpy(newwp->old_val.str_val, result->str_val, sizeof(newwp->old_val.str_val) - 1);
      newwp->old_val.str_val[sizeof(newwp->old_val.str_val) - 1] = '\0';
      break;
    default: break;
  }
  printf(FMT_GREEN "Watchpoint %d" FMT_NONE ": %s\n", newwp->NO, newwp->expr);
}

// 按编号删除监视点
void wp_delete(int no) {
  WP* wp = wp_find(no);
  if (!wp) {
    printf(FMT_RED "Watchpoint %d not found" FMT_NONE "\n", no);
    return;
  }
  free_wp(wp);
  printf(FMT_GREEN "Deleted watchpoint %d" FMT_NONE "\n", no);
}

// 打印所有使用中的监视点
void wp_print(void) {
  WP* cur = head;
  if (!cur) {
    printf(FMT_YELLOW "No watchpoints." FMT_NONE "\n");
    return;
  }
  printf(FMT_BOLD "%-4s  %s" FMT_NONE "\n", "Num", "Expression");
  printf(FMT_DIM "%-4s  %s" FMT_NONE "\n", "----", "----------");
  while (cur) {
    printf("%-4d  %s\n", cur->NO, cur->expr);
    cur = cur->next;
  }
}

// 扫描所有监视点，检查值是否变化，返回触发数量
int wp_scan(void) {
  if (!head) return 0;

  int triggered = 0;
  WP* cur = head;
  while (cur) {
    ASTNode *result = expr(cur->expr);
    if (!result) { cur = cur->next; continue; }

    int changed = 0;
    switch (result->type) {
      case AST_INT:
        if (cur->val_type != AST_INT || result->int_val != cur->old_val.int_val) {
          printf(FMT_BOLD FMT_YELLOW "\nWatchpoint %d" FMT_NONE ": %s\n",
                 cur->NO, cur->expr);
          if (cur->val_type == AST_INT)
            printf(FMT_RED "Old value = %d" FMT_NONE "\n", cur->old_val.int_val);
          printf(FMT_GREEN "New value = %d" FMT_NONE "\n", result->int_val);
          cur->old_val.int_val = result->int_val;
          cur->val_type = AST_INT;
          changed = 1;
        }
        break;
        case AST_LONG:
        if (cur->val_type != AST_LONG || result->long_val != cur->old_val.long_val) {
          printf(FMT_BOLD FMT_YELLOW "\nWatchpoint %d" FMT_NONE ": %s\n",
                 cur->NO, cur->expr);
          if (cur->val_type == AST_LONG)
            printf(FMT_RED "Old value = 0x%llx" FMT_NONE "\n",
                   cur->old_val.long_val);
          printf(FMT_GREEN "New value = 0x%llx" FMT_NONE "\n",
                 result->long_val);
          cur->old_val.long_val = result->long_val;
          cur->val_type = AST_LONG;
          changed = 1;
        }
        break;
      case AST_DOUBLE:
        if (cur->val_type != AST_DOUBLE || result->dbl_val != cur->old_val.dbl_val) {
          printf(FMT_BOLD FMT_YELLOW "\nWatchpoint %d" FMT_NONE ": %s\n",
                 cur->NO, cur->expr);
          if (cur->val_type == AST_DOUBLE)
            printf(FMT_RED "Old value = %f" FMT_NONE "\n", cur->old_val.dbl_val);
          printf(FMT_GREEN "New value = %f" FMT_NONE "\n", result->dbl_val);
          cur->old_val.dbl_val = result->dbl_val;
          cur->val_type = AST_DOUBLE;
          changed = 1;
        }
        break;
      case AST_STRING:
        if (cur->val_type != AST_STRING || strcmp(result->str_val, cur->old_val.str_val) != 0) {
          printf(FMT_BOLD FMT_YELLOW "\nWatchpoint %d" FMT_NONE ": %s\n",
                 cur->NO, cur->expr);
          if (cur->val_type == AST_STRING)
            printf(FMT_RED "Old value = %s" FMT_NONE "\n", cur->old_val.str_val);
          printf(FMT_GREEN "New value = %s" FMT_NONE "\n", result->str_val);
          strncpy(cur->old_val.str_val, result->str_val, sizeof(cur->old_val.str_val) - 1);
          cur->val_type = AST_STRING;
          changed = 1;
        }
        break;
      default: break;
    }
    if (changed) triggered++;
    cur = cur->next;
  }
  return triggered;
}
