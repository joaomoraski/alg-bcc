#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "pilha.h"

int main(){


    int tam;
    scanf("%d\n", &tam);

    Pilha* p = pilha_criar();
    int* vetor = (int*) calloc(tam, sizeof(int));


    for (int i=0; i < tam; i++){
        int n;
        scanf("%d ", &n);
        pilha_empilhar(p, n);
        vetor[i] = n;
    }

    int elemento;
    for (int i=tam-1; i >= 0; i--){
        pilha_desempilhar(p, &elemento);
        if(elemento == vetor[i]){
            printf("%d\n", elemento);
        }else{
            printf("ERRO");
        }
    }

    return 0;
}