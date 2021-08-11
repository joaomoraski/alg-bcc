#include "tad_estoque.h"

#define TAM 100

struct estoque {
    char descricao[50];
    Produto *vetor[TAM];
    int qtde;
};

Estoque *estoque_criar(char *descricao) {
    Estoque *estoque = calloc(1, sizeof(Estoque));
    strcpy(estoque->descricao, descricao);
    estoque->qtde = 0;
    return estoque;
}

void estoque_destruir(Estoque **endEstoque) {
    free(*endEstoque);
    *endEstoque = NULL;
}

bool estoque_anexar(Estoque *e, Produto *p) {
    if (e->qtde > TAM) return false;
    e->vetor[e->qtde] = p;
    e->qtde++;
    return true;
}

int estoque_remover_elemento(Estoque *e, char *descricao) {
    char descricaoSaida[50];
    for (int i = 0; i < e->qtde; ++i) {
        bool res = produto_descricao(e->vetor[i], descricaoSaida);
        if (res){
            if (strcmp(descricaoSaida, descricao) == 0){
                produto_destruir(&e->vetor[i]);
                for (int j = i; j < e->qtde - 1; j++) {
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
     printf("[");
    char descricaoSaida[50];

    for (int i = 0; i < e->qtde; ++i) {
        produto_descricao(e->vetor[i], descricaoSaida);
        Produto *produto = e->vetor[i];
        if (e->qtde - i == 1){
            printf("(%d,%s,%.2f)", produto_codigo(produto), descricaoSaida, produto_preco(produto));
        } else{
            printf("(%d,%s,%.2f),", produto_codigo(produto), descricaoSaida, produto_preco(produto));
        }
    }
     printf("]");
}