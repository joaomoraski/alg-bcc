#include <stdio.h>

int main () {

    int numero;
    int soma = 0;
    int quadradoSoma = 0;
    printf("Questão numero 13!\n");
    printf("Informe um número: ");
    scanf("%d", &numero);

    for (int i = 0; i <= numero; ++i) {
        soma += i * i;
        quadradoSoma += i;
    }
    quadradoSoma = quadradoSoma * quadradoSoma;

    printf("A diferença entre ambos é %d - %d = %d\n", quadradoSoma, soma, quadradoSoma-soma);


    return 0;
}