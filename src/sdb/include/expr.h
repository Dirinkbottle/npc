#ifndef __EXPR_H__
#define __EXPR_H__

#define MAXTOKEN 256

enum {
  TK_NOTYPE, // 空格
  TK_EQ,           // ==
  TK_NEQ,          // !=
  TK_AND,          // &&
  TK_OR,           // ||
  TK_INT,          // 整数
  TK_LONG,         // 无符号长整数
  TK_DOUBLE,       // 浮点数
  TK_HEX,          // 十六进制 0x...
  TK_REG,          // 寄存器 $xxx
  TK_LE,           // <=
  TK_GE,           // >=
  TK_SHL,          // <<
  TK_SHR,          // >>
  TK_DEREF,        // 指针解引用 *
  TK_PLUS,         // +
  TK_MINUS,        // -
  TK_MUL,          // *
  TK_DIV,          // /
  TK_LPAREN,       // (
  TK_RPAREN,       // )
  TK_LT,           // <
  TK_GT,           // >
  TK_NOT,          // !
  TK_IF,           // if
  TK_ELSE,         // else
  TK_LBRACE,       // {
  TK_RBRACE,       // }
  TK_BITNOT,       // ~
  TK_QUESTION,     // ?
  TK_COLON,        // :
  TK_BITAND,       // &
  TK_BITXOR,       // ^
  TK_BITOR,        // |
  TK_COMMA,        // ,
  TK_MOD,          // %
};

typedef struct token {
  int type;
  char str[32];
} Token;

extern Token tokens[MAXTOKEN];
extern int nr_token;

struct ASTNode;
void init_regex();
bool make_token(char *e);
struct ASTNode *expr(char *e);

#endif
