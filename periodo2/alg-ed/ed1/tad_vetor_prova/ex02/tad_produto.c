#include "tad_produto.h"

//#include <stdbool.h>
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//
//
//typedef struct produto{
//    int codigo;
//    char descricao[50];
//    double ultimos_precos[4]; // armazena no máximo os últimos 4 preços praticados
//    int qtd_precos;           // quantidade de preços armazenados no vetor ultimos_precos
//} Produto;
struct produto{
    int codigo;
    char descricao[50];
    double ultimos_precos[4]; // armazena no máximo os últimos 4 preços praticados
    int qtd_precos;           // quantidade de preços armazenados no vetor ultimos_precos
};



Produto* produto_criar(int codigo, char* descricao, double preco){
    Produto *produto = calloc(1, sizeof(Produto));
    produto->codigo = codigo;
    strcpy(produto->descricao, descricao);
    produto->ultimos_precos[0] = preco;
    produto->qtd_precos++;
    return produto;
}

void produto_destruir(Produto** endProduto){
    free(*endProduto);
    *endProduto = NULL;
}

int produto_codigo(Produto* p){
    if (p->codigo) return p->codigo;
    return -1;
}

bool produto_descricao(Produto* p, char* saida){
    if (strlen(p->descricao) == 0) return false;
    strcpy(saida, p->descricao);
    return true;
}

double produto_preco(Produto* p){
    if (p->qtd_precos == 0) return -1;
    return p->ultimos_precos[0];

}

double produto_media_preco(Produto* p){
    if (p->qtd_precos > 4) return -1;
    double soma = 0;
    for (int i = 0; i < p->qtd_precos; ++i) {
        soma += p->ultimos_precos[i];
    }
    return soma/p->qtd_precos;
}


bool produto_altera_preco(Produto* p, double preco){
    // fiquei sofrendo pra tentar fazer algo dimamico mas nao consegui entender seus testes sem a sua main, ai não consegui pensar em algo
    if (p->qtd_precos > 4) return false;
    for (int i = 3; i > 0; --i) {
        p->ultimos_precos[i] = p->ultimos_precos[i-1];
    }
    p->ultimos_precos[0] = preco;
    if (p->qtd_precos<4) p->qtd_precos++;
    return true;
}

//
