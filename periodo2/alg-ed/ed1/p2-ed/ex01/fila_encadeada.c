#include "fila.h"
#include "string.h"

/**************************************
* DADOS
**************************************/
typedef struct no{
    int dado;
    struct no* prox;
}No;

struct fila {
    No* inicio;
    No* fim;
    int qtde;
    int ordem; // 1 : ascendente
               // -1: descendente  
};

/**************************************
* FUNÇÕES AUXILIARES
**************************************/

bool fila_ehValida(Fila* f){
    return (f != NULL? true: false);   
}

/**************************************
* Exercício
**************************************/
Fila* fila_criar(int ordem){
    Fila *fila = (Fila *) malloc(sizeof(Fila));
    fila->qtde = 0;
    fila->fim = 0;
    fila->inicio = 0;
    fila->ordem = ordem;
    return fila;
}

bool fila_inserir(Fila* f, TipoElemento elemento){
    No *no_novo = (No *) malloc(sizeof(No));
    no_novo->dado = elemento;
    if (f->qtde == 0){
        f->inicio = no_novo;
        f->fim = no_novo;
    }
    // -1: descendente
    // 1 : ascendente
    if (f->ordem == -1 && f->qtde > 0){
        No *no_aux = (No *) malloc(sizeof(No));
        No *no_aux2 = (No *) malloc(sizeof(No));
        no_aux = f->fim;
        f->inicio->prox = f->inicio;
        no_aux2 = f->inicio;
        printf("%p\n", &no_aux->prox);
        printf("%p\n", &no_aux2);
//        no_aux->prox = no_aux2;
        f->inicio = no_aux;
        f->fim = no_novo;
        f->qtde++;
        return true;
    }
    if (f->fim) f->fim->prox = no_novo;
    f->fim = no_novo;
    f->qtde++;
    return true;
}
    

/****************************************************************/
void fila_destruir(Fila** enderecoFila){
    if (enderecoFila == NULL) return;
    if(!fila_ehValida(*enderecoFila)) return;

    Fila* f = *enderecoFila;
    No* aux;
    while(f->inicio != NULL){
        aux = f->inicio;
        f->inicio = f->inicio->prox;
        free(aux);
    }
    free(f);
    *enderecoFila = NULL;
}


bool fila_remover(Fila* f, TipoElemento* saida){ // estratégia do scanf
    if(!fila_ehValida(f)) return false;
    if(fila_vazia(f)) return false;

    No* aux = f->inicio;        
    f->inicio = f->inicio->prox;
    f->qtde--;
    *saida = aux->dado;
    free(aux);
    
    if(f->inicio == NULL){        
        f->fim = NULL;
    }
    
    return true;
}

bool fila_primeiro(Fila* f, TipoElemento* saida){ // estratégia do scanf
    if(!fila_ehValida(f)) return false;
    if(fila_vazia(f)) return false;

    *saida = f->inicio->dado;
    return true;
}

bool fila_vazia(Fila* f){
    if(!fila_ehValida(f)) return true;

    return (f->qtde == 0 ? true : false);
}

int fila_tamanho(Fila* f){
    if(!fila_ehValida(f)) return 0;

    return f->qtde;
}

bool fila_toString(Fila* f, char* str){
    if (!fila_ehValida(f)) return false;

    str[0] = '\0';
    strcat(str, "[");
    char elemento[20];

    No* aux = f->inicio;
    
    while(aux != NULL){    
        sprintf(elemento,"%d", aux->dado);
        strcat(str, elemento);
        if (aux->prox != NULL) strcat(str, ",");
        aux = aux->prox;
    }
    strcat(str, "]");
    return true;
}
