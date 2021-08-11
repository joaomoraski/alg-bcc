#include <stdio.h>

int main(){
    
    int number;
    int number2;
    int result;

    printf("Informe os dois números: ");
    scanf("%d %d", &number, &number2);


    result = number % number2;
    printf("%d %% %d = %d\n", number, number2, result);

    result = number / number2;
    int resto = ((number2 * result) - number)*-1;
    //Usei a formula 
    // r = (d . q) - D
    printf("Resto da divisão: %d / %d = %d\n", number, number2, resto);


    return 0;

}