//
// Created by moraski on 29/06/2021.
//
#include<stdio.h>

int main (){
    int m[4][2] = {
            {1,2}, // 0
            {3,4}, // 1
            {5,6}, // 2
            {7,8}, // 3
    };
    int *p = (int*) m;
    int *w = &m[3][0];
    printf("%p\n", m[0]);
    return 0;
}


