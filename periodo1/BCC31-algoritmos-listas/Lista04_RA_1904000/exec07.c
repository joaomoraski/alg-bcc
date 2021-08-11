#include<stdio.h>

int main(){

    int number;
    int soma = 1;
    printf("Informe um número: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; ++i) {
        soma*=i;
    }
    printf("Fatorial do número: %d\n", soma);


    return 0;
}