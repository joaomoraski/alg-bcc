//
// Created by moraski on 20/07/2021.
//
#include "tad_vetor.h"
#include <stdio.h>
#include <string.h>

/***********************************************
* Especificação dos dados
************************************************/
struct vetor {
    int *vet;
    int tamanho_vetor;
    int quantidade_elementos;
};


/********************************************
 * Funções auxiliares
 *******************************************/
Vetor *dobrarVetor(Vetor *v) {
    int *vetorDobrado = calloc(v->tamanho_vetor, sizeof(int));
    for (int i = 0; i < v->tamanho_vetor; i++) {
        vetorDobrado[i] = v->vet[i];
    }
    free(v->vet);
    v->vet = NULL;
    v->vet = (int *) calloc(v->tamanho_vetor * 2, sizeof(int));
    v->tamanho_vetor = v->tamanho_vetor * 2;
    for (int i = 0; i < v->tamanho_vetor; i++) {
        v->vet[i] = vetorDobrado[i];
    }
    return v;
}

int verificarVetor(Vetor *v) {
    int i;
    for (i = 0; i < v->tamanho_vetor; i++) {
        if (v->vet[i] == 0) return i;
    }
    v = dobrarVetor(v);
    return i++;
}

int getPosicaoElemento(Vetor *v, int elemento){
    for (int i = 0; i < v->tamanho_vetor; ++i) {
        if (v->vet[i] == elemento) return i;
    }
    return -1;
}


/********************************************
 * IMPLEMENTAÇÃO
 *******************************************/

// 1. Criar um novo vetor
/**
 * Cria e inicializa a struct Vetor.
 * RETORNO: endereço da struct Vetor criada e inicializada na memória HEAP
 */
Vetor *vet_criar(int tam) {
    Vetor *v = (Vetor *) calloc(1, sizeof(Vetor));
    v->vet = calloc(tam, sizeof(int));
    v->tamanho_vetor = tam;
    v->quantidade_elementos = 0;
    return v;
};

// 2. Inserir um elemento no final da sequência
/**
 * Insere o elemento na última posição do vetor. Caso não haja espaço disponível
 * para a inserção, você deve realocar o vetor, dobrando seu espaço disponível
 * Parâmetro v: Ponteiro para a struct Vetor em que o elemento será inserido.
 * Parâmetro elemento: Elemento a ser inserido.
 * RETORNO: true se a inserção foi realizada com sucesso e false caso contrário
 */

bool vet_anexar(Vetor *v, int elemento) {
    int pos = verificarVetor(v);
    v->vet[pos] = elemento;
    v->quantidade_elementos++;
    return true;
}

// 3. Inserir um elemento em qualquer posição da sequência
bool vet_inserir(Vetor *v, int elemento, int posicao) {
    if (v->quantidade_elementos >= v->tamanho_vetor) {
        v = dobrarVetor(v);
    }
    for (int i = v->tamanho_vetor; i >= 0; i--) {
        if (i > posicao) v->vet[i] = v->vet[i - 1];
    }
    v->vet[posicao] = elemento;
    v->quantidade_elementos++;
    return true;
}

// 4. Substituir um elemento em uma determinada posição
bool vet_substituir(Vetor *v, int posicao, int novoElemento){
    v->vet[posicao] = novoElemento;
    return true;
}

// 5. Remover um elemento de uma determinada posição
bool vet_removerPosicao(Vetor *v, int posicao, int *endereco){
    endereco = &v->vet[posicao];
    v->vet[posicao] = 0;
    v->quantidade_elementos--;
    return true;
}

// 6. Remover um elemento de acordo com o seu valor. Caso haja valores repetidos remover apenas a primeira ocorrência.
int vet_removerElemento(Vetor *v, int elemento){
    int index = getPosicaoElemento(v, elemento);
    if (index == -1) return -1;
    v->vet[index] = 0;
    v->quantidade_elementos--;
    return index;
}
// 7. Recuperar quantos elementos estão armazenados na sequência.
int vet_tamanho(Vetor *v){
    return v->quantidade_elementos;
}

// 8. Recuperar qual elemento está armazenado em uma determinada posição
bool vet_elemento(Vetor *v, int posicao, int *saida){
    if (posicao > v->tamanho_vetor) return false;
    saida = &v->vet[posicao];
    return true;
}

// 9. Recuperar a posição em que um determinado elemento está armazenado. Caso haja valores repetidos, recuperar a primeira ocorrência.
int vet_posicao(Vetor *v, int elemento){
    for (int i = 0; i < v->tamanho_vetor; ++i) {
        if (v->vet[i] == elemento) return i;
    }
    return -1;
}

// 10. Imprimir a sequência
void vet_imprimir(Vetor *v){
    for (int i = 0; i < v->tamanho_vetor; ++i) {
        printf("%d ", v->vet[i]);
    }
    printf("\n");
}

// 11. Desalocar
void vet_desalocar(Vetor *v){
    free(v);
    v = NULL;
}

// 12. Devolve o vetor na forma de String

bool vet_toString(Vetor *v, char *enderecoString){
    char* aux = calloc(v->tamanho_vetor*2, sizeof(char));
    for (int i = 0; i < v->tamanho_vetor; i++){
        sprintf(aux,"%d ", v->vet[i]);
        strcat(enderecoString, aux);
    }
    return true;
}
