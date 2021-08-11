#include <stdio.h>

int main(void) {

    char opcao;
    int linha = 5;
    int coluna = 10;

    while(1){
        for(int i = 1; i <= 10; ++i){
            for(int j = 1; j <= 20; ++j){
                if(i==linha && j==coluna){
                    printf(" #");
                }else{
                    printf(" .");
                }
            }
            printf("\n");
        }
        printf("\n");
        printf("Informe um comando que você quer executar(W,A,S,D):\n");
        scanf("%c", &opcao);
        if(opcao=='W' || opcao=='w'){
            linha -= 1;
        }else if(opcao=='A' || opcao=='a'){
            coluna -= 1;
        }else if(opcao=='S' || opcao=='s'){
            linha += 1;
        }else if(opcao=='D' || opcao=='d'){
            coluna += 1;
        }else if(opcao==0){
            break;
        }

    }


}