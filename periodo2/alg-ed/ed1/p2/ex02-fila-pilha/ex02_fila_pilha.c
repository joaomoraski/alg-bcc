#include "fila.h"
#include "pilha.h"
#include "string.h"

/**************************************
* DADOS
**************************************/

struct fila {
    Pilha *p1;
    Pilha *p2;
    int qtde;
};

typedef struct no {
    TipoElemento dado;
    struct no *prox;
} No;

struct pilha {
    int qtde;
    No *topo;
};

bool filaValida(Fila *f) {
    return (f != NULL ? true : false);
}

/**************************************
* Exercício
**************************************/
Fila *fila_criar() {
    Fila *fila = (Fila *) malloc(sizeof(Fila));
    fila->qtde = 0;
    fila->p1 = pilha_criar();
    fila->p2 = pilha_criar();
    return fila;
}

bool fila_inserir(Fila *f, TipoElemento elemento) {
    if (!filaValida(f)) return false;
    pilha_empilhar(f->p1, elemento);
    f->qtde++;
    return true;
}

void fila_destruir(Fila **enderecoFila) {
    Fila *fila = *enderecoFila;
    pilha_destruir(&fila->p1);
    pilha_destruir(&fila->p2);
    fila->qtde = 0;
    free(fila);
    fila = NULL;
    enderecoFila = NULL;
}

bool fila_remover(Fila *f, TipoElemento *saida) {
    if (!filaValida(f)) return false;
    No *noAux = f->p1->topo;
    No *noAnt = f->p1->topo;
    for (int i = 0; i < f->qtde; ++i) {
        if (f->qtde - i == 1) {
            noAnt = noAux;
            noAnt->prox = NULL;
            *saida = noAux->dado;
            f->qtde--;
            return true;
        }
        noAux = noAux->prox;
    }
    *saida = noAux->dado;
    f->qtde--;
    return true;
}

bool fila_primeiro(Fila *f, TipoElemento *saida) {
    if (!filaValida(f)) return false;
    No *noAux = f->p1->topo;
    for (int i = 0; i < f->qtde; ++i) {
        if (f->qtde - i == 1) {
            *saida = noAux->dado;
            return true;
        }
        noAux = noAux->prox;
    }
    *saida = noAux->dado;
    return true;
}

bool fila_vazia(Fila *f) {
    if (!filaValida(f)) return false;
    if (f->qtde == 0) return true;
    return false;
}


bool fila_toString(Fila *f, char *saida) {
    if (!filaValida(f)) return false;
    No *noAux = f->p1->topo;
    for (int i = 0; i < f->qtde; ++i) {
        if (f->qtde - i == 1) {
            pilha_empilhar(f->p2, noAux->dado);
            break;
        }
        pilha_empilhar(f->p2, noAux->dado);
        noAux = noAux->prox;
    }
    pilha_toString(f->p2, saida);
    pilha_destruir(&f->p2);
    f->p2 = pilha_criar();
    return true;
}