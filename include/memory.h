enum class MemoryType {
  Normal,
  Device,
};
// A device receives the byte offset in its MMIO range, the access length, and
// whether the access is a write.  The mapped backing store has already been
// updated before a write handler runs; a read handler may prepare it first.
using memory_handler_t = void (*)(std::uint32_t offset, std::uint32_t len,
                                  bool is_write);

struct MemoryRegion {
  const char *name;
  std::uint32_t start;
  std::uint32_t end;  // Inclusive.
  std::uint8_t *space;
  MemoryType type;
  memory_handler_t memory_handler;
};


void destroy_simulator();

// Physical memory and image lifecycle.
bool init_memory(const char *image_file);
bool init_internal_img();
void destroy_memory();
uint8_t *pmem_space();
std::size_t pmem_image_size();
bool debug_pmem_read(std::uint32_t addr, std::uint32_t len,
                     std::uint32_t *data);

// MMIO registration and lookup.  `size` is expressed in bytes.
void add_mmio_map(const char *name, std::uint32_t start, std::uint32_t size,
                  std::uint8_t *space, memory_handler_t memory_handler);
MemoryRegion *find_mmio(std::uint32_t addr, std::uint32_t len);

extern "C" std::uint32_t pmem_read(std::uint32_t raddr,
                                   unsigned char byte_mask,
                                   bool skip_difftest_one);
extern "C" void pmem_write(std::uint32_t waddr, std::uint32_t wdata,
                           char byte_mask, bool skip_difftest_one);
extern "C" std::uint32_t prom_read(std::uint32_t rom_addr);