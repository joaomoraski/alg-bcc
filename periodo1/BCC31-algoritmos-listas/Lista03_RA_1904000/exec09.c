#include <stdio.h>

int main(){
    
    char caractere;

    printf("Informe um caractere: ");
    scanf("%c", &caractere);

    if ( (caractere >= 'a' && caractere <= 'z') || (caractere >= 'A' && caractere <= 'Z') ) {
    	printf("O caractere informado é uma letra! \n");
    }

    return 0;

}