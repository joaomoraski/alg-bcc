//
// Created by moraski on 13/07/2021.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "tad_timer.h"

struct timer {
    time_t begin, end;
};

Timer *timer_criar() {
    Timer *t = (Timer *) calloc(1, sizeof(Timer));
    return t;
}

void timer_desalocar(Timer **t) {
    free(*t);
}

void timer_start(Timer *t) {
    time(&t->begin);
}

void timer_stop(Timer *t) {
    time(&t->end);
}

void timer_reset(Timer *t) {
    free(t);
}

float timer_resultado(Timer *t) {
    return (double) t->end - t->begin;
}

