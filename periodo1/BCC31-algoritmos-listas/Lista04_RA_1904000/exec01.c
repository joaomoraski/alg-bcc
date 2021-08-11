#include <stdio.h>

int main(){

    int number;
    printf("Informe o número de linhas: ");
    scanf("%d", &number);

    for (int i = 0; i < number ; ++i){
        printf("Linha %d\n", i);
    }

    return 0;

}