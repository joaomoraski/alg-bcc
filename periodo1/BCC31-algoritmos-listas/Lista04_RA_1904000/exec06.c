#include <stdio.h>

int main(){

    int number;
    int soma = 0;
    printf("Informe um número: ");
    scanf("%d", &number);

    for (int i = 0; i <= number; ++i) {
        soma+=i;
    }
    printf("Soma dos números: %d\n", soma);


    return 0;
}