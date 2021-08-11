#include <stdio.h>

int main(){

    int numeroConta;
    printf("Informe o número da conta: ");
    scanf("%d", &numeroConta);
    int digito = numeroConta;
    int soma = 0;
    while (digito != 0){
        soma+= digito%10;
        digito/=10;
    }
    printf("Numero da conta completo: 00%d-%d\n", numeroConta, soma%10);

//    printf("%d", soma);
    return 0;
}