#include <stdio.h>

int main(){
    
    int number;

    printf("Informe o número: ");
    scanf("%d", &number);
    int quantImpar = 0;

    for (int i = 0; number > quantImpar; ++i) {
        if (i%2 != 0){
            printf("%d\n", i);
            ++quantImpar;
        }
    }

    return 0;

}