#include<stdio.h>

int main(){

    int number;
    int cont = 0;
    int soma = 0;

    while (1){
        printf("Informe um número: ");
        scanf("%d", &number);
        if (number != 0){
            ++cont;
            soma+= number;
            printf("Número adicionado e somado a conta.\n");
        } else{
            break;
        }
    }
    printf("A soma dos números é: %d\nA média aritmetica dos números é: %f", soma, (float) soma/cont);


    return 0;
}