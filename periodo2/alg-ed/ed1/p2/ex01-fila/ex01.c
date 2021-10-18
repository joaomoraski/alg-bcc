#include "fila.h"

// 1 : ascendente
// -1: Descendente
// 10 50 30 40 20

/*************************
    FUNÇÕES AUXILIARES
**************************/

bool filaValida(Fila *f) {
    return (f != NULL ? true : false);
}

bool verificarMaior(Fila *f, TipoElemento dado) {
    No *noAux = f->inicio;
    for (int i = 0; i < f->qtde; ++i) {
        if (dado > noAux->dado) {
            noAux = noAux->prox;
        } else {
            return false;
        }
    }
    return true;
}

bool verificarMenor(Fila *f, TipoElemento dado, int ordem) {
    if (ordem == 1) {
        if (dado < f->inicio->dado) return true;
        return false;
    }
    if (ordem == -1) {
        if (dado < f->fim->dado) return true;
        return false;
    }
    return false;
}

No *criar_no(TipoElemento e) {
    No *no = (No *) malloc(sizeof(No));
    no->dado = e;
    no->prox = NULL;
    return no;
}

bool inserirAscendente(Fila *f, TipoElemento elemento, No *no_novo) {
    if (verificarMaior(f, elemento)) {
        f->fim->prox = no_novo;
        f->fim = no_novo;
        f->qtde++;
        return true;
    }
    if (verificarMenor(f, elemento, f->ordem)) {
        no_novo->prox = f->inicio;
        f->inicio = no_novo;
        f->qtde++;
        return true;
    }
    No *noAux = f->inicio;
    while (noAux->prox != NULL) {
        if (no_novo->dado >= noAux->dado && no_novo->dado <= noAux->prox->dado) {
            no_novo->prox = noAux->prox;
            noAux->prox = no_novo;
            f->qtde++;
            return true;
        }
        noAux = noAux->prox;
    }
    return false;
}

bool inserirDescendente(Fila *f, TipoElemento elemento, No *no_novo) {
    if (verificarMaior(f, elemento)) {
        no_novo->prox = f->inicio;
        f->inicio = no_novo;
        f->qtde++;
        return true;
    }
    if (verificarMenor(f, elemento, f->ordem)) {
        f->fim->prox = no_novo;
        f->fim = no_novo;
        f->qtde++;
        return true;
    }

    No *noAux = f->inicio;
    while (noAux->prox != NULL) {
        if (no_novo->dado <= noAux->dado && no_novo->dado >= noAux->prox->dado) {
            no_novo->prox = noAux->prox;
            noAux->prox = no_novo;
            f->qtde++;
            return true;
        }
        noAux = noAux->prox;
    }
    return false;
}

/*********************************
    FUNÇÕES DO EXERCICIO
**********************************/


Fila *fila_criar(int ordem) {
    Fila *fila = (Fila *) malloc(sizeof(Fila));
    fila->qtde = 0;
    fila->fim = NULL;
    fila->inicio = NULL;
    fila->ordem = ordem;
    return fila;
}

bool fila_inserir(Fila *f, TipoElemento elemento) {
    if (!filaValida(f)) return false;
    No *no_novo = criar_no(elemento);
    no_novo->dado = elemento;
    if (fila_vazia(f)) {
        f->inicio = no_novo;
        f->fim = no_novo;
        f->qtde++;
        return true;
    }
    if (f->ordem == 1) return inserirAscendente(f, elemento, no_novo);
    if (f->ordem == -1) return inserirDescendente(f, elemento, no_novo);
    return false;
}
   