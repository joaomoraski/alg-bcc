#include <stdio.h>

int main(){
    
    int number;

    printf("Informe o número: ");
    scanf("%d", &number);

    for (int i = 0; i <= 10; ++i) {
        printf("\t%d x %d = %d\n", number,i, number*i);
    }

    return 0;

}