#include <stdint.h>
#include <stdlib.h>
#include "libretro.h"
#include "m68k/m68k.h"
#ifndef JAGGER_M68K_H
#define JAGGER_M68K_H

#define m68k_read_memory_8(A)   jagger_m68k_read_byte(A)
#define m68k_read_memory_16(A)  jagger_m68k_read_word(A)
#define m68k_read_memory_32(A)  jagger_m68k_read_int(A)

#define m68k_write_memory_8(A)   jagger_m68k_write_byte(A)
#define m68k_write_memory_16(A)  jagger_m68k_write_word(A)
#define m68k_write_memory_32(A)  jagger_m68k_write_int(A)


/** In your host program, implement the following functions:
    unsigned int  m68k_read_memory_8(unsigned int address);
    unsigned int  m68k_read_memory_16(unsigned int address);
    unsigned int  m68k_read_memory_32(unsigned int address);
    void m68k_write_memory_8(unsigned int address, unsigned int value);
    void m68k_write_memory_16(unsigned int address, unsigned int value);
    void m68k_write_memory_32(unsigned int address, unsigned int value);
*/

// reads and writes
unsigned int jagger_m68k_read_byte(unsigned int);
unsigned int jagger_m68k_read_word(unsigned int);
unsigned int jagger_m68k_read_int(unsigned int);
void jagger_m68k_write_byte(unsigned int, unsigned int);
void jagger_m68k_write_word(unsigned int, unsigned int);
void jagger_m68k_write_int(unsigned int, unsigned int);

#endif //JAGGER_M68K_H
