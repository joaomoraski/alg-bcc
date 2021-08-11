#include "pilha.h"

typedef struct no{
	TipoElemento dado;
	struct no    *prox;
}No;

struct pilha{
	int qtde;
    	No *topo;
};



/**************************************
* PROTÓTIPOS
**************************************/
Pilha* pilha_criar(){
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    p->qtde = 0;
    p->topo = 0;
    return p;
}

void pilha_destruir(Pilha** endereco){
    Pilha* p = *endereco;
    free(p->topo->prox);
    free(p);
    *endereco = NULL;
}

bool pilha_empilhar(Pilha* p, TipoElemento elemento){
    No* no_novo = (No*) malloc(sizeof(No));
    if (p->topo){
        no_novo->prox = p->topo;
        no_novo->dado = elemento;
        p->qtde++;
        p->topo = no_novo;
        return true;
    }
    no_novo->dado = elemento;
    p->topo = no_novo;
    p->qtde++;
    return true;
}

bool pilha_desempilhar(Pilha* p, TipoElemento* saida){
    if (p->topo){
        *saida = p->topo->dado;
        p->topo = p->topo->prox;
        p->qtde--;
        return true;
    }
    return false;
}

bool pilha_topo(Pilha* p, TipoElemento* saida){
    if (p->topo){
        *saida = p->topo->dado;
        return true;
    }
    return false;
}

bool pilha_vazia(Pilha* p){
    if (p->topo){
        return true;
    }
    return false;
}

void pilha_toString(Pilha* p, char* saida){
    saida[0] = '\0';
    int i = p->qtde;
    strcat(saida, "[");
    Pilha *atual = p;
    while (atual->topo != NULL){
        char elemento[200];
        sprintf(elemento, "%d", p->topo->dado);
        strcat(saida, elemento);
        atual->topo = atual->topo->prox;
        if ((p->qtde - i) <= 1) strcat(saida, ",");
        i--;
    }
    strcat(saida, "]");
}