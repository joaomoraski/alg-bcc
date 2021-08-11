//
// Created by moraski on 13/07/2021.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "tad_timer.h"

struct timer {
    clock_t start, end;
};

Timer *timer_criar() {
    return (Timer *) calloc(1, sizeof(Timer));
}

void timer_desalocar(Timer **t) {
    free(*t);
}

void timer_start(Timer *t) {
    t->start = clock();
}

void timer_stop(Timer *t) {
    t->end = clock();
}

void timer_reset(Timer *t) {
    free(t);
}

float timer_resultado(Timer *t) {
    return (float)(t->end - t->start)/CLOCKS_PER_SEC;
}

