#include "lista_incidencia.h"

/**************************************
* DADOS
**************************************/

//typedef struct no {
//    int dado;
//    struct no *prox;
//} No;
//
//typedef struct {
//    No **vetor;
//    int nos;
//} Lista;


/**************************************
* Auxiliares
**************************************/

bool listaValida(Lista *l) {
    return (l != NULL ? true : false);
}

bool verificaOpcao(Lista *l, int a, int b) {
    return a < l->nos && b < l->nos ? true : false;
}

No *criar_no(int dado) {
    No *no = (No *) malloc(sizeof(No));
    no->dado = dado;
    no->prox = NULL;
    return no;
}

/**************************************
* Exercício
 * tem que criar uma validacao pro bagulho que n existe o vertice
**************************************/

Lista *lista_criar(int nos) {
    Lista *lista = (Lista *) malloc(sizeof(Lista));
    lista->nos = nos;
    lista->vetor = calloc(nos, sizeof(No));
    return lista;
}

void lista_destruir(Lista **enderecoLista) {
    Lista *lista = *enderecoLista;
    lista->nos = 0;
    free(lista);
    lista = NULL;
    enderecoLista = NULL;
}

bool lista_temCaminho(Lista *l, int a, int b) {
    if (!listaValida(l)) return false;
    if (!verificaOpcao(l, a, b)) return false;

    No *noAux = l->vetor[a];
    while (noAux != NULL) {
        if (noAux->dado == b) return true;
        noAux = noAux->prox;
    }
    return false;
}

bool lista_inserirCaminho(Lista *l, int a, int b) {
    if (!listaValida(l)) return false;
    if (!verificaOpcao(l, a, b)) return false;

    if (l->vetor[a] == NULL) {
        No *novo_no = criar_no(b);
        l->vetor[a] = novo_no;
    }
    if (l->vetor[b] == NULL) {
        No *novo_no = criar_no(a);
        l->vetor[b] = novo_no;
    }

    No *no_novoIda = criar_no(b);
    no_novoIda->prox = l->vetor[a];
    l->vetor[a] = no_novoIda;

    No *no_novoVolta = criar_no(a);
    no_novoVolta->prox = l->vetor[b];
    l->vetor[b] = no_novoVolta;
    return false;
}

bool lista_removerCaminho(Lista *l, int a, int b) {
    if (!listaValida(l)) return false;
    if (!verificaOpcao(l, a, b)) return false;
    No *noAux = l->vetor[a];
    No *noAuxB = l->vetor[b];
    int passou = 0;

    if (noAux->dado == b){
        if (noAux->prox != NULL){
            l->vetor[a] = noAux->prox;
        } else{
            l->vetor[a] = NULL;
        }
        passou = 1;
    }
    if (noAuxB->dado == b){
        if (noAuxB->prox != NULL) {
            l->vetor[b] = l->vetor[b]->prox;
        } else{
            l->vetor[b] = NULL;
        }
        passou = 1;
    }

    if (passou == 1) return true;

    int cont = 0;
    while (noAux != NULL){
        if (noAux->dado == b) break;
        noAux = noAux->prox;
        cont++;
    }


    if (cont == 1){
        l->vetor[a]->prox = NULL;
        cont = 0;
    }
    while (cont >= 1){
        noAux = noAux->prox;
        cont--;
    }
    noAux->prox = noAux->prox->prox;


//    ------------------------------------------------------------------
    cont = 0;
    noAuxB = l->vetor[b];
    while (noAuxB != NULL){
        if (noAuxB->dado == a) break;
        noAuxB = noAuxB->prox;
        cont++;
    }

    if (cont == 0){
        l->vetor[b] = NULL;
    }
    if (cont == 1){
        l->vetor[b]->prox = NULL;
        cont--;
    }
    return true;
}


void lista_toString(Lista *l, char *saida) {
    saida[0] = '\0';
    char string[100];

    for (int i = 0; i < l->nos; i++) {
        sprintf(string, "[%d] ", i);
        strcat(saida, string);

        for (int j = 0; j < l->nos; j++) {
            if (lista_temCaminho(l, i, j)) {
                sprintf(string, "%d ", j);
                strcat(saida, string);
            }
        }
        strcat(saida, "\n");
    }
}