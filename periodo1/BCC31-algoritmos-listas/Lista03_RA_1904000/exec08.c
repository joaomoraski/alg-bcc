#include <stdio.h>

int main() {
    float numero;
    float numero2;
    float numero3;
    float maior;
    float menor;
    float medio;

    printf("Informe um número: ");
    scanf("%f", &numero);

    printf("Informe outro número: ");
    scanf("%f", &numero2);

    printf("Informe mais um número: ");
    scanf("%f", &numero3);

    if(numero >= numero2 && numero >= numero3) {
        maior = numero;
        if(numero2 >= numero3) {
            medio = numero2;
            menor = numero3;
        }
    } else if(numero2 >= numero && numero2 >= numero3) {
        maior = numero2;
        if(numero>numero3) {
            medio = numero;
            menor = numero3;
        }else {
            medio = numero3;
            menor = numero;
        }

    } else {
        maior = numero3;
        if(numero>=numero2){
            medio = numero;
            menor = numero2;
        } else {
            medio = numero2;
            menor = numero;
        }

    }

    printf("%.2f %.2f %.2f", menor, medio, maior);
        

    return 0;
}