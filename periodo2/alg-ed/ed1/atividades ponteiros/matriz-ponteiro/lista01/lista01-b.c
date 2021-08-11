//
// Created by moraski on 29/06/2021.
//
#include<stdio.h>
#include<string.h>


int main (){

    typedef struct produto{
        int codigo;
        char descricao[12];
        float preco;
    } Produto;
    Produto prodA = {1, "Teclado", 98.50};
    Produto prodB = {2, "Mouse", 65.00};
    Produto prodC= {3, "Webcam", 130.00};
    Produto vet[4];
    vet[0] = prodA;
    vet[1] = prodB;
    vet[2].codigo = prodC.codigo;
    strcpy(vet[2].descricao, prodC.descricao);
    vet[2].preco = prodC.preco;

    typedef struct produto{
        int codigo;
        char descricao[12];
        float preco
    } Produto;
    Produto prodA = {1, "Teclado", 98.50};
    Produto prodB = {2, "Mouse", 65.00};
    Produto prodC= {3, "Webcam", 130.00};
    Produto* vet[4];
    vet[0] = &prodA;
    vet[1] = &prodB;
    vet[2] = &prodB;




    vet[2]->codigo = 100;

    strcpy(vet[1]->descricao, "Mouse sem fio");

    Produto prodD = {4, "Mousepad", 30.00};

    vet[3] = &prodD;

    return 0;
}


