//
// Created by jvmor on 15/04/2021.
//
#include<stdio.h>
#include<stdlib.h>

int summation(int n){
    int soma = 0;
    for (int i = 0; i <= n; ++i) {
        soma+=i;
    }
    printf("Soma dos números: %d\n", soma);

}

int main (){
    int n;
    printf("Informe o número: ");
    scanf("%d", &n);

    summation(n);
    return 0;
}