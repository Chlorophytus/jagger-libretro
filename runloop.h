#include "m68k.h"

#ifndef JAGGER_RUNLOOP_H
#define JAGGER_RUNLOOP_H

typedef struct {
    jagger_m68k_t *manager;
} jagger_runloop_t;

void jagger_runloop_init(jagger_runloop_t **);
void jagger_runloop_step(jagger_runloop_t *);
void jagger_runloop_deinit(jagger_runloop_t *);

#endif //JAGGER_RUNLOOP_H
