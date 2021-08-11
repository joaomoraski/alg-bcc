#include <stdio.h>

int main(){
    
    int number;

    printf("Informe um número: ");
    scanf("%d", &number);

    number%2 == 0 ? printf("%d é um número par\n", number) : printf("%d é um número impar \n", number);

    return 0;

}