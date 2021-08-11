#include <stdio.h>

int main () {

    int n;
    int c= 0;
    printf("Questão numero 10!\n");

    printf("Informe N para o Triangulo de Floyd: ");
    scanf("%d", &n);


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; ++j) {
            ++c;
            printf("%d ", c);
        }
        printf("\n");
    }

    return 0;
}