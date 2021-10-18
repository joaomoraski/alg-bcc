#include "lista.h"
#include <string.h>


/*------------------------------------------------
EspecificaÃ§Ã£o dos dados
-------------------------------------------------*/
typedef struct no{
    TipoElemento dado;
    struct no    *ant;
    struct no    *prox;
}No;

struct lista{
    No *sentinela;
    int qtde;
};

/*------------------------------------------------
FUNÃ‡Ã•ES AUXILIARES
-------------------------------------------------*/
No* criar_no(TipoElemento elemento){
    No* no = (No*) malloc(sizeof(No));
    no->dado = elemento;
    no->prox = NULL;
    no->ant = NULL;
    return no;
}

No* devolver_enderecoNo(Lista* l, int posicao){
    No* aux = l->sentinela;
    for (int i=0; i <= posicao; i++) aux = aux->prox;
    return aux;
}

void insere_direita(No* referencia, No* no){
    no->prox = referencia->prox;
    no->ant = referencia;
    referencia->prox->ant = no;
    referencia->prox = no;
}


/*------------------------------------------------
ImplementaÃ§Ã£o das funÃ§Ãµes
-------------------------------------------------*/

Lista* lista_criar(){
    Lista* l = (Lista*) malloc(sizeof(Lista));
    l->sentinela = (No*) malloc(sizeof(No));
    l->sentinela->prox = l->sentinela;
    l->sentinela->ant = l->sentinela;
    return l;
}

void lista_destruir(Lista** endereco){
    Lista* l = *endereco;
    No* aux;
    TipoElemento e;
    while(l->qtde > 0){
        lista_removerPosicao(l, 0, &e);
    }
    free(l);
    *endereco = NULL;
}

bool lista_anexar(Lista* l, TipoElemento elemento){
//    printf("criou um");
    No* novo = criar_no(elemento);
    if (l->qtde == 0){
        novo->ant = l->sentinela;
        novo->prox = l->sentinela;
        l->sentinela->prox = novo;
        l->sentinela->ant = novo;
        l->qtde++;
        return true;
    }
    novo->ant = l->sentinela->ant;
    l->sentinela->ant->prox = novo;
    novo->prox = l->sentinela;
    l->sentinela->ant = novo;
    l->qtde++;
    return true;
}

bool lista_inserir(Lista* l, TipoElemento elemento, int posicao){

    No* novo = criar_no(elemento);
    No* aux = devolver_enderecoNo(l, posicao-1);
    insere_direita(aux, novo);

    l->qtde++;
    return true;
}

bool lista_removerPosicao(Lista* l, int posicao, TipoElemento* endereco){

    No *no_atual = l->sentinela;
    for (int i = 0; i < posicao; ++i) {
        no_atual = no_atual->prox;
    }
    if (posicao != 0){
        No *anterior = no_atual->ant;
        anterior->prox = no_atual->prox;
        No *proximo = no_atual->prox;
        proximo->ant = no_atual->ant;
        endereco = &no_atual->dado;
        l->qtde--;
        return true;
    }
    No *proximo = no_atual->prox;
    proximo->ant = NULL;
    endereco = &no_atual->dado;
    l->qtde--;
    return true;
}

int lista_removerElemento(Lista* l, TipoElemento elemento){

    No *no_atual = l->sentinela;
    if (no_atual->dado == elemento){
        No *posterior = no_atual->prox;
        posterior->ant = NULL;
        l->qtde--;
        return 0;
    }
    int cont = 0;
    while (cont < l->qtde){
        no_atual = no_atual->prox;
        cont++;
        if (no_atual->dado == elemento){
            No *anterior = no_atual->ant;
            anterior->prox = no_atual->prox;
            No *proximo = no_atual->prox;
            proximo->ant = no_atual->ant;
            l->qtde -= 1;
            return cont;
        }
    }
    return -1;
}

bool lista_substituir(Lista* l, int posicao, TipoElemento novoElemento){
    No *no_atual = l->sentinela;
    for (int i = 0; i < posicao; ++i) {
        no_atual = no_atual->prox;
    }
    no_atual->dado = novoElemento;
    return true;
}

int lista_posicao(Lista* l, TipoElemento elemento){
    int posicao = 0;
    No *no_atual = l->sentinela;
    while (no_atual->dado != elemento){
        no_atual = no_atual->prox;
        posicao++;
    }
    return posicao;
}

bool lista_buscar(Lista* l, int posicao, TipoElemento* endereco){
    No *no_atual = l->sentinela;
    for (int i = 0; i < posicao; ++i) {
        no_atual = no_atual->prox;
    }
    endereco = &no_atual->dado;
    return true;
}

int lista_tamanho(Lista* l){
    return l->qtde;
}

bool lista_vazia(Lista* l){
    return (l->qtde == 0 ? true : false);
}

bool lista_toString(Lista* l, char* str){
    char elemento[20];

//    printf("[%d,%d,%d]\n", l->sentinela->prox->dado, l->sentinela->prox->prox->dado, l->sentinela->prox->prox->prox->dado);
    str[0] = '\0';
    strcat(str, "[");
    No* aux = l->sentinela->prox;
    for (int i = 0; i < l->qtde; ++i) {
        sprintf(elemento, FORMATO, aux->dado);
        strcat(str, elemento);
        if(l->qtde - i > 1) strcat(str, ",");
        aux = aux->prox;
    }
    strcat(str, "]");
    return true;
}