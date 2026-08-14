#ifndef NPC_CSRC_MDB_H
#define NPC_CSRC_MDB_H

void init_mdb(int argc, char **argv);
const char *mdb_image_file();
const char *mdb_elf_file();
bool mdb_batch_mode();
bool mdb_use_internal_img();
void sdb_mainloop();

#endif
