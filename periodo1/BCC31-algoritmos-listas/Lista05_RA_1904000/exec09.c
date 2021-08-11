#include <stdio.h>

int main () {

    int dimension;
    printf("Questão numero 09!\n");

    printf("Informe a dimensão: ");
    scanf("%d", &dimension);

    for (int i = dimension; i >= 1; i--) {
        printf("\n");
        for (int j = 0; j < (dimension - i); j++){
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("X");
        }
    }
    printf("\n");

    return 0;
}