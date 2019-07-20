#include "m68k.h"

void jagger_m68k_init(jagger_m68k_t **c) {
    (*c) = (jagger_m68k_t*)malloc(sizeof(jagger_m68k_t));
    for (int i = 0; i < 8; ++i) {
        (*c)->addr[i] = 0x0000'0000;
        (*c)->data[i] = 0x0000'0000;
    }
    (*c)->pc = 0x0000'0000;
    (*c)->ccr = 0x00;
}

void jagger_m68k_step(jagger_m68k_t *c) {

}

void jagger_m68k_deinit(jagger_m68k_t *c) {
    free(c);
}