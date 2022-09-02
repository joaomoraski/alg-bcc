#include "stdio.h"
#include "string.h"

int palindromo(char *palavra, int indice, int size) {
    if (size == 1) return 1;
    if (indice > size) return 1;
    if (palavra[indice] != palavra[size-indice]) return 0;
    return palindromo(palavra,indice+1, size);
}

int main(int argc, char *argv[]) {
    if (argc <= 1) printf("Informe um parametro para rodar\n");
    else for (int i = 1; i < argc; ++i) printf("%s", palindromo(argv[i], 0, strlen(argv[i])-1) ? "É um palindromo\n" : "Não é um palindromo\n");
    return 0;
}