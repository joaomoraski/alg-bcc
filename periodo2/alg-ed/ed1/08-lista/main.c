#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

#include "lista.h"

int main(){
    Lista* l = lista_criar();

    lista_anexar(l, 10);
    lista_anexar(l, 20);
    lista_anexar(l, 30);     // [10,20,30]

    lista_inserir(l, 5, 0);  // [5,10,20,30]
    lista_inserir(l, 15, 2);  // [5,10,15,20,30]
    lista_inserir(l, 40, 5);  // [5,10,15,20,30,40]

    lista_substituir(l, 0, 2); // [2,10,15,20,30,40]


    TipoElemento x;
    if (lista_buscar(l, 0, &x)){
        printf("%d\n", x);
    }



    bool lista_removerPosicao(Lista* l, int posicao, TipoElemento* endereco);

    TipoElemento elemento;
    lista_removerPosicao(l, 0, &elemento);
    printf("%d\n", elemento);


    int pos = lista_removerElemento(l, 100);
    printf("%d\n", pos); // -1









    return 0;
}