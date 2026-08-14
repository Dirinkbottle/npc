#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include "../include/minirv.h"
#include "ast.h"
#include "expr.h"

// 内存池
#define AST_POOL_SIZE 2048
static ASTNode *ast_pool = NULL;
static int ast_pool_top = 9999;

// token表和当前解析位置
static Token tk_table[MAXTOKEN];
static int tk_pos = 0;
bool ast_build_success = true;
bool ast_execute_success = true;

void ast_init(void) {
  ast_pool_init();
  memcpy(tk_table, tokens, sizeof(Token) * MAXTOKEN);
  tk_pos = 0;
  ast_build_success=true;
  ast_execute_success=true;
}

void ast_pool_init(void) {
  if (ast_pool) free(ast_pool);
  ast_pool = (ASTNode *)malloc(sizeof(ASTNode) * AST_POOL_SIZE);
  ast_pool_top = 0;
}

void ast_pool_destroy(void) {
  free(ast_pool);
  ast_pool = NULL;
  ast_pool_top = 0;
}

static ASTNode *ast_alloc(void) {
  if (ast_pool_top >= AST_POOL_SIZE) {
    printf("AST pool overflow\n");
    return NULL;
  }
  return &ast_pool[ast_pool_top++];
}

void ast_pool_reset(void) {
  ast_pool_top = 0;
}


// EOF空节点
ASTNode *ast_new_eof() {
  ASTNode *n = ast_alloc();
  n->type = AST_EOF;
  return n;
}

// 字面量节点
ASTNode *ast_new_int(int val) {
  ASTNode *n = ast_alloc();
  n->type = AST_INT;
  n->int_val = val;
  return n;
}

ASTNode *ast_new_long(long long val) {
  ASTNode *n = ast_alloc();
  n->type = AST_LONG;
  n->long_val = val;
  return n;
}

ASTNode *ast_new_double(double val) {
  ASTNode *n = ast_alloc();
  n->type = AST_DOUBLE;
  n->dbl_val = val;
  return n;
}

ASTNode *ast_new_string(const char *s) {
  ASTNode *n = ast_alloc();
  n->type = AST_STRING;
  size_t len = strnlen(s, sizeof(n->str_val) - 1);
  memcpy(n->str_val, s, len);
  n->str_val[len] = '\0';
  return n;
}

ASTNode *ast_new_reg(const char *name) {
  ASTNode *n = ast_alloc();
  n->type = AST_REG;
  size_t len = strnlen(name, sizeof(n->reg_name) - 1);
  memcpy(n->reg_name, name, len);
  n->reg_name[len] = '\0';
  return n;
}

// 一元运算节点
ASTNode *ast_new_unary(ASTType type, ASTNode *operand) {
  ASTNode *n = ast_alloc();
  n->type = type;
  n->unary.operand = operand;
  return n;
}

// 二元运算节点
ASTNode *ast_new_binary(ASTType type, ASTNode *left, ASTNode *right) {
  ASTNode *n = ast_alloc();
  n->type = type;
  n->binary.left = left;
  n->binary.right = right;
  return n;
}

// 条件节点
ASTNode *ast_new_cond(ASTNode *cond, ASTNode *true_expr, ASTNode *false_expr) {
  ASTNode *n = ast_alloc();
  n->type = AST_COND;
  n->ternary.cond = cond;
  n->ternary.true_expr = true_expr;
  n->ternary.false_expr = false_expr;
  return n;
}



