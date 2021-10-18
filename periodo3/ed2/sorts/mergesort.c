//
// Created by moraski on 18/10/2021.
//

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "mergesort.h"

void Merge(int *v, int p, int q, int r) {
    int *e, *d;
    int i, j, k;
    int n1 = q - p + 1;
    int n2 = r - q;

    e = malloc(sizeof(int) * (n1 + 1));
    d = malloc(sizeof(int) * (n2 + 1));

    for (i = 0; i < n1; i++) {
        e[i] = v[p + i];
    }
    e[n1] = INT_MAX;

    for (j = 0; j < n2; j++) {
        d[j] = v[q + 1 + i];
    }
    d[n2] = INT_MAX;
    i = 0;
    j = 0;

    for (k = p; k < r; k++) {
        if (e[i] <= d[j]) {
            v[k] = e[i];
            i++;
        } else {
            v[k] = d[j];
            j++;
        }
    }

    free(e);
    free(d);
}

void MergeSort(int *v, int e, int d) {
    int m;
    if (e < d) {
        m = (e + d) / 2;
        MergeSort(v, e, m);
        MergeSort(v, m + 1, d);
        Merge(v, e, m, d);
    }
}