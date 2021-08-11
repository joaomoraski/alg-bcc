//
// Created by moraski on 17/06/2021.
//
#include<stdio.h>


int getMediaAritmetica(int value1, int  value2, int value3){
    return  (value1 + value2 + value3)/3;
}

int main (){

    // E4 - Arquivos
    int value1, value2, value3;
    // Entrada
    FILE *arq_in = fopen("entry.in", "r");
    fscanf(arq_in, "%d %d %d", &value1, &value2, &value3);
    fclose(arq_in);

    // Procesasmento
    int media = getMediaAritmetica(value1, value2, value3);

    printf("Media: %d\n", media);

    return 0;
}
