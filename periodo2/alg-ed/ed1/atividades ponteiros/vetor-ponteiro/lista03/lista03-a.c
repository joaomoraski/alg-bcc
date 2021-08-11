//
// Created by moraski on 28/06/2021.
//
#include<stdio.h>

int main(){
    // arrays
    int v1[3] = {1, 2, 3};
    int v2[3] = {4, 5, 6};

    // pointers
    int *p1 = v1;
    int *p2 = v2;

    int *m[2] = {v1, v2};
    int **pm = m;

    printf("%d", v1);

    return 0;
}
