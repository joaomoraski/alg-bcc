#include <stdio.h>

int main () {

    int a = 0;
    int b = 0;
    int opcao;


    while (1){
        printf("--------------------------------------------------\n");
        printf("SUM SUPREME! \t\t A: %d\t B: %d\n", a, b);
        printf("--------------------------------------------------\n");

        printf("1 - Set A\n");
        printf("2 - Set B\n");
        printf("3 - Show A+B\n");
        printf("4 - Show AxB\n");
        printf("5 - Exit\n");
        scanf("%d", &opcao);

        if (opcao == 5){
            break;
        }
        if (opcao == 1){
            printf("Informe valor para A: ");
            scanf("%d", &a);
        }
        if (opcao == 2){
            printf("Informe valor para b: ");
            scanf("%d", &b);
        }
        if (opcao == 3){
            printf("%d + %d = %d\n", a, b, a+b);
        }
        if (opcao == 4){
            printf("%d * %d = %d\n", a, b, a*b);
        }
    }

    return 0;
}