// token名称映射表
 __attribute__((unused))  static const char *token_name(int type){
  switch (type) {
    case TK_NOTYPE: return "SPACE";
    case TK_INT:    return "INT";
    case TK_LONG:   return "LONG";
    case TK_DOUBLE: return "DOUBLE";
    case TK_HEX:    return "HEX";
    case TK_REG:    return "REG";
    case TK_EQ:     return "==";
    case TK_NEQ:    return "!=";
    case TK_AND:    return "&&";
    case TK_OR:     return "||";
    case TK_LE:     return "<=";
    case TK_GE:     return ">=";
    case TK_SHL:    return "<<";
    case TK_SHR:    return ">>";
    case TK_DEREF:  return "DEREF";
    case TK_PLUS:   return "+";
    case TK_MINUS:  return "-";
    case TK_MUL:    return "*";
    case TK_DIV:    return "/";
    case TK_LPAREN: return "(";
    case TK_RPAREN: return ")";
    case TK_LT:     return "<";
    case TK_GT:     return ">";
    case TK_NOT:    return "!";
    case TK_IF:     return "if";
    case TK_ELSE:   return "else";
    case TK_LBRACE: return "{";
    case TK_RBRACE: return "}";
    case TK_BITNOT:   return "~";
    case TK_QUESTION: return "?";
    case TK_COLON:    return ":";
    case TK_BITAND:   return "&";
    case TK_BITXOR:   return "^";
    case TK_BITOR:    return "|";
    case TK_COMMA:    return ",";
    case TK_MOD:      return "%";
    default:          return "none token";
  }
}

#define PARSE_DEBUG 0
#if PARSE_DEBUG
  #define DBG_PARSE(func, tk, pos) \
    printf("[%s] matched '%s' (type=%s) at pos %d\n", func, (tk)->str, token_name((tk)->type), pos)
#else
  #define DBG_PARSE(func, tk, pos)
#endif

// 前向声明
static ASTNode* expr_mul(void);
static ASTNode* expr_add(void);
static ASTNode* expr_shift(void);
static ASTNode* expr_rel(void);
static ASTNode* expr_eq(void);
static ASTNode* expr_bitand(void);
static ASTNode* expr_bitxor(void);
static ASTNode* expr_bitor(void);
static ASTNode* expr_and(void);
static ASTNode* expr_or(void);
static ASTNode* expr_ternary(void);
static ASTNode* expr_comma(void);
ASTNode* ast_parse(void);

