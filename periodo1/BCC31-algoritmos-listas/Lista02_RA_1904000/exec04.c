#include <stdio.h>

int main(){
    
    int number;
    int number2;
    int number3;
    float media;

    printf("Informe os números: ");
    scanf("%d %d %d", &number, &number2, &number3);

    media = (number + number2 + number3) / 3;
    printf("A média aritmética simples é: %.2f\n", media);
    
    media = ((number*0.1) + (number2*0.5) + (number3*0.4)) / (0.1+0.5+0.4);
    printf("A média aritmética ponderada é: %.2f\n", media);


    return 0;

}