//
// Created by jvmor on 15/04/2021.
//
#include<stdio.h>

void batchReport(int *min, int *max){
    int num;
    int maior= -2147483647 - 1;
    int menor= 2147483647;
    printf("Digite um número: ");
    while(1){
        scanf("%d", &num);
        if(num==0){
            break;
        }else{
            if(num>=maior){
                maior = num;
                *max = maior;

            }
            if(num<=menor){
                menor = num;
                *min = menor;

            }
            printf("Digite outro número: ");
        }


    }
}


int main() {
    int max, min;

    batchReport(&min, &max);
    printf("Maior: %d\n", max);
    printf("Menor: %d", min);

    return 0;
}