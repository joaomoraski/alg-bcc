#include<stdio.h>

int main(){

    int number;
    int i = 1;
    printf("Informe um número: ");
    scanf("%d", &number);

    printf("Digitos do número de trás para frente\n");
    while (number!=0) {
        printf("Digito %d: %d\n", i, number%10);
        number/=10; ++i;
    }
    return 0;
}