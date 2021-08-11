#include <stdio.h>

int main(){
    
    char caractere;

    printf("Informe um caractere: ");
    scanf("%c", &caractere);

    if ((caractere >= 'a' && caractere <= 'z') || (caractere >= 'A' && caractere <= 'Z')) {
    	if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' ||
    		caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U') {
    			printf("o caractere (%c) é uma letra e é uma vogal\n", caractere);
    		} else{
    		  printf("O caractere (%c) é uma letra e é uma consoante\n", caractere);
    	}
	} else if (caractere >= '0' && caractere <= '9'){
		printf("O caractere (%c) é um número\n", caractere);
	} else if (caractere >= '!' && caractere <= '/') {
        printf("O caractere (%c) é um simbolo\n", caractere);
    }	


    return 0;

}