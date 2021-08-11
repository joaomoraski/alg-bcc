#include "tad_estoque.h"
#include "tad_produto.h"
#include <string.h>

#define TAM 100

struct estoque {
    char descricao[50];
    Produto *vetor[TAM];
    int qtde;
};


Estoque *estoque_criar(char *descricao) {
    Estoque *est = (Estoque *) calloc(1, sizeof(Estoque));
    strcpy(est->descricao, descricao);
    est->qtde = 0;
}

void estoque_destruir(Estoque **endEstoque) {
    free(*endEstoque);
    *endEstoque = NULL;
}

bool estoque_anexar(Estoque *e, Produto *p) {
    char aux1[50], aux2[50];
    for (int i = 0; i < TAM; i++) {
        produto_descricao(e->vetor[i], aux1);
        produto_descricao(p, aux2);
        if (aux1 == aux2) {
            return false;
        }
        if (e->vetor[i] == 0) {
            e->vetor[i] = p;
            e->qtde++;
            return true;
        }
    }
    return false;
}

int estoque_remover_elemento(Estoque *e, char *descricao) {
    char prod[50];
    int i, j;
    for (i = 0; i < e->qtde; i++) {
        if (produto_descricao(e->vetor[i], prod)) {
            if (strcmp(prod, descricao) == 0) {
                produto_destruir(&e->vetor[i]);
                for (j = i; j < e->qtde - 1; j++) {
                    e->vetor[j] = e->vetor[j + 1];
                }
                e->qtde--;
                return i;
            }
        }
    }
    return -1;
}

void estoque_imprimir(Estoque *e) {
    char aux[50];
    printf("[");
    for (int i = 0; i < e->qtde - 1; i++) {
        produto_descricao(e->vetor[i], aux);
        printf("(%d,%s,%.2f),", produto_codigo(e->vetor[i]), aux, produto_preco(e->vetor[i]));
    }
    produto_descricao(e->vetor[e->qtde - 1], aux);
    printf("(%d,%s,%.2f)]", produto_codigo(e->vetor[e->qtde - 1]), aux, produto_preco(e->vetor[e->qtde - 1]));
}