ASTNode* factor(void){
  Token *tk = &tk_table[tk_pos];
  ASTNode *node = NULL;

  switch (tk->type) {
    case TK_INT: {
      char *end = NULL;
      long val = strtol(tk->str, &end, 10);
      if (*end != '\0') {
        fprintf(stderr, "Invalid integer: %s\n", tk->str);
        ast_build_success = false;
      }
      DBG_PARSE("factor", tk, tk_pos);
      node = ast_new_int(val);
      tk_pos++;
      break;
    }
    case TK_LONG: {
      char *end = NULL;
      unsigned long long val = strtoull(tk->str, &end, 10);
      if (*end != '\0') {
        fprintf(stderr, "Invalid long integer: %s\n", tk->str);
        ast_build_success = false;
      }
      DBG_PARSE("factor", tk, tk_pos);
      node = ast_new_long((long long)val);
      tk_pos++;
      break;
    }
    case TK_DOUBLE: {
      char *end = NULL;
      double val = strtod(tk->str, &end);
      if (*end != '\0') {
        fprintf(stderr, "Invalid double: %s\n", tk->str);
        ast_build_success = false;
      }
      DBG_PARSE("factor", tk, tk_pos);
      node = ast_new_double(val);
      tk_pos++;
      break;
    }
    case TK_HEX: {
      char *end = NULL;
      long val = strtol(tk->str, &end, 16);
      if (*end != '\0') {
        fprintf(stderr, "Invalid hex: %s\n", tk->str);
        ast_build_success = false;
      }
      DBG_PARSE("factor", tk, tk_pos);
      node = ast_new_int(val);
      tk_pos++;
      break;
    }
    case TK_REG:
      DBG_PARSE("factor", tk, tk_pos);
      node = ast_new_reg(tk->str);
      tk_pos++;
      break;
    case TK_LPAREN:
      DBG_PARSE("factor", tk, tk_pos);
      tk_pos++;
      if (tk_table[tk_pos].type == TK_RPAREN) {
        node = ast_new_eof();
        tk_pos++;
      } else {
        node = ast_parse();
        if (!node) goto parse_fail;
        if (tk_table[tk_pos].type == TK_RPAREN) {
          DBG_PARSE("factor", &tk_table[tk_pos], tk_pos);
          tk_pos++;
        } else {
          fprintf(stderr, "Expect a close RPAREN!!! on pos %d\n", tk_pos);
          ast_build_success = false;
          goto parse_fail;
        }
      }
      break;
    case TK_MINUS:
      DBG_PARSE("factor", tk, tk_pos);
      tk_pos++;
      node = factor();
      if (!node) goto parse_fail;
      node = ast_new_unary(AST_NEG, node);
      break;
    case TK_NOT:
      DBG_PARSE("factor", tk, tk_pos);
      tk_pos++;
      node = factor();
      if (!node) goto parse_fail;
      node = ast_new_unary(AST_NOT, node);
      break;
    case TK_DEREF:
      DBG_PARSE("factor", tk, tk_pos);
      tk_pos++;
      node = factor();
      if (!node) goto parse_fail;
      node = ast_new_unary(AST_DEREF, node);
      break;
    case TK_BITNOT:
      DBG_PARSE("factor", tk, tk_pos);
      tk_pos++;
      node = factor();
      if (!node) goto parse_fail;
      node = ast_new_unary(AST_BITNOT, node);
      break;
    case TK_IF: {
      DBG_PARSE("factor", tk, tk_pos);
      tk_pos++;

      if (tk_table[tk_pos].type != TK_LPAREN) {
        fprintf(stderr, "Expected '(' after 'if' at pos %d\n", tk_pos);
        ast_build_success = false;
        goto parse_fail;
      }
      tk_pos++;

      ASTNode *cond = ast_parse();
      if (!cond) goto parse_fail;

      if (tk_table[tk_pos].type != TK_RPAREN) {
        fprintf(stderr, "Expected ')' after condition at pos %d\n", tk_pos);
        ast_build_success = false;
        goto parse_fail;
      }
      tk_pos++;

      if (tk_table[tk_pos].type != TK_LBRACE) {
        fprintf(stderr, "Expected '{' after ')' at pos %d\n", tk_pos);
        ast_build_success = false;
        goto parse_fail;
      }
      tk_pos++;

      ASTNode *true_expr;
      if (tk_table[tk_pos].type == TK_RBRACE) {
        true_expr = ast_new_eof();
        tk_pos++;
      } else {
        true_expr = ast_parse();
        if (!true_expr) goto parse_fail;
        if (tk_table[tk_pos].type != TK_RBRACE) {
          fprintf(stderr, "Expected '}' at pos %d\n", tk_pos);
          ast_build_success = false;
          goto parse_fail;
        }
        tk_pos++;
      }

      ASTNode *false_expr = NULL;
      if (tk_table[tk_pos].type == TK_ELSE) {
        tk_pos++;

        if (tk_table[tk_pos].type != TK_LBRACE) {
          fprintf(stderr, "Expected '{' after 'else' at pos %d\n", tk_pos);
          ast_build_success = false;
          goto parse_fail;
        }
        tk_pos++;

        if (tk_table[tk_pos].type == TK_RBRACE) {
          false_expr = ast_new_eof();
          tk_pos++;
        } else {
          false_expr = ast_parse();
          if (!false_expr) goto parse_fail;
          if (tk_table[tk_pos].type != TK_RBRACE) {
            fprintf(stderr, "Expected '}' at pos %d\n", tk_pos);
            ast_build_success = false;
            goto parse_fail;
          }
          tk_pos++;
        }
      } else {
        false_expr = ast_new_string("condition is false, nothing...");
      }

      node = ast_new_cond(cond, true_expr, false_expr);
      break;
    }
    default:
      fprintf(stderr, "Unexpected token: %s\n", tk->str);
      ast_build_success = false;
      goto parse_fail;
  }

  if (!node) goto parse_fail;
  return node;

parse_fail:
  ast_build_success = false;
  return ast_new_eof();
}

