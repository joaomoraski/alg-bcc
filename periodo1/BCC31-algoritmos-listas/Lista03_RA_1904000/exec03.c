#include <stdio.h>

int main(){
    
    int number;
    int number2;

    printf("Informe um número: ");
    scanf("%d", &number);
    printf("Informe outro número: ");
    scanf("%d", &number2);

    if (number < 0 || number2 < 0 ) {
		printf("Erro: o programa não aceita números negativos \n");
    } else if (number == number2) {
		printf("O número 1 é igual ao número 2: %d == %d \n", number, number2);	
    } else if (number > number2){
		printf("O número 1 é o maior número: %d > %d \n", number, number2);
    } else{
		printf("O número 2 é o maior número: %d > %d \n", number2, number);
    }

    return 0;

}