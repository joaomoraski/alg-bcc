#include<stdio.h>

int main (){

    int number;
    int sum = 0;


    printf("Questão número 01!\n");

    for (int i = 0; i < 4; ++i) {
        printf("Informe um número: ");
        scanf("%d", &number);
        if (number >= 0){
            sum+=number;
        } else {
            printf("Número não é maior que zero, não foi adicionado a soma\n");
        }
    }

    printf("A soma final é de %d\n", sum);

    return 0;
}