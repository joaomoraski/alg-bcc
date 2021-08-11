//
// Created by moraski on 29/06/2021.
//
#include<stdio.h>


int main (){

    typedef struct produto{
        int codigo;
        char descricao[12];
        float preco
    } Produto;

    Produto produto1 = {10, "Teclado\0", 98.50};
    Produto* p = &produto1;
    int* pi = &produto1.codigo;
    char* pc = &produto1.descricao;
    float* pf = &produto1.preco;


}


