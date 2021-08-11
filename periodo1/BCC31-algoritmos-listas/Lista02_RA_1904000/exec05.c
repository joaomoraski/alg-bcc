#include <stdio.h>

// Escreva um programa que lê um número float (com parte fracionária) e informa separadamente:
// a. O número com 2 casas de precisão;
// b. A parte inteira;
// c. A parte fracionária;
// d. Sua representação em notação científica (mantissa/expoente).


int main(){
    float number;

    printf("Informe um número: ");
    scanf("%f", &number);

    printf("A = %.2f\n", number);
    printf("B = %.0f\n", number);
    printf("C = %.6f\n", number - (int) number);
    printf("D = %.1e\n", number);

    return 0;
}
