//
// Created by moraski on 8/16/22.
//
#include "stdio.h"

int multiplicacao(int a, int b) {
    if (b == 0 || a == 0) return 0;
    if (a == 1) return b;
    else return (b+ multiplicacao(a-1,b));
}

int main() {
    int a,b;
    printf("Digite o número A: ");
    scanf("%d", &a);
    printf("Digite o número B: ");
    scanf("%d", &b);
    int response = multiplicacao(a,b);
    printf("Resultado: %d\n", response);
    return 0;
}
