#include <stdio.h>

int main(){

    int number;
    int primo = 1;
    printf("Informe o número para verificar se é primo: ");
    scanf("%d", &number);

    for (int i = 2; i < number; ++i) {
        if (number%i == 0){
            primo = 0;
        }
    }

    if (primo == 1){
        printf("Primo\n");
    } else{
        printf("Não é primo\n");
    }

    return 0;
}