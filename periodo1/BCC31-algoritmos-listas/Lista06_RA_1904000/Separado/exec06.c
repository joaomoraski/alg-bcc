//
// Created by jvmor on 15/04/2021.
//
#include<stdio.h>
#include<stdlib.h>

int factorialSum2(int n){
    int sum = 0;
    int fat = 1;
    for(int i=1; i<=n; i = i+1){
        fat *=i;
        sum +=fat;
    }
    printf("%d",sum);
    return sum;

}

int main (){
    int n;
    printf("Informe o número: ");
    scanf("%d", &n);

    factorialSum2(n);
    return 0;
}