// 优先级从低到高:
// ast_parse → expr_comma → expr_ternary → expr_or → expr_and → expr_bitor → expr_bitxor → expr_bitand → expr_eq → expr_rel → expr_shift → expr_add → expr_mul → factor

// 7: * /
static ASTNode* expr_mul(void){
  ASTNode* left = factor();
  if (!left) goto parse_fail;
  while (1) {
    Token *tk = &tk_table[tk_pos];
    ASTType type;
    if (tk->type == TK_MUL)       type = AST_MUL;
    else if (tk->type == TK_DIV)  type = AST_DIV;
    else if (tk->type == TK_MOD)  type = AST_MOD;
    else break;
    DBG_PARSE("expr_mul", tk, tk_pos);
    tk_pos++;
    ASTNode* right = factor();
    if (!right) goto parse_fail;
    left = ast_new_binary(type, left, right);
  }
  return left;

parse_fail:
  ast_build_success = false;
  return ast_new_eof();
}

// 6: + -
static ASTNode* expr_add(void){
  ASTNode* left = expr_mul();
  if (!left) goto parse_fail;
  while (1) {
    Token *tk = &tk_table[tk_pos];
    ASTType type;
    if (tk->type == TK_PLUS)       type = AST_ADD;
    else if (tk->type == TK_MINUS) type = AST_SUB;
    else break;
    DBG_PARSE("expr_add", tk, tk_pos);
    tk_pos++;
    ASTNode* right = expr_mul();
    if (!right) goto parse_fail;
    left = ast_new_binary(type, left, right);
  }
  return left;

parse_fail:
  ast_build_success = false;
  return ast_new_eof();
}

// 5: << >>
static ASTNode* expr_shift(void){
  ASTNode* left = expr_add();
  if (!left) goto parse_fail;
  while (1) {
    Token *tk = &tk_table[tk_pos];
    ASTType type;
    if (tk->type == TK_SHL)       type = AST_SHL;
    else if (tk->type == TK_SHR)  type = AST_SHR;
    else break;
    DBG_PARSE("expr_shift", tk, tk_pos);
    tk_pos++;
    ASTNode* right = expr_add();
    if (!right) goto parse_fail;
    if (left->type == AST_DOUBLE || right->type == AST_DOUBLE) {
      fprintf(stderr, "Shift operation on floating-point is not allowed\n");
      ast_build_success = false;
      goto parse_fail;
    }
    left = ast_new_binary(type, left, right);
  }
  return left;

parse_fail:
  ast_build_success = false;
  return ast_new_eof();
}

// 4: < > <= >=
static ASTNode* expr_rel(void){
  ASTNode* left = expr_shift();
  if (!left) goto parse_fail;
  while (1) {
    Token *tk = &tk_table[tk_pos];
    ASTType type;
    if (tk->type == TK_LT)      type = AST_LT;
    else if (tk->type == TK_GT) type = AST_GT;
    else if (tk->type == TK_LE) type = AST_LE;
    else if (tk->type == TK_GE) type = AST_GE;
    else break;
    DBG_PARSE("expr_rel", tk, tk_pos);
    tk_pos++;
    ASTNode* right = expr_shift();
    if (!right) goto parse_fail;
    left = ast_new_binary(type, left, right);
  }
  return left;

parse_fail:
  ast_build_success = false;
  return ast_new_eof();
}

// 3: == !=
static ASTNode* expr_eq(void){
  ASTNode* left = expr_rel();
  if (!left) goto parse_fail;
  while (1) {
    Token *tk = &tk_table[tk_pos];
    ASTType type;
    if (tk->type == TK_EQ)       type = AST_EQ;
    else if (tk->type == TK_NEQ) type = AST_NEQ;
    else break;
    DBG_PARSE("expr_eq", tk, tk_pos);
    tk_pos++;
    ASTNode* right = expr_rel();
    if (!right) goto parse_fail;
    left = ast_new_binary(type, left, right);
  }
  return left;

parse_fail:
  ast_build_success = false;
  return ast_new_eof();
}

