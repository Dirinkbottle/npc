#ifndef __AST_H__
#define __AST_H__

typedef enum {
  AST_INT,AST_LONG, AST_DOUBLE, AST_STRING, AST_REG,
  AST_NEG, AST_NOT, AST_DEREF, AST_BITNOT,
  AST_ADD, AST_SUB, AST_MUL, AST_DIV,
  AST_EQ, AST_NEQ, AST_LT, AST_GT, AST_LE, AST_GE,
  AST_AND, AST_OR, AST_SHL, AST_SHR,
  AST_BITAND, AST_BITXOR, AST_BITOR, AST_COMMA, AST_MOD,
  AST_COND,
  AST_EOF,
} ASTType;

typedef struct ASTNode {
  ASTType type;
  union {
    int   int_val;
    long long long_val;
    double    dbl_val;
    char      str_val[32];
    char      reg_name[8];
    struct { struct ASTNode *operand; } unary;
    struct { struct ASTNode *left, *right; } binary;
    struct { struct ASTNode *cond, *true_expr, *false_expr; } ternary;
  };
} ASTNode;

extern bool ast_build_success;
extern bool ast_execute_success;

void ast_pool_init(void);
void ast_pool_destroy(void);
void ast_pool_reset(void);
void ast_init(void);

ASTNode *ast_new_int(int val);
ASTNode *ast_new_long(long long val);
ASTNode *ast_new_eof(void);
ASTNode *ast_new_double(double val);
ASTNode *ast_new_string(const char *s);
ASTNode *ast_new_reg(const char *name);
ASTNode *ast_new_unary(ASTType type, ASTNode *operand);
ASTNode *ast_new_binary(ASTType type, ASTNode *left, ASTNode *right);
ASTNode *ast_new_cond(ASTNode *cond, ASTNode *true_expr, ASTNode *false_expr);
ASTNode *ast_parse(void);
ASTNode *asttree_execute(ASTNode *asttree);
ASTNode *expr(char* e);
#endif
