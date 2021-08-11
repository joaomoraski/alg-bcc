#include <stdio.h>

int main() {

    float saldo;


    printf("Questão numero 15!\n");

    printf("Saldo inicial: ");
    scanf("%f", &saldo);

    float numero;
    float debito = 0;
    float credito = 0;

    while(numero!= 0){
        printf("Operação: ");
        scanf("%f", &numero);
        if (numero >= 0){
            credito = credito + numero;
        } else{
            debito = debito + numero;
        }
        saldo = saldo + numero;

    }

    float cpmf = debito * 0.0035;
    printf("Total de créditos ....: %0.2f\n", credito);
    printf("Total de débitos .....: %0.2f\n", debito);
    printf("C.P.M.F. paga ........: %0.2f\n", cpmf);
    printf("Saldo final ..........: %0.2f", saldo);

    return 0;
}