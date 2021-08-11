#include<stdio.h>

int main (){

    int coluna;
    int linha;
    printf("Questão numero 07!\n");

    printf("Informe a quantidade de colunas: ");
    scanf("%d", &coluna);
    printf("Informe a quantidade de linhas: ");
    scanf("%d", &linha);


    for (int i = 0; i < linha; ++i) {
        printf("[");
        for (int j = 0; j < coluna; ++j) {
            printf("X");
            if (coluna - j != 1){
                printf("-");
            }
        }
        printf("]");
        printf("\n");
    }

    return 0;
}