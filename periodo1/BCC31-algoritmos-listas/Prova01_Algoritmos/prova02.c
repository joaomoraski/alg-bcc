#include<stdio.h>

int main (){

    int number;
    int j = 0;
    int product = 1;

    printf("Questão número 02!\n\n");

    printf("Informe o número: \n");
    scanf("%d", &number);

    for (int i = 1; j < number; ++i) {
        if (i%2 == 0){
            printf("%d ", i);
            ++j;
            product *= i;
        }
    }

    printf("\nO produto final é de %d\n", product);

    return 0;
}