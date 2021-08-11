#include <stdio.h>

int main() {
    float numero;
    float numero2;    
    float numero3;

    printf("Informe um número: ");
    scanf("%f", &numero);

    printf("Informe outro número: ");
    scanf("%f", &numero2);

    printf("Informe mais um número: ");
    scanf("%f", &numero3);

    if( numero >= numero2 && numero >= numero3 ){
        printf("%.2f é o maior número \n", numero);
    } else if( numero2 >= numero && numero2 >= numero3 ) {
        printf("%.2f é o maior número  \n", numero2);
    } else {
        printf("%.2f é o maior número \n", numero3);
    }

    return 0;
}