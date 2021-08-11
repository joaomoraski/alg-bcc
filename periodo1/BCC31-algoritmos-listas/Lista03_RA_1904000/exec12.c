#include <stdio.h>


int main(){
    
    char operador;
    int numero1;
    int numero2;

    printf(
    	"\n"
    	"Calculadora básica\n"
    	"----------------------------------------------------------------------------\n"
    	);
    printf("Informe o operador da conta: ");
    scanf("%c", &operador);

	printf("Informe o primeiro número da conta: ");
    scanf("%d", &numero1);
	
	printf("Informe o segundo número da conta: ");
    scanf("%d", &numero2);

    switch (operador){
    	case '+':
	    	printf("%d + %d = %d \n", numero1, numero2, numero1 + numero2);
	    	break;
    	case '-':
	    	printf("%d - %d = %d \n", numero1, numero2, numero1 - numero2);
	    	break;
    	case '*':
	    	printf("%d * %d = %d \n", numero1, numero2, numero1 * numero2);
	    	break;
    	case '/':
	    	printf("%d / %d = %f \n", numero1, numero2, (float) numero1 / numero2);
	    	break;
    }

    return 0;

}