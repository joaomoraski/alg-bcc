#include <stdio.h>

int main(){
    
    int number;

    printf("Informe um número: ");
    scanf("%d", &number);

    switch(number) {

    	case 1: printf("Um \n"); break;
    	case 2: printf("Dois \n"); break;
    	case 3: printf("Três \n"); break;
    	case 4: printf("Quatro \n"); break;
    	case 5: printf("Cinco \n"); break;
    	case 6: printf("Seis \n"); break;
    	case 7: printf("Sete \n"); break;
    	case 8: printf("Oito \n"); break;
    	case 9: printf("Nove \n"); break;
    	default: printf("Erro: informou algum número fora do intervalo permitido (1~9) \n");

    }

    return 0;

}