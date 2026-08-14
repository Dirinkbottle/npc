#include "sdb.h"
#include "expr.h"

void init_sdb(void) {
  init_regex();
  init_wp_pool();
}
