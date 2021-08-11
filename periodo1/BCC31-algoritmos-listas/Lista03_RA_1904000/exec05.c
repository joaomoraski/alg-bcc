#include <stdio.h>

int main(){
    
    float nota1;
    float nota2;
    float nota3;
    float media;

    printf("Informe as notas(1-10): ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);


    if (nota1 <= 10 && nota2 <= 10 && nota3 <= 10) {
    	media = (nota1 + nota2 + nota3)/3;
	    if (media >= 9.0) {
			printf("Aluno esta no conceito A com media: %f \n", media);
	    } else if (media >= 8.0) {
			printf("Aluno esta no conceito B com media: %f \n", media);
	    } else if (media >= 7.0) {
			printf("Aluno esta no conceito C com media: %f \n", media);
	    } else if (media < 7.0) {
			printf("Aluno esta no conceito F com media: %f \n", media);
	    }	
    } else {
    	printf("Informe números dentro das especificações (1~10)!\n");
    }

    return 0;

}