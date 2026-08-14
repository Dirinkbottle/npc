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

#include <string.h>
#include <regex.h>
#include <stdio.h>
#include <stdlib.h>
#include "expr.h"

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  // ast树解析决定优先级
  {" +", TK_NOTYPE},    // spaces
  {"0x[0-9a-fA-F]+", TK_HEX},  // hex number
  {"[0-9]+\\.[0-9]+", TK_DOUBLE}, // float number
  {"[0-9]+", TK_INT},           // decimal integer
  {"\\$x(3[01]|[12]?[0-9])", TK_REG}, // register $x0-$x31
  {"==", TK_EQ},                // equal
  {"!=", TK_NEQ},               // not equal
  {"&&", TK_AND},               // logical and
  {"\\|\\|", TK_OR},            // logical or
  {"<=", TK_LE},                // less or equal
  {">=", TK_GE},                // greater or equal
  {"<<", TK_SHL},               // shift left
  {">>", TK_SHR},               // shift right
  {"<", TK_LT},
  {">", TK_GT},
  {"!", TK_NOT},
  {"\\+", TK_PLUS},             // plus
  {"\\-", TK_MINUS},            // minus
  {"\\*", TK_MUL},              // multiply / deref
  {"/", TK_DIV},                // divide
  {"\\(", TK_LPAREN},
  {"\\)", TK_RPAREN},
  {"\\{", TK_LBRACE},
  {"\\}", TK_RBRACE},
  {"if", TK_IF},
  {"else", TK_ELSE},
  {"~", TK_BITNOT},
  {"\\?", TK_QUESTION},
  {":",    TK_COLON},
  {"&",    TK_BITAND},
  {"\\^",  TK_BITXOR},
  {"\\|",  TK_BITOR},
  {",",    TK_COMMA},
  {"%",    TK_MOD},
  {"\\$pc",TK_REG}
};

#define NR_REGEX (sizeof(rules) / sizeof(rules[0]))
static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      fprintf(stderr, "regex compilation failed: %s\n%s\n", error_msg,
              rules[i].regex);
      abort();
    }
  }
}

Token tokens[MAXTOKEN] = {};
int nr_token = 0;

bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  // 每次清空token数组
  memset(tokens,0,MAXTOKEN*sizeof(Token));

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        
        // Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
        //     i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
          case TK_NOTYPE: break;  // 跳过空格，不记录
          case TK_INT:{
            long val = strtol(substr_start, NULL, 10);
            tokens[nr_token].type = TK_INT;
            snprintf(tokens[nr_token].str, 32, "%ld", val);
            nr_token++;
            break;
          }
          case TK_DOUBLE:{
            double val = strtod(substr_start, NULL);
            tokens[nr_token].type = TK_DOUBLE;
            snprintf(tokens[nr_token].str, 32, "%g", val);
            nr_token++;
            break;
          }
          case TK_HEX: {
            // 16进制转10进制存入token
            unsigned long long val = strtoull(substr_start, NULL, 16);
            tokens[nr_token].type = TK_LONG;
            snprintf(tokens[nr_token].str, 32, "%llu", val);
            nr_token++;
            break;
          }
          case TK_REG:
            tokens[nr_token].type = rules[i].token_type;
            strncpy(tokens[nr_token].str,substr_start,substr_len);
            tokens[nr_token].str[substr_len] = '\0';
            nr_token++;
            break;
          case TK_MUL: {
            // 前一个token是操作数或) → 乘法，否则 → 解引用
            int prev = (nr_token > 0) ? tokens[nr_token - 1].type : TK_NOTYPE;
            if (prev == TK_INT || prev == TK_LONG || prev == TK_DOUBLE ||
                prev == TK_HEX  || prev == TK_REG ||
                prev == TK_RPAREN) {
              tokens[nr_token].type = TK_MUL;
            } else {
              tokens[nr_token].type = TK_DEREF;
            }
            nr_token++;
            break;
          }
          default:
            tokens[nr_token].type = rules[i].token_type;
            nr_token++;
            break;
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }

  }

  return true;
}
