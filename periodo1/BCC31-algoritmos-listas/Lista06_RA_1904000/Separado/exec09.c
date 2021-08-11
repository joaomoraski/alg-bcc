//
// Created by jvmor on 15/04/2021.
//
#include<stdio.h>
#include<stdlib.h>

void numbersInFull100(int n){
    if (n < -100 || n > 100){
        printf("Número fora do alcance de -10 a 10\n");
    } else{
        if (n < 0){
            printf("Menos ");
            n*=-1;
        }
        if (n == 0){
            printf("Zero");
        }
        int nDez = n;
        if (n >= 10 && n < 20) {
            if (nDez == 11){
                printf("Onze");
            }
            if (nDez == 12){
                printf("Doze");
            }
            if (nDez == 13){
                printf("Treze");
            }
            if (nDez == 14){
                printf("Quatorze");
            }
            if (nDez == 15){
                printf("Quinze");
            }
            if (nDez == 16){
                printf("Dezesseis");
            }
            if (nDez == 17){
                printf("Dezessete");
            }
            if (nDez == 18){
                printf("Dezoito");
            }
            if (nDez == 19){
                printf("Dezenove");
            }
        } else if (n >= 20 && n < 30) {
            printf("Vinte ");
            n%=10;
        } else if (n >= 30 && n < 40) {
            printf("Trinta ");
            n%=10;
        } else if (n >= 40 && n < 50) {
            printf("Quarenta ");
            n%=10;
        } else if (n >= 50 && n < 60) {
            printf("Cinquenta ");
            n%=10;
        } else if (n >= 60 && n < 70) {
            printf("Sessenta ");
            n%=10;
        } else if (n >= 70 && n < 80) {
            printf("Setenta ");
            n%=10;
        } else if (n >= 80 && n < 90) {
            printf("Oitenta ");
            n%=10;
        } else if (n >= 90 && n < 100) {
            printf("Noventa ");
            n%=10;
        } else if (n == 100){
            printf("Cem");
            nDez=0;
        }
        if (nDez > 20){
            printf("e ");
        }
        switch (n) {
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
}

int main (){
    int n;
    printf("Informe o número: ");
    scanf("%d", &n);

    numbersInFull100(n);

    return 0;
}