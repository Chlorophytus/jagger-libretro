#include "runloop.h"

void jagger_runloop_init(jagger_runloop_t **r) {
    (*r) = (jagger_runloop_t *)malloc(sizeof(jagger_m68k_t));
    // jagger_m68k_init(&((*r)->manager));
}

void jagger_runloop_step(jagger_runloop_t *r) {

}

void jagger_runloop_deinit(jagger_runloop_t *r) {
    free(r);
}