// 2: &&
static ASTNode* expr_and(void){
  ASTNode* left = expr_bitor();
  if (!left) goto parse_fail;
  while (1) {
    Token *tk = &tk_table[tk_pos];
    if (tk->type != TK_AND) break;
    DBG_PARSE("expr_and", tk, tk_pos);
    tk_pos++;
    ASTNode* right = expr_bitor();
    if (!right) goto parse_fail;
    left = ast_new_binary(AST_AND, left, right);
  }
  return left;

parse_fail:
  ast_build_success = false;
  return ast_new_eof();
}

// 2.5: | 位或
static ASTNode* expr_bitor(void){
  ASTNode* left = expr_bitxor();
  if (!left) goto parse_fail;
  while (1) {
    Token *tk = &tk_table[tk_pos];
    if (tk->type != TK_BITOR) break;
    DBG_PARSE("expr_bitor", tk, tk_pos);
    tk_pos++;
    ASTNode* right = expr_bitxor();
    if (!right) goto parse_fail;
    left = ast_new_binary(AST_BITOR, left, right);
  }
  return left;

parse_fail:
  ast_build_success = false;
  return ast_new_eof();
}

// 2.6: ^ 位异或
static ASTNode* expr_bitxor(void){
  ASTNode* left = expr_bitand();
  if (!left) goto parse_fail;
  while (1) {
    Token *tk = &tk_table[tk_pos];
    if (tk->type != TK_BITXOR) break;
    DBG_PARSE("expr_bitxor", tk, tk_pos);
    tk_pos++;
    ASTNode* right = expr_bitand();
    if (!right) goto parse_fail;
    left = ast_new_binary(AST_BITXOR, left, right);
  }
  return left;

parse_fail:
  ast_build_success = false;
  return ast_new_eof();
}

// 2.7: & 位与
static ASTNode* expr_bitand(void){
  ASTNode* left = expr_eq();
  if (!left) goto parse_fail;
  while (1) {
    Token *tk = &tk_table[tk_pos];
    if (tk->type != TK_BITAND) break;
    DBG_PARSE("expr_bitand", tk, tk_pos);
    tk_pos++;
    ASTNode* right = expr_eq();
    if (!right) goto parse_fail;
    left = ast_new_binary(AST_BITAND, left, right);
  }
  return left;

parse_fail:
  ast_build_success = false;
  return ast_new_eof();
}

// 1: ||
static ASTNode* expr_or(void){
  ASTNode* left = expr_and();
  if (!left) goto parse_fail;
  while (1) {
    Token *tk = &tk_table[tk_pos];
    if (tk->type != TK_OR) break;
    DBG_PARSE("expr_or", tk, tk_pos);
    tk_pos++;
    ASTNode* right = expr_and();
    if (!right) goto parse_fail;
    left = ast_new_binary(AST_OR, left, right);
  }
  return left;

parse_fail:
  ast_build_success = false;
  return ast_new_eof();
}

// 0.5: ? : 三目条件 (右结合, 优先级高于 ||)
static ASTNode* expr_ternary(void){
  ASTNode *cond = expr_or();
  ASTNode *true_expr = NULL;
  ASTNode *false_expr = NULL;
  if (!cond) goto parse_fail;
  if (tk_table[tk_pos].type != TK_QUESTION) return cond;
  tk_pos++;
  true_expr = ast_parse();  // 递归顶层，允许嵌套
  if (!true_expr) goto parse_fail;
  if (tk_table[tk_pos].type != TK_COLON) {
    fprintf(stderr, "Expected ':' in ternary at pos %d\n", tk_pos);
    ast_build_success = false;
    goto parse_fail;
  }
  tk_pos++;
  false_expr = expr_ternary();  // 右结合
  if (!false_expr) goto parse_fail;
  return ast_new_cond(cond, true_expr, false_expr);

parse_fail:
  ast_build_success = false;
  return ast_new_eof();
}

