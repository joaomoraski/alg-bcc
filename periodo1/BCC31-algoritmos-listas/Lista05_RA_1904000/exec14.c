#include <stdio.h>

int main () {

    float valorTotal = 0;
    float valorPago = 0;
    float valor;

    printf("Questão numero 14!\n");


    while (1){
        printf("Informe o preço: ");
        scanf("%f", &valor);

        if (valor == 0){
            break;
        }
        if (valor < 50){
            valorPago+= valor - (valor*0.05);
        }
        if (valor > 50 && valor < 100){
            valorPago+= valor - (valor*0.10);
        }
        if (valor > 100 && valor < 200){
            valorPago+= valor - (valor*0.15);
        }
        if (valor > 200){
            valorPago+= valor - (valor*0.20);
        }
        valorTotal += valor;
    }
    printf("Valor total = %.2f\nValor com desconto = %.2f\n", valorTotal, valorPago);

    return 0;
}