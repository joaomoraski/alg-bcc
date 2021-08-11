//
// Created by jvmor on 15/04/2021.
//
#include<stdio.h>

int isPrime(int n){
    int primo = 1;

    for (int i = 2; i < n; ++i) {
        if (n%i == 0){
            primo = 0;
        }
    }

    return primo;
}


int main (){
    int n;
    printf("Informe o número para verificar se é primo: ");
    scanf("%d", &n);

    int res = isPrime(n);

    if (res){
        printf("O número é primo!");
    }else{
        printf("O número não é primo!");
    }





    return 0;
}