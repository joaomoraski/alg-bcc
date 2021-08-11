#include <stdio.h>

int main() {

	int numero;
	printf("Informe um número : ");
	scanf("%d", &numero);

	int soma = 0;
	while( numero > 0 ) {
		soma = soma + numero % 10;
		numero = numero / 10;
	}
	
	printf("A soma dos dígitos é: %d \n", soma);
	
	return 0;
}