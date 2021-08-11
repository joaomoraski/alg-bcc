#include <stdio.h>

int main() {
    int soma = 0;
    int anterior = 1;
    int atual = 2;
    int n;

    while (atual < 4000000){
        soma += atual;
        n = atual;
        atual += 2 * (atual + anterior);
        anterior += 2 * n;
    }

    printf("%d",soma);

    return 0;
}