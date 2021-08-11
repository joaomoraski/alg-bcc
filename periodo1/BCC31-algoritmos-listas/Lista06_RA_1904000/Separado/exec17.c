//
// Created by jvmor on 15/04/2021.
//
#include<stdio.h>
#include<stdlib.h>

void randReport(int n, int* evenSum, int* primes){
    if (n == 0) {
        printf("Não pode ser 0 o limite");
    }
    int randNum;
    int somaPar = 0;
    int primos = 0;
    for (int i = 0; i < n; ++i) {
        randNum = rand() % n+1;
        if (randNum%2 == 0){
            somaPar+= randNum;
        }
        for (int j = 2; j < randNum; ++j) {
            if (randNum%j == 0){
                ++primos;
            }
        }
        printf("%d ", randNum);
    }
    *evenSum = somaPar;
    *primes = primos;
    printf("\n");
}

int main (){
    int somaPares, primos;
    int randLimite;
    printf("Informe um numero: ");
    scanf("%d", &randLimite);
    randReport(randLimite ,&somaPares, &primos);
    printf("Soma Pares: %d\n", somaPares);
    printf("Primos: %d\n", primos);


    return 0;
}