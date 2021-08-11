#include<stdio.h>

int main (){

    int dimension;

    printf("Questão número 03!\n");
    printf("Informe a dimensão do Triangulo Malhado!\n");
    scanf("%d", &dimension);

    int cont = dimension - 1;
    for (int i = 0; i < dimension; ++i) {
        for (int j = 0; j < cont; ++j) {
            printf("\t");
        }
        for (int k = cont; k < dimension; ++k){
            if (k%2 == 1){
                printf("11\t");
            } else{
                printf("00\t");
            }
        }
        --cont;
        printf("\n");
    }

    return 0;
}