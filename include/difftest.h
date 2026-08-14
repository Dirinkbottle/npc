#ifndef NPC_DIFFTEST_H
#define NPC_DIFFTEST_H

#include <stdint.h>

#include "config.h"

int init_difftest(void);
void difftest_sync_initial(void);
void difftest_step(uint32_t pc, uint32_t inst);
void difftest_skip_ref(void);

#endif