// 0: , 逗号 (最低优先级, 左结合, 返回右侧值)
static ASTNode* expr_comma(void){
  ASTNode* left = expr_ternary();
  if (!left) goto parse_fail;
  while (1) {
    Token *tk = &tk_table[tk_pos];
    if (tk->type != TK_COMMA) break;
    DBG_PARSE("expr_comma", tk, tk_pos);
    tk_pos++;
    ASTNode* right = expr_ternary();
    if (!right) goto parse_fail;
    left = ast_new_binary(AST_COMMA, left, right);
  }
  return left;

parse_fail:
  ast_build_success = false;
  return ast_new_eof();
}

// 入口: 最低优先级
ASTNode* ast_parse(void){
  return expr_comma();
}

// 一元运算执行helper: 将 node 原地修改为结果
static void exec_unary(ASTType op, ASTNode *operand, ASTNode *node) {
  if (operand->type != AST_INT && operand->type != AST_LONG && operand->type != AST_DOUBLE) {
    fprintf(stderr, "Unary op on non-int type\n");
    ast_execute_success = false;
    return;
  }
  long long val = (operand->type == AST_LONG) ? operand->long_val : operand->int_val;
  switch (op) {
    case AST_NEG:    val = -val; break;
    case AST_NOT:    val = !val; break;
    case AST_BITNOT: val = ~val; break;
    case AST_DEREF: {
            if (operand->type != AST_INT && operand->type != AST_LONG) {
                        fprintf(stderr, "Deref on non-int type\n");
                        ast_execute_success = false;
                        return;
            }
      uint32_t data = 0;
      uint32_t addr = (uint32_t)val;
      if (debug_pmem_read(addr, sizeof(data), &data)) {
        val = data;
      } else {
        fprintf(stderr, "Deref: address 0x%x is outside PMEM\n", addr);
        ast_execute_success = false;
        return;
      }
      break;
    }
    default: break;
  }
  if (operand->type == AST_LONG) {
    node->type = AST_LONG;
    node->long_val = val;
  } else {
    node->type = AST_INT;
    node->int_val = (int)val;
  }
}

