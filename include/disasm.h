#ifndef NPC_DISASM_H
#define NPC_DISASM_H

#include <stdint.h>

void init_disasm(void);
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);

#endif
