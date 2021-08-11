#include<stdio.h>

int main (){

    int numero;
    int j = 1;

    printf("Questão numero 02!\n");
    printf("Informe um número: ");
    scanf("%d", &numero);

    for (int i = 0; i < numero; ++j) {
        if (j%2 == 0){
            printf("%d ", j);
            ++i;
        }
    }
    printf("\n");

    return 0;
}