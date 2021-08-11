#include<stdio.h>

int main (){

    int coluna;
    int linha;
    printf("Questão numero 08!\n");

    printf("Informe a quantidade de linhas: ");
    scanf("%d", &linha);
    printf("Informe a quantidade de colunas: ");
    scanf("%d", &coluna);


    for (int i = 0; i <= linha; ++i) {
        for (int j = 0; j <= coluna; ++j) {
            if (i == 0 && j == 0) {
                printf("╔");
            } else if (j == 0 || j == coluna && i != 0){
                if (i == linha){
                    if (j == 0){
                        printf("╚");
                    } else if (coluna - j == 0){
                        printf("╝");
                    }
                } else{
                    printf("║");
                }
            }
            if (j == coluna && i == 0){
                printf("╗");
            } else if (coluna - j != 0){
                printf("═");
            }


        }
        printf("\n");
    }

    return 0;
}