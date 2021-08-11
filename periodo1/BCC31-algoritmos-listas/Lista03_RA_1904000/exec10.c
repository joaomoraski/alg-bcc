#include <stdio.h>

int main() {
    char caractere;

    printf("Informe algum caractere:");
    scanf("%c", &caractere);

    if( ( caractere >= 'a' && caractere <= 'z' ) ) {
  		printf("%c \n", caractere - 32);
    } else if( caractere>='A' && caractere <='Z' ) {
    	printf("%c \n", caractere);
    } else{
    	printf("Caractere %c(%d) => Não é uma letra \n", caractere, caractere);
    }
       
        
  
    return 0;
}