//#include "lista.h"
//#include <string.h>
//
//
///*------------------------------------------------
//Especificação dos dados
//-------------------------------------------------*/
//typedef struct no{
//    TipoElemento dado;
//    struct no    *ant;
//    struct no    *prox;
//}No;
//
//struct lista{
//    No *inicio;
//    No *fim;
//    int qtde;
//};
//
///*------------------------------------------------
//FUNÇÕES AUXILIARES
//-------------------------------------------------*/
//No* criar_no(TipoElemento elemento){
//    No* no = (No*) malloc(sizeof(No));
//    no->dado = elemento;
//    no->prox = NULL;
//    no->ant = NULL;
//    return no;
//}
//
//bool lista_ehValida(Lista* l){
//    return (l != NULL? true: false);
//}
//
//bool posicao_ehValida(Lista* l, int pos){
//    if(pos < 0) return false;
//    if(pos > l->qtde) return false;
//
//    return true;
//}
//
//int converte_posicao(Lista* l, int pos){
//    return (pos < 0 ? l->qtde + pos : pos);
//}
//
//No* devolver_enderecoNo(Lista* l, int posicao){
//    No* aux = l->inicio;
//    for (int i=0; i < posicao; i++) aux = aux->prox;
//    return aux;
//}
//
//void insere_direita(No* referencia, No* no){
//    no->prox = referencia->prox;
//    no->ant = referencia;
//    referencia->prox->ant = no;
//    referencia->prox = no;
//}
//
//
//
//
//
//
//
///*------------------------------------------------
//Implementação das funções
//-------------------------------------------------*/
//
//Lista* lista_criar(){
//    Lista* lista = (Lista*) malloc(sizeof(Lista));
//    lista->inicio = NULL;
//    lista->fim = NULL;
//    lista->qtde = 0;
//    return lista;
//}
//
//void lista_destruir(Lista** endereco){
//    Lista* l = *endereco;
//    No* aux;
//    TipoElemento e;
//    while(!lista_vazia(l)){
//        lista_removerPosicao(l, 0, &e);
//    }
//    free(l);
//    *endereco = NULL;
//}
//
//bool lista_anexar(Lista* l, TipoElemento elemento){
//    if(!lista_ehValida(l)) return false;
//
//    lista_inserir(l, elemento, l->qtde);
//    return true;
//}
//
//bool lista_inserir(Lista* l, TipoElemento elemento, int posicao){
//    if(!lista_ehValida(l)) return false;
//    posicao = converte_posicao(l, posicao);
//    if(!posicao_ehValida(l, posicao)) return false;
//
//    No* novo = criar_no(elemento);
//
//    if(lista_vazia(l)){
//        l->inicio = novo;
//        l->fim = novo;
//    } else if(posicao == l->qtde){
//        l->fim->prox = novo;
//        novo->ant = l->fim;
//        l->fim = novo;
//    } else if(posicao == 0){
//        novo->prox = l->inicio;
//        l->inicio->ant = novo;
//        l->inicio = novo;
//    } else{
//        No* aux = devolver_enderecoNo(l, posicao-1);
//        insere_direita(aux, novo);
//    }
//    l->qtde++;
//    return true;
//}
//
//bool lista_removerPosicao(Lista* l, int posicao, TipoElemento* endereco){
//    if(!lista_ehValida(l)) return false;
//    posicao = converte_posicao(l, posicao);
//    if(!posicao_ehValida(l, posicao)) return false;
//
//    No *no_atual = l->inicio;
//    for (int i = 0; i < posicao; ++i) {
//        no_atual = no_atual->prox;
//    }
//    if (posicao != 0){
//        No *anterior = no_atual->ant;
//        anterior->prox = no_atual->prox;
//        No *proximo = no_atual->prox;
//        proximo->ant = no_atual->ant;
//        endereco = &no_atual->dado;
//        l->qtde--;
//        return true;
//    }
//    No *proximo = no_atual->prox;
//    proximo->ant = NULL;
//    endereco = &no_atual->dado;
//    l->qtde--;
//    return true;
//
//}
//int lista_removerElemento(Lista* l, TipoElemento elemento){
//    if(!lista_ehValida(l)) return false;
//
//    No *no_atual = l->inicio;
//    if (no_atual->dado == elemento){
//        No *posterior = no_atual->prox;
//        posterior->ant = NULL;
//        l->qtde--;
//        return 0;
//    }
//    int cont = 0;
//    while (cont < l->qtde){
//        no_atual = no_atual->prox;
//        cont++;
//        if (no_atual->dado == elemento){
//            No *anterior = no_atual->ant;
//            anterior->prox = no_atual->prox;
//            No *proximo = no_atual->prox;
//            proximo->ant = no_atual->ant;
//            l->qtde -= 1;
//            return cont;
//        }
//    }
//    return -1;
//}
//
//bool lista_substituir(Lista* l, int posicao, TipoElemento novoElemento){
//    if(!lista_ehValida(l)) return false;
//    posicao = converte_posicao(l, posicao);
//    if(!posicao_ehValida(l, posicao)) return false;
//
//    No *no_atual = l->inicio;
//    for (int i = 0; i < posicao; ++i) {
//        no_atual = no_atual->prox;
//    }
//    no_atual->dado = novoElemento;
//    return true;
//}
//int lista_posicao(Lista* l, TipoElemento elemento){
//    if(!lista_ehValida(l)) return false;
//    int posicao = 0;
//
//    No *no_atual = l->inicio;
//    while (no_atual->dado != elemento){
//        no_atual = no_atual->prox;
//        posicao++;
//    }
//    return posicao;
//}
//bool lista_buscar(Lista* l, int posicao, TipoElemento* endereco){
//    if(!lista_ehValida(l)) return false;
//
//    No *no_atual = l->inicio;
//    for (int i = 0; i < posicao; ++i) {
//        no_atual = no_atual->prox;
//    }
//    endereco = &no_atual->dado;
//    return true;
//}
//
//int lista_tamanho(Lista* l){
//    if(!lista_ehValida(l)) return 0;
//    return l->qtde;
//}
//
//bool lista_vazia(Lista* l){
//    if(!lista_ehValida(l)) return true;
//
//    return (l->qtde == 0 ? true : false);
//}
//
//bool lista_toString(Lista* l, char* str){
//    if(!lista_ehValida(l)) return false;
//
//    int qtde = 0;
//    char elemento[20];
//
//    str[0] = '\0';
//    strcat(str, "[");
//    No* aux = l->inicio;
//    while(aux != NULL){
//        sprintf(elemento, FORMATO, aux->dado);
//        strcat(str, elemento);
//
//        if(aux->prox != NULL) strcat(str, ",");
//        aux = aux->prox;
//    }
//
//    strcat(str, "]");
//    return true;
//}