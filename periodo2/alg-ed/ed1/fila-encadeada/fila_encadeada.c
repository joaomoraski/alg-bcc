#include "fila.h"
#include<string.h>

/**************************************
* DADOS
**************************************/
typedef struct no {
    int dado;
    struct no *prox;
} No;
struct fila {
    No *inicio;
    No *fim;
    int qtde;
};

/**************************************
* IMPLEMENTAÇÃO
**************************************/
Fila *fila_criar(){
    Fila *fila = (Fila *) malloc(sizeof(Fila));
    fila->qtde = 0;
    fila->fim = 0;
    fila->inicio = 0;
    return fila;
}

void fila_destruir(Fila **enderecoFila);

bool fila_inserir(Fila *f, TipoElemento elemento){
    No *no_novo = (No *) malloc(sizeof(No));
    no_novo->dado = elemento;
    if (f->qtde == 0){
        f->inicio = no_novo;
        f->fim = no_novo;
    }
    if (f->fim) f->fim->prox = no_novo;
    f->fim = no_novo;
    f->qtde++;
    return true;
}

bool fila_remover(Fila *f, TipoElemento *saida){
    if (f->inicio == 0) return false;
    *saida = f->inicio->dado;
    f->inicio = f->inicio->prox;
    f->qtde--;
    return true;
}

bool fila_primeiro(Fila *f, TipoElemento *saida){
    if (f->inicio == 0) return false;
    return f->inicio;
}

bool fila_vazia(Fila *f){
    return f->qtde ? true : false;
}

void fila_toString(Fila *f, char *saida){
    saida[0] = '\0';
    int i = f->qtde;
    strcat(saida, "[");
    Fila *atual = f;
    while (atual->inicio->prox != NULL) {
        char elemento[200];
        sprintf(elemento, "%d", atual->inicio->dado);
        strcat(saida, elemento);
        atual->inicio = atual->inicio->prox;
        if ((f->qtde - i) <= 1) strcat(saida, ",");
        i--;
    }
    strcat(saida, "]");
}