// 二元运算执行helper: 将 node 原地修改为结果
static void exec_binary(ASTType op, ASTNode *left, ASTNode *right, ASTNode *node) {
  bool use_double = (left->type == AST_DOUBLE || right->type == AST_DOUBLE);
  double dl = (left->type == AST_DOUBLE) ? left->dbl_val
            : (left->type == AST_LONG)  ? (double)left->long_val : left->int_val;
  double dr = (right->type == AST_DOUBLE) ? right->dbl_val
            : (right->type == AST_LONG)  ? (double)right->long_val : right->int_val;
  long long il = (left->type == AST_LONG) ? left->long_val
               : (left->type == AST_INT)  ? left->int_val : (long long)left->dbl_val;
  long long ir = (right->type == AST_LONG) ? right->long_val
               : (right->type == AST_INT)  ? right->int_val : (long long)right->dbl_val;

  if (use_double) {
    double result = 0;
    switch (op) {
      case AST_ADD: result = dl + dr; break;
      case AST_SUB: result = dl - dr; break;
      case AST_MUL: result = dl * dr; break;
      case AST_DIV:
        if (dr == 0) { fprintf(stderr, "Division by zero\n"); ast_execute_success = false; return; }
        result = dl / dr;
        break;
      case AST_EQ:  result = dl == dr; break;
      case AST_NEQ: result = (dl != dr); break;
      case AST_LT:  result = dl < dr; break;
      case AST_GT:  result = dl > dr; break;
      case AST_LE:  result = dl <= dr; break;
      case AST_GE:  result = dl >= dr; break;
      case AST_AND: result = dl && dr; break;
      case AST_OR:  result = dl || dr; break;
      case AST_BITAND:
      case AST_BITXOR:
      case AST_BITOR:
      case AST_MOD:
        fprintf(stderr, "Bitwise/modulo operation on floating-point is not allowed\n");
        ast_execute_success = false;
        return;
      case AST_COMMA: result = dr; break;
      default: break;
    }
    // Relational and equality operations produce a boolean integer even
    // when either operand is floating-point.  Keeping them as AST_DOUBLE
    // would incorrectly turn a later division into floating-point division.
    if (op == AST_EQ || op == AST_NEQ || op == AST_LT || op == AST_GT ||
        op == AST_LE || op == AST_GE) {
      node->type = AST_INT;
      node->int_val = (int)result;
      return;
    }
    node->type = AST_DOUBLE;
    node->dbl_val = result;
  } else {
    bool use_long = (left->type == AST_LONG || right->type == AST_LONG);
    long long result = 0;
    switch (op) {
      case AST_ADD: result = il + ir; break;
      case AST_SUB: result = il - ir; break;
      case AST_MUL: result = il * ir; break;
      case AST_DIV:
        if (ir == 0) { fprintf(stderr, "Division by zero\n"); ast_execute_success = false; return; }
        result = il / ir;
        break;
      case AST_EQ:  result = il == ir; break;
      case AST_NEQ: result = il != ir; break;
      case AST_LT:  result = il < ir; break;
      case AST_GT:  result = il > ir; break;
      case AST_LE:  result = il <= ir; break;
      case AST_GE:  result = il >= ir; break;
      case AST_AND: result = il && ir; break;
      case AST_OR:  result = il || ir; break;
      case AST_SHL: result = il << ir; break;
      case AST_SHR: result = il >> ir; break;
      case AST_BITAND: result = il & ir; break;
      case AST_BITXOR: result = il ^ ir; break;
      case AST_BITOR:  result = il | ir; break;
      case AST_MOD:
        if (ir == 0) { fprintf(stderr, "Modulo by zero\n"); ast_execute_success = false; return; }
        result = il % ir;
        break;
      case AST_COMMA: result = ir; break;
      default: break;
    }
    if (use_long) {
      node->type = AST_LONG;
      node->long_val = result;
    } else {
      node->type = AST_INT;
      node->int_val = (int)result;
    }
  }
}

// 寄存器求值: 将 AST_REG 转为 AST_INT
//  支持特殊寄存器
static void eval_reg(ASTNode *node) {
  // reg_name 格式: $pc 或 $x0-$x31
  char *name = node->reg_name + 1;  // 跳过 '$'

  if (strcmp(name, "pc") == 0) {
    node->type = AST_LONG;
    node->long_val = cpu_current_pc();
    return;
  }

  // $x0-$x31: 跳过 'x'，解析数字
  char *endp = NULL;
  int idx = strtol(name + 1, &endp, 10);
  if (endp == name + 1) {
    fprintf(stderr, "Invalid register: %s\n", node->reg_name);
    ast_execute_success = false;
    return;
  }

  uint32_t value = 0;
  if (idx < 0 || idx >= 32 || !cpu_reg_read((uint32_t)idx, &value)) {
    fprintf(stderr, "Invalid register: %s\n", node->reg_name);
    ast_execute_success = false;
    return;
  }
  node->type = AST_LONG;
  node->long_val = value;
}

