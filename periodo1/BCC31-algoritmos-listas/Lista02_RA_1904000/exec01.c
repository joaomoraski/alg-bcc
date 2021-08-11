#include <stdio.h>

int main(){
    
    int number;
    int number2;
    int result;
    float realDivision;

    printf("Informe os dois números: ");
    scanf("%d %d", &number, &number2);


    result = number * number2;
    printf("%d * %d = %d\n", number, number2, result);

    result = number / number2;
    printf("%d / %d = %d\n", number, number2, result);

    realDivision = (float) number / number2;
    printf("%d / %d = %f\n", number, number2, realDivision);

    return 0;

}