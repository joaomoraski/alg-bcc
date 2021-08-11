#include<stdio.h>

int main (){

    int cont = 0;
    float media;
    int numero;
    int soma = 0;

    printf("Questão numero 01!\n");
    while(1){
        printf("Informe um número(0, caso queira parar): ");
        scanf("%d", &numero);
        if (numero == 0){
            break;
        }
        soma += numero;
        ++cont;
    }

    media = (float) soma/cont;
    printf("A soma dos números digitados é: %d\nA quantidade de número é: %d\nA média do números digitados é: %.2f\n", soma, cont, media);


    return 0;
}