ASTNode* asttree_execute(ASTNode* asttree){
  if (!asttree) return NULL;

  switch (asttree->type) {
    case AST_INT:
    case AST_LONG:
    case AST_DOUBLE:
    case AST_STRING:
      return asttree;

    case AST_EOF:
      // 空块，返回字符串节点
      asttree->type = AST_STRING;
      strncpy(asttree->str_val, "empty syntax block", sizeof(asttree->str_val) - 1);
      return asttree;

    case AST_REG:
      eval_reg(asttree);
      return asttree;

    // 一元运算
    case AST_NEG:
    case AST_NOT:
    case AST_DEREF:
    case AST_BITNOT: {
      ASTNode *operand = asttree_execute(asttree->unary.operand);
      exec_unary(asttree->type, operand, asttree);
      return asttree;
    }

    // 二元运算
    case AST_ADD:
    case AST_SUB:
    case AST_MUL:
    case AST_DIV:
    case AST_EQ:
    case AST_NEQ:
    case AST_LT:
    case AST_GT:
    case AST_LE:
    case AST_GE:
    case AST_SHL:
    case AST_SHR:
    case AST_BITAND:
    case AST_BITXOR:
    case AST_BITOR:
    case AST_COMMA:
    case AST_MOD: {
      ASTNode *left = asttree_execute(asttree->binary.left);
      ASTNode *right = asttree_execute(asttree->binary.right);
      exec_binary(asttree->type, left, right, asttree);
      return asttree;
    }

    // 短路求值: &&
    case AST_AND: {
      ASTNode *left = asttree_execute(asttree->binary.left);
      int lv = (left->type == AST_DOUBLE) ? (left->dbl_val != 0.0)
             : (left->type == AST_LONG)  ? (left->long_val != 0) : (left->int_val != 0);
      if (!lv) {
        asttree->type = AST_INT;
        asttree->int_val = 0;
        return asttree;
      }
      ASTNode *right = asttree_execute(asttree->binary.right);
      long long rv = (right->type == AST_LONG) ? right->long_val
                   : (right->type == AST_DOUBLE) ? (long long)right->dbl_val : right->int_val;
      asttree->type = AST_INT;
      asttree->int_val = rv != 0;
      return asttree;
    }

    // 短路求值: ||
    case AST_OR: {
      ASTNode *left = asttree_execute(asttree->binary.left);
      int lv = (left->type == AST_DOUBLE) ? (left->dbl_val != 0.0)
             : (left->type == AST_LONG)  ? (left->long_val != 0) : (left->int_val != 0);
      if (lv) {
        asttree->type = AST_INT;
        asttree->int_val = 1;
        return asttree;
      }
      ASTNode *right = asttree_execute(asttree->binary.right);
      long long rv = (right->type == AST_LONG) ? right->long_val
                   : (right->type == AST_DOUBLE) ? (long long)right->dbl_val : right->int_val;
      asttree->type = AST_INT;
      asttree->int_val = rv != 0;
      return asttree;
    }

    // 条件: 短路求值
    case AST_COND: {
      ASTNode *cond = asttree_execute(asttree->ternary.cond);
      int cond_val = (cond->type == AST_DOUBLE) ? (int)cond->dbl_val
                   : (cond->type == AST_LONG)  ? (int)cond->long_val : cond->int_val;
      ASTNode *result = cond_val
        ? asttree_execute(asttree->ternary.true_expr)
        : asttree_execute(asttree->ternary.false_expr);
      *asttree = *result;
      return asttree;
    }

    default:
      return asttree;
  }
}

ASTNode *expr(char *e) {
  /*
   *   1. 重置本次 AST 状态；
   *   2. make_token() 将字符串切分为 tokens[]；
   *   3. ast_parse() 按优先级构建 AST；
   *   4. asttree_execute() 递归执行 AST，返回根节点保存的最终值。
   *
   * 任一步失败均返回 NULL。返回节点属于全局 AST 内存池，下一次调用
   */
  ast_pool_reset();
  ast_build_success = true;
  ast_execute_success = true;

  if (!make_token(e)) {
    return NULL;
  }

  ast_init();
  ASTNode *tree = ast_parse();


  if (!ast_build_success) {
    return NULL;
  }

  ASTNode *result = asttree_execute(tree);
  if (!ast_execute_success) {
    return NULL;
  }

  return result;
}
