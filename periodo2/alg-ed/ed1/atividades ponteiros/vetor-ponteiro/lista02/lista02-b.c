//
// Created by moraski on 28/06/2021.
//
#include<stdio.h>

int main(){
    int a = 10, b = 20, c = 30, d = 40;

    int *v[4] = {&a, &b, &c, &d};
    int **p = v;

    printf("[ ");
    for (int j = 0; j < 4; ++j) {
        printf("%d ", **(v+j));
    }
    printf("]\n");
    return 0;
}
