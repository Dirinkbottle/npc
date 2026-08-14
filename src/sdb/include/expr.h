#ifndef NPC_SDB_EXPR_H
#define NPC_SDB_EXPR_H

#include <stdbool.h>

#define MAXTOKEN 256

enum {
  TK_NOTYPE,
  TK_EQ,
  TK_NEQ,
  TK_AND,
  TK_OR,
  TK_INT,
  TK_LONG,
  TK_DOUBLE,
  TK_HEX,
  TK_REG,
  TK_LE,
  TK_GE,
  TK_SHL,
  TK_SHR,
  TK_DEREF,
  TK_PLUS,
  TK_MINUS,
  TK_MUL,
  TK_DIV,
  TK_LPAREN,
  TK_RPAREN,
  TK_LT,
  TK_GT,
  TK_NOT,
  TK_IF,
  TK_ELSE,
  TK_LBRACE,
  TK_RBRACE,
  TK_BITNOT,
  TK_QUESTION,
  TK_COLON,
  TK_BITAND,
  TK_BITXOR,
  TK_BITOR,
  TK_COMMA,
  TK_MOD,
};

typedef struct token {
  int type;
  char str[32];
} Token;

extern Token tokens[MAXTOKEN];
extern int nr_token;

struct ASTNode;
void init_regex(void);
bool make_token(char *e);
struct ASTNode *expr(char *e);

#endif
