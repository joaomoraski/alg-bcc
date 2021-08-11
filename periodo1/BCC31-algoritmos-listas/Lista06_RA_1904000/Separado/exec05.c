//
// Created by jvmor on 15/04/2021.
//
#include<stdio.h>
#include<stdlib.h>

int factorialSum(int n){
    int soma = 0;
    int fatorial = 1;
    for (int i = 1; i <= n; ++i) {
        fatorial*=i;
        soma+=fatorial;
    }
    printf("Soma dos fatoriais do número: %d\n", soma);

}

int main (){
    int n;
    printf("Informe o número: ");
    scanf("%d", &n);

    factorialSum(n);
    return 0;
}