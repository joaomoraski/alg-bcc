#include<stdio.h>

int main(){
    
    int number = 1;
    int min;
    int max;

    printf("Digite algum número(0 para parar): ");
    scanf("%d", &number);
    min = number;
    max = number;

    while (number != 0) {
        if (number > max) {
            max = number;
        }
        if (number < min){
            min = number;
        }
        printf("> ");
        scanf("%d", &number);
    }

    if (min == 0){
        printf("ERRO: informe um numero maior que zero");
    } else{
        printf("Maior: %d\n", max);
        printf("Menor: %d\n", min);
    }

    return 0;
}