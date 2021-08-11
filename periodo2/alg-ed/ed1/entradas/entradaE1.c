//
// Created by moraski on 17/06/2021.
//
#include<stdio.h>


int getMediaAritmetica(int value1, int  value2, int value3){
    return  (value1 + value2 + value3)/3;
}

int main (){

    // E2 - Console

    int value1, value2, value3;

    // Entrada
    scanf("%d %d %d", &value1, &value2, &value3);

    // Procesasmento
    int media = getMediaAritmetica(value1, value2, value3);

    // printf("%d\n", getMediaAritmetica(value1, value2, value3);

    printf("Media: %d\n", media);

    return 0;
}
