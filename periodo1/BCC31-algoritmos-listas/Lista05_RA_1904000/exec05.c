#include<stdio.h>

int main (){

    printf("Questão numero 05!\n");

    for (int i = 0; i <= 10; ++i) {
        for (int j = 0; j <= 10; ++j) {
            printf("%d X %d = %d", i, j, i*j);
            printf("\n");
        }
        printf("\n");
        printf("\n");
    }

    return 0;
}