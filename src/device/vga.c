#include "SDL2/SDL.h"
#include <stdio.h>

#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "memory.h"
#include "./include/vga.h"

static SDL_Window *window = NULL;
static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;

static uint8_t vgactl_port_base[VGA_CTL_SIZE];
static uint8_t *vga_mem = NULL;

static size_t vga_screen_size(void) {
  return (size_t)VGA_WIDTH * VGA_HEIGHT * sizeof(uint32_t);
}

static void vga_init_window(void) {
  if (SDL_Init(SDL_INIT_VIDEO) != 0) {
    fprintf(stderr, "SDL_Init failed: %s\n", SDL_GetError());
    assert(0);
  }

  if (SDL_CreateWindowAndRenderer(
          VGA_WIDTH*2, VGA_HEIGHT*2, 0, &window, &renderer) != 0) {
    fprintf(stderr, "SDL_CreateWindowAndRenderer failed: %s\n", SDL_GetError());
    assert(0);
  }

  texture = SDL_CreateTexture(renderer,
                              SDL_PIXELFORMAT_ARGB8888,
                              SDL_TEXTUREACCESS_STATIC,
                              VGA_WIDTH, VGA_HEIGHT);
  if (texture == NULL) {
    fprintf(stderr, "SDL_CreateTexture failed: %s\n", SDL_GetError());
    assert(0);
  }

  SDL_RenderPresent(renderer);
}

static void vga_handler(uint32_t offset, uint32_t len, bool is_write) {
  if (len != 4u || (offset != 0u && offset != 4u)) {
    fprintf(stderr,
            "unsupported VGA control access: offset=%u len=%u write=%d\n",
            offset, len, is_write ? 1 : 0);
    assert(0);
    return;
  }

  /* 写 sync 寄存器时，刷新由 vga_update_screen() 统一处理。 */
  (void)offset;
  (void)is_write;
}

void init_vga(void) {
  const size_t fb_size = vga_screen_size();

  vga_mem = malloc(fb_size);
  assert(vga_mem != NULL);
  memset(vga_mem, 0, fb_size);

  memset(vgactl_port_base, 0, sizeof(vgactl_port_base));
  uint32_t *ctl = (uint32_t *)vgactl_port_base;
  ctl[0] = ((uint32_t)VGA_WIDTH << 16) | (uint32_t)VGA_HEIGHT;
  ctl[1] = 0; /* sync 寄存器初始为 0 */

  add_mmio_map("vgactl", VGA_CTL_MMIO, VGA_CTL_SIZE,
               vgactl_port_base, vga_handler);
  add_mmio_map("vmem", VGA_FB_ADDR, (uint32_t)fb_size, vga_mem, NULL);

  vga_init_window();
}

void vga_update_screen(void) {
  uint32_t sync = 0;
  memcpy(&sync, vgactl_port_base + 4, sizeof(sync));

  if (sync == 0u) {
    return;
  }
  /* 清掉 sync 寄存器，表示本次刷新已被消费 */
  memset(vgactl_port_base + 4, 0, sizeof(sync));

  SDL_UpdateTexture(texture, NULL, vga_mem, VGA_WIDTH * sizeof(uint32_t));
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);
}

void vga_destroy(void) {
  if (texture != NULL) {
    SDL_DestroyTexture(texture);
    texture = NULL;
  }
  if (renderer != NULL) {
    SDL_DestroyRenderer(renderer);
    renderer = NULL;
  }
  if (window != NULL) {
    SDL_DestroyWindow(window);
    window = NULL;
  }

  free(vga_mem);
  vga_mem = NULL;

  SDL_Quit();
}
