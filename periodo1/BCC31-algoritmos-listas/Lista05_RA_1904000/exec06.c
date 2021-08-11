#include<stdio.h>

int main (){

    int coluna;
    int linha;
    printf("Questão numero 06!\n");

    printf("Informe a quantidade de colunas: ");
    scanf("%d", &coluna);
    printf("Informe a quantidade de linhas: ");
    scanf("%d", &linha);


    for (int i = 0; i < linha; ++i) {
        for (int j = 0; j < coluna; ++j) {
            printf("X");
        }
        printf("\n");
    }

    return 0;
}