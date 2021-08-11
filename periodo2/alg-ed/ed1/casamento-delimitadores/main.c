#include<stdio.h>
#include<stdbool.h>
#include "pilha.h"


#define MAX_LIMIT 301
struct pilha {
    int qtde;
    int tam;
    TipoElemento *vetor;
};
char aberturas[3] = {'{', '(', '['};
char fechamentos[3] = {'}', ')', ']'};

void verificarAberturaFechamento(char caracter, Pilha *pilha, int *abertura, int *fechamento) {
    if (caracter == aberturas[0] || caracter == aberturas[1] || caracter == aberturas[2]) {
        pilha_empilhar(pilha, caracter);
        *abertura+=1;
    }
    if (caracter == fechamentos[0] || caracter == fechamentos[1] || caracter == fechamentos[2]) {
        *fechamento+=1;
    }
}

//int verificarTopo(Pilha *p, char caracter) {
//    char topo, *saida;
//    pilha_topo(p, &topo);
//    if (caracter == fechamentos[0]) {
//        if (topo == aberturas[0]) {
//            pilha_desempilhar(p, saida);
//        } else {
//            return -1;
//        }
//    } else if (caracter == fechamentos[1]) {
//        if (topo == aberturas[1]) {
//            pilha_desempilhar(p, saida);
//        } else {
//            return -1;
//        }
//    } else if (caracter == fechamentos[2]) {
//        if (topo == aberturas[2]) {
//            pilha_desempilhar(p, saida);
//        } else {
//            return -1;
//        }
//    }
//    return 1;
//}

int verificarDelimitadores(char *expressao) {
    Pilha *pilha = pilha_criar();
    int abertura = 0, fechamento = 0, tam = strlen(expressao);
    char caracter, topo, *saida;
    for (int i = 0; i < tam; ++i) {
        caracter = expressao[i];
        verificarAberturaFechamento(caracter, pilha, &abertura, &fechamento);
    }
    if (fechamento < abertura) return -2;
    if (abertura < fechamento) return -3;

    for (int i = 0; i < tam; i++) {
        pilha_topo(pilha, &topo);
        caracter = expressao[i];
        if (caracter == fechamentos[0]) {
            if (topo == aberturas[0]) {
                pilha_desempilhar(pilha, saida);
            } else {
                return -1;
            }
        }else if (caracter == fechamentos[1]){
            if (topo == aberturas[1]) {
                pilha_desempilhar(pilha, saida);
            } else {
                return -1;
            }
        }else if (caracter == fechamentos[2]){
            if (topo == aberturas[2]) {
                pilha_desempilhar(pilha, saida);
            } else {
                return -1;
            }
        }
    }
    return 1;
}


int main() {

    int tam;
    char expressao[MAX_LIMIT];
    scanf("%d\n", &tam);

    for (int i = 0; i < tam; i++) {
        fgets(expressao, MAX_LIMIT, stdin);
        expressao[strlen(expressao) - 1] = '\0';
        printf("%d\n", verificarDelimitadores(expressao));
    }
    return 0;
}
