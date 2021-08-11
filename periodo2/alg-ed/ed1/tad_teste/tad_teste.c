//
// Created by moraski on 13/07/2021.
//
#include <stdio.h>
#include <stdlib.h>
#include "tad_teste.h"

struct teste {
    char *descricao;
    int numeroTotal;
    int numeroAcertos;
    int numeroErros;
};

Teste *teste_criar(char *descricao) {
    Teste *t = (Teste *) calloc(1, sizeof(Teste));
    t->descricao = descricao;
    t->numeroTotal = 0;
    t->numeroAcertos = 0;
    t->numeroErros = 0;
    return t;
}


void teste_verificar(Teste *t, int condicao, char *mensagem) {
    t->numeroTotal++;
    if (condicao) {
        printf("[OK]: %s\n", mensagem);
        t->numeroAcertos++;
    } else {
        printf("[Erro]: %s\n", mensagem);
        t->numeroErros++;
    }
}

//----------------------------------------------------
//<NOME DO TESTE>
//----------------------------------------------------
//Total    = <QUANTIDADE DE TESTES REALIZADOS>
//Passaram = <QUANTIDADE DE TESTES QUE PASSARAM (TRUE)>
//Falharam = <QUANTIDADE DE TESTES QUE FALHARAM (FALSE)>

void teste_relatorio(Teste *t) {
    printf("----------------------------------------------------\n");
    printf("%s\n", t->descricao);
    printf("----------------------------------------------------\n");
    printf("Total = %d\n",t->numeroTotal);
    printf("Passaram(True) = %d\n", t->numeroAcertos);
    printf("Falharam(False) = %d\n", t->numeroErros);
    printf("----------------------------------------------------\n");
    printf("\n");
}


void teste_desalocar(Teste **t) {
    free(*t);
}
