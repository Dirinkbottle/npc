#include "SDL2/SDL.h"

#include <assert.h>
#include <stdint.h>
#include <stdio.h>

#include "cpu.h"
#include "memory.h"
#include "./include/keyboard.h"

#define KEYDOWN_MASK 0x8000u
#define MAP(c, f) c(f)

#define NEMU_KEYS(f) \
  f(ESCAPE) f(F1) f(F2) f(F3) f(F4) f(F5) f(F6) f(F7) f(F8) f(F9) f(F10) f(F11) f(F12) \
  f(GRAVE) f(1) f(2) f(3) f(4) f(5) f(6) f(7) f(8) f(9) f(0) f(MINUS) f(EQUALS) f(BACKSPACE) \
  f(TAB) f(Q) f(W) f(E) f(R) f(T) f(Y) f(U) f(I) f(O) f(P) f(LEFTBRACKET) f(RIGHTBRACKET) f(BACKSLASH) \
  f(CAPSLOCK) f(A) f(S) f(D) f(F) f(G) f(H) f(J) f(K) f(L) f(SEMICOLON) f(APOSTROPHE) f(RETURN) \
  f(LSHIFT) f(Z) f(X) f(C) f(V) f(B) f(N) f(M) f(COMMA) f(PERIOD) f(SLASH) f(RSHIFT) \
  f(LCTRL) f(APPLICATION) f(LALT) f(SPACE) f(RALT) f(RCTRL) \
  f(UP) f(DOWN) f(LEFT) f(RIGHT) f(INSERT) f(DELETE) f(HOME) f(END) f(PAGEUP) f(PAGEDOWN)

#define NEMU_KEY_NAME(k) NEMU_KEY_ ## k,

enum {
  NEMU_KEY_NONE = 0,
  MAP(NEMU_KEYS, NEMU_KEY_NAME)
};

#define SDL_KEYMAP(k) keymap[SDL_SCANCODE_ ## k] = NEMU_KEY_ ## k;
static uint32_t keymap[256] = {0};

static void init_keymap(void) {
  MAP(NEMU_KEYS, SDL_KEYMAP)
}

#define KEY_QUEUE_LEN 1024u
static uint32_t key_queue[KEY_QUEUE_LEN] = {0};
static uint32_t key_f = 0;
static uint32_t key_r = 0;

static void key_enqueue(uint32_t scancode) {
  key_queue[key_r] = scancode;
  key_r = (key_r + 1u) % KEY_QUEUE_LEN;
  assert(key_r != key_f && "key queue overflow!");
}

static uint32_t key_dequeue(void) {
  uint32_t key = NEMU_KEY_NONE;
  if (key_f != key_r) {
    key = key_queue[key_f];
    key_f = (key_f + 1u) % KEY_QUEUE_LEN;
  }
  return key;
}

void keyboard_update(void) {
  SDL_Event ev;

  while (SDL_PollEvent(&ev)) {
    if (ev.type == SDL_QUIT) {
      set_npc_state(SIM_QUIT);
      continue;
    }
    
    if (ev.type == SDL_KEYDOWN || ev.type == SDL_KEYUP) {
      uint32_t scancode = ev.key.keysym.scancode;
      if (scancode < 256u && keymap[scancode] != NEMU_KEY_NONE) {
        uint32_t code = keymap[scancode] |
                        (ev.type == SDL_KEYDOWN ? KEYDOWN_MASK : 0u);
        key_enqueue(code);
      }
    }
  }
}

static uint32_t keyboard_port_base[KEYBOARD_MMIO_SIZE / sizeof(uint32_t)];

static void keyboard_handler(uint32_t offset, uint32_t len, bool is_write) {
  if (is_write) {
    fprintf(stderr, "keyboard: write is not supported\n");
    assert(0);
    return;
  }
  if (offset != 0u || len != 4u) {
    fprintf(stderr, "keyboard: unsupported access offset=%u len=%u\n",
            offset, len);
    assert(0);
    return;
  }

  keyboard_port_base[0] = key_dequeue();
}

void init_keyboard(void) {
  init_keymap();
  keyboard_port_base[0] = NEMU_KEY_NONE;

  add_mmio_map("keyboard", KEYBOARD_MMIO_BASE, KEYBOARD_MMIO_SIZE,
               (uint8_t *)keyboard_port_base, keyboard_handler);
}
