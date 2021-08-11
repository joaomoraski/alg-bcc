//
// Created by jvmor on 15/04/2021.
//
#include<stdio.h>
#include<stdlib.h>

int isPerfectNumber(int n){
    int soma = 0;
    for (int i = 1; i < n; ++i) {
        if (n%i == 0){
            soma+=i;
        }
    }
    if (soma == n){
        return 1;
    } else{
        return 0;
    }
}

int main (){
    int n;
    printf("Informe o número: ");
    scanf("%d", &n);

    int res = isPerfectNumber(n);
    if (res){
        printf("Número é perfeito\n");
    } else{
        printf("Número não é perfeito\n");
    }

    return 0;
}