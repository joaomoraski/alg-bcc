#include<stdio.h>

int main (){

    int cont = 0;
    float mediaPares;
    int numero;
    int maiorPar = 0;
    int menorImpar = 0;

    printf("Questão numero 02!\n");
    while(1){
        printf("Informe um número(0, caso queira parar): ");
        scanf("%d", &numero);
        if (numero == 0){
            break;
        }
        if (numero%2 == 0){
            if (numero > maiorPar){
                maiorPar = numero;
            }
            mediaPares+=numero;
            ++cont;
        } else{
            if (menorImpar == 0){
                menorImpar = numero;
            }
            if (numero < menorImpar){
                menorImpar = numero;
            }
        }
    }

    mediaPares /= cont;
    printf("O maior par digitado é: %d\nO menor impar digitado é: %d\nA média dos números pares é: %.2f\n", maiorPar, menorImpar, mediaPares);


    return 0;
}