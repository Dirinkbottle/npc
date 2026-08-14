// TODO:这里不允许c++ ,而且全局一份,把它在头文件extern,只在deivce里面实际define
constexpr std::uint32_t PMEM_BASE = 0x80000000u;
constexpr std::size_t PMEM_SIZE = 0x010000000u;

constexpr std::uint32_t UART_MMIO_BASE = 0xa00003f8u;
constexpr std::uint32_t UART_MMIO_SIZE = 8u;
const static  MAX_MMIO_MAPS = 16;