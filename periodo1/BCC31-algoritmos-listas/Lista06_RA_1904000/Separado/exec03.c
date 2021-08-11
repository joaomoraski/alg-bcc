//
// Created by jvmor on 15/04/2021.
//
#include<stdio.h>
#include<stdlib.h>

void printRandom2(int n, int max){

    for (int i = 0; i < n; ++i) {
        printf("%d ", (rand() % (max*2)+1) + (-max));
    }
    printf("\n");

}

int main (){
    int n;
    int max;
    printf("Informe a quantidade de números aleatorios: ");
    scanf("%d", &n);
    printf("Informe o maximo de alcance dos números aleatorios: ");
    scanf("%d", &max);

    printRandom2(n, max);
    return 0;
}