#include <stdint.h>
#include <stdlib.h>
#include "libretro.h"

#ifndef JAGGER_M68K_H
#define JAGGER_M68K_H

#define JAGGER_M68K_D0_OR_A0 0x0
#define JAGGER_M68K_D1_OR_A1 0x1
#define JAGGER_M68K_D2_OR_A2 0x2
#define JAGGER_M68K_D3_OR_A3 0x3
#define JAGGER_M68K_D4_OR_A4 0x4
#define JAGGER_M68K_D5_OR_A5 0x5
#define JAGGER_M68K_D6_OR_A6 0x6
#define JAGGER_M68K_D7_OR_USP 0x7

#define JAGGER_M68K_CCR_EXTEND_BIT (1 << 4)
#define JAGGER_M68K_CCR_NEGATIVE_BIT (1 << 3)
#define JAGGER_M68K_CCR_ZERO_BIT (1 << 2)
#define JAGGER_M68K_CCR_OVERFLOW_BIT (1 << 1)
#define JAGGER_M68K_CCR_CARRY_BIT (1 << 0)

typedef uint_fast32_t jagger_m68k_data;
typedef uint_fast32_t jagger_m68k_addr;
typedef uint_fast32_t jagger_m68k_pc;
typedef uint_fast8_t jagger_m68k_ccr;

typedef struct {
    // A0 to A7. A7 can be a User Stack Pointer.
    // SEE: NXP Motorola 68000 Programmer's Reference Manual, section 1-2
    jagger_m68k_addr addr[8];

    // D0 to D7
    jagger_m68k_data data[8];

    // Program Counter
    jagger_m68k_pc pc;

    // Condition Code Register
    jagger_m68k_ccr ccr;
} jagger_m68k_t;

// Motorola 68000 startup routine
void jagger_m68k_init(jagger_m68k_t **);

// Execute one instruction
void jagger_m68k_step(jagger_m68k_t *);

// Remove, we're done
void jagger_m68k_deinit(jagger_m68k_t *);

#endif //JAGGER_M68K_H
