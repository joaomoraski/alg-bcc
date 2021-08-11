#include <stdio.h>


int main(){
    
    int number;

    printf("Informe os números: ");
    scanf("%d %d %d", &number, &number2, &number3);

    printf("Informe um número: ");
    scanf("%d", &number);
    printf("A = %.2f\n", number);
    printf("\t%d x 1 = %d\n", number, number*1);


    return 0;

}