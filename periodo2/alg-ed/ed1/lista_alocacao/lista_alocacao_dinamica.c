//
// Created by moraski on 07/07/2021.
//

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>

//Exercicio 01
void inverte_string(char *str);

//Exercicio 02
int qtde_vogais1(char *str);

void qtde_vogais2(char *str, int *saida);

//Exercicio 03
char *copia_string(char *str);

//Exercicio 04
int *cria_vetor1(int tam, int valor);

bool cria_vetor2(int tam, int valor, int **saida);

//Exercicio 05
int *clone1(int *tam, int valor);

bool clone2(int *tam, int valor, int **saida);

//Exercicio 06
int *aleatorio1(int tam);

bool aleatorio2(int tam, int **saida);

//Exercicio 07
int dobra_tamanho(int **v, int tam);

/***********************************************
* FUNCOES AUXILIARES
************************************************/
void imprimir_vetor(int *v, int tam) {
    printf("[");
    for (int i = 0; i < tam; i++) {
        printf("%d", v[i]);
        if (i < tam - 1) printf(",");
    }
    printf("]");
}

void toString_vetor(int *v, int tam, char *saida) {
    saida[0] = '\0';
    strcat(saida, "[");

    char elemento[20];
    for (int i = 0; i < tam; i++) {
        sprintf(elemento, "%d", v[i]);
        strcat(saida, elemento);
        if (i < tam - 1) strcat(saida, ",");
    }
    strcat(saida, "]");
}

/***********************************************
* IMPLEMENTACAO
************************************************/

void inverte_string(char *str) {
    int tam = 0;
    while (str[tam] != '\0') tam++;
    char *str2 = (char *) calloc(tam, sizeof(char));
    // copiando a string ja invertida
    int j = 0;
    for (int i = tam - 1; i >= 0; --i) {
        str2[j] = str[i];
        j++;
    }
    for (int i = 0; i <= tam; ++i) {
        str[i] = str2[i];
    }
    free(str2);
}


int qtde_vogais1(char *str) {
    int count = 0, tam = 0;
    while (str[tam] != '\0') {
        if (str[tam] == 'a' || str[tam] == 'A' || str[tam] == 'e' || str[tam] == 'E' || str[tam] == 'i' ||
            str[tam] == 'I' || str[tam] == 'o' || str[tam] == 'O' || str[tam] == 'u' || str[tam] == 'U') {
            count++;
        }
        tam++;
    }
    return count;
}


void qtde_vogais2(char *str, int *saida) {
    int count = 0, tam = 0;
    while (str[tam] != '\0') {
        if (str[tam] == 'a' || str[tam] == 'A' || str[tam] == 'e' || str[tam] == 'E' || str[tam] == 'i' ||
            str[tam] == 'I' || str[tam] == 'o' || str[tam] == 'O' || str[tam] == 'u' || str[tam] == 'U') {
            count++;
        }
        tam++;
    }
    *saida = count;
}

char *copia_string(char *str) {
    int tam = 0;
    while (str[tam] != '\0') tam++;
    char *str2 = (char *) calloc(tam, sizeof(char));
    for (int i = 0; i < tam; ++i) {
        str2[i] = str[i];
    }
    return str2;
}

int *cria_vetor1(int tam, int valor) {
    int *vetor = (int *) calloc(tam, sizeof(int));
    for (int i = 0; i < tam; ++i) {
        vetor[i] = valor;
    }
    return vetor;
}

bool cria_vetor2(int tam, int valor, int **saida) {
    int *vetor = (int *) calloc(tam, sizeof(int));
    for (int i = 0; i < tam; ++i) {
        vetor[i] = valor;
    }
    *saida = vetor;
}


int *clone1(int *tam, int valor) {
    int *vetor_clone = (int *) calloc(valor, sizeof(int));
    for (int i = 0; i < valor; ++i) {
        vetor_clone[i] = tam[i];
    }
    return vetor_clone;
}

bool clone2(int *tam, int valor, int **saida) {
    int *vetor_clone = (int *) calloc(valor, sizeof(int));
    for (int i = 0; i < valor; ++i) {
        vetor_clone[i] = tam[i];
    }
    *saida = vetor_clone;
}

int *aleatorio1(int tam) {
    int *vetor = (int *) calloc(tam, sizeof(int));
    srand(time(0));
    for (int i = 0; i < tam; ++i) {
        vetor[i] = rand() % 1000;
    }
    return vetor;
}

bool aleatorio2(int tam, int **saida) {
    int *vetor = (int *) calloc(tam, sizeof(int));
    srand(time(NULL));
    for (int i = 0; i < tam; ++i) {
        vetor[i] = rand() % 1000;
    }
    *saida = vetor;
}

int dobra_tamanho(int **v, int tam) {
    int *vetor_novo = (int *) calloc((tam * 2), sizeof(int));
    int *aux = *v;
    for (int i = 0; i < tam; ++i) {
        vetor_novo[i] = aux[i];
    }
    free(*v);
    *v = vetor_novo;
    return tam * 2;
}

int** cria_matriz(int linhas, int colunas, int valor) {
    int** m = (int**)calloc(linhas, sizeof(int*));
    for (int i = 0; i < linhas; ++i) {
        m[i] = (int*)calloc(colunas, sizeof(int));
    }
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            m[i][j] = valor;
        }
    }
    return m;
}
