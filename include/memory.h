#ifndef NPC_MEMORY_H
#define NPC_MEMORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define PMEM_BASE     UINT32_C(0x80000000)
#define PMEM_SIZE     ((size_t)0x10000000u)
#define MAX_MMIO_MAPS 16u

typedef void (*memory_handler_t)(uint32_t offset, uint32_t len, bool is_write);

bool init_memory(const char *image_file);
bool init_internal_img(void);
void destroy_memory(void);

uint8_t *pmem_space(void);
size_t pmem_image_size(void);
uint32_t memory_last_pc(void);

bool debug_pmem_read(uint32_t addr, uint32_t len, uint32_t *data);

void add_mmio_map(const char *name, uint32_t start, uint32_t size,
                  uint8_t *space, memory_handler_t handler);

/* C-side AXI memory models. */
void prom_read(void);
void pmem_read(void);
void pmem_write_axi(void);

/* Internal memory write helper used by the AXI write slave. */
void pmem_write(uint32_t waddr, uint32_t wdata, unsigned char byte_mask,
                bool skip_difftest_one);

#endif
