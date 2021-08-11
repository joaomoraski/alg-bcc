//
// Created by moraski on 17/06/2021.
//
#include<stdio.h>
#include<stdlib.h>


int getMediaAritmetica(int value1, int  value2, int value3){
    return  (value1 + value2 + value3)/3;
}

int main (int argc, char const *argv[]){

    // E3 - Argumentos na execução
    if (argc > 4 || argc < 4) return 0; // se informar mais de 3 valores sai da execução
    int value1 = atoi(argv[1]), value2 = atoi(argv[2]), value3 = atoi(argv[3]);
    // Procesasmento
    int media = getMediaAritmetica(value1, value2, value3);

    printf("Media: %d\n", media);

    return 0;
}
