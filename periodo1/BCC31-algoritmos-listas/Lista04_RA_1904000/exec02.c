#include <stdio.h>

int main(){

    int number;
    printf("Informe o número de linhas: ");
    scanf("%d", &number);

    for (int i = 1; i <= number;){
        printf("Linha %d\n", number);
        number-=1;

    }

    return 0;

}