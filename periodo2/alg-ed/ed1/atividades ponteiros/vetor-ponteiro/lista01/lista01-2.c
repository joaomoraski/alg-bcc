//
// Created by moraski on 28/06/2021.
//
#include<stdio.h>

int main(){
    int v[4] = {1,2,3,4};
    int i = 30;
    int *p = v;
    printf("[ ");
    for (int j = 0; j < 4; ++j) {
        printf("%d ", *(v+j));
    }
    printf("]\n");
    return 0;
}
