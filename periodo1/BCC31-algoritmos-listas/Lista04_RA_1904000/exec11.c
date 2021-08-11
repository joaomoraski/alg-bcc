#include<stdio.h>

int main(){

    int number;
    int quadrado = 0;
    int quantImpar = 0;
    printf("Informe um número: ");
    scanf("%d", &number);

    printf("Quadrado do número usando soma de impares\n");
    for (int i = 0; number > quantImpar; ++i) {
        if (i%2 != 0){
            quadrado+=i;
            ++quantImpar;
        }
    }
    printf("Quadrado do número é: %d\n", quadrado);
    return 0;
}