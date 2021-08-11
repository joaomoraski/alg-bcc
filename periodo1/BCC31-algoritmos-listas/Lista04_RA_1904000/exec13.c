#include <stdio.h>

int main(){

    int quant;
    int ultimoNumero = 1;
    int penultimoNumero = 1;
    int number;
    printf("Informe o número maior ou igual a 3: ");
    scanf("%d", &quant);

    if (quant < 3){
        printf("ERRO: O número deve ser maior ou igual a 3");
    }
    printf("%d, %d", 1, 1);
    for (int i = 0; i < quant; ++i) {
        printf(", %d", number = ultimoNumero + penultimoNumero);
        penultimoNumero = ultimoNumero;
        ultimoNumero = number;
    }
    printf("\n");
    return 0;
}