/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#ifndef NPC_SDB_H
#define NPC_SDB_H

#include <stdbool.h>

void init_sdb(void);
void init_mdb(int argc, char **argv);

const char *mdb_image_file(void);
const char *mdb_elf_file(void);
bool mdb_batch_mode(void);
bool mdb_use_internal_img(void);

void sdb_mainloop(void);

void init_wp_pool(void);
void wp_set(char *expr);
void wp_delete(int no);
void wp_print(void);
int wp_scan(void);

#endif
