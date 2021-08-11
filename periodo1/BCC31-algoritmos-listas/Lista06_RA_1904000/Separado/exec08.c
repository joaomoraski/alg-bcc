//
// Created by jvmor on 15/04/2021.
//
#include<stdio.h>
#include<stdlib.h>

void numbersInFull10(int n){
    if (n < -10 || n > 10){
        printf("Número fora do alcance de -10 a 10\n");
    }
    if (n < 0){
        printf("Menos ");
        n*=-1;
    }
    switch (n) {
        case 0:
            printf("Zero");
            break;
        case 1:
            printf("Um");
            break;
        case 2:
            printf("Dois");
            break;
        case 3:
            printf("Três");
            break;
        case 4:
            printf("Quatro");
            break;
        case 5:
            printf("Cinco");
            break;
        case 6:
            printf("Seis");
            break;
        case 7:
            printf("Sete");
            break;
        case 8:
            printf("Oito");
            break;
        case 9:
            printf("Nove");
            break;
        case 10:
            printf("Dez");
            break;
    }
    printf("\n");
}

int main (){
    int n;
    printf("Informe o número: ");
    scanf("%d", &n);

    numbersInFull10(n);

    return 0;
}