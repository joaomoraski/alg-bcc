//
// Created by moraski on 17/06/2021.
//
#include<stdio.h>


int getMediaAritmetica(int value1, int  value2, int value3){
    return  (value1 + value2 + value3)/3;
}

int main (){

    // E2 - Hard Coding

    int value1 = 60, value2 = 60, value3 = 60;

    // Procesasmento
    int media = getMediaAritmetica(value1, value2, value3);

    printf("Media: %d\n", media);

    return 0;
}
