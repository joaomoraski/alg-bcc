//
// Created by moraski on 25/05/2021.
//
#include <stdio.h>
#include <string.h>


/*
 * Escreva uma função que verifica se um array possui todos os seus elementos duplicados. A função deve retornar 1 (true) ou 0 (false).
 * int isDuplicated(int n, int v[n])
 * Exemplo de uso da função:
 * int vet1[] = {-1,-1,1,1,4,4,5,5,-3,-3,99,99};
 * int res = isDuplicated(12, vet1); // res: 1 (true)
 * */
int isDuplicated(int n, int v[n]) { //nomes dados pelo proprio exercicio
    int res;
    for (int i = 0; i < n; i += 2) {
        if (v[i] == v[i + 1]) {
            res = 1;
        } else {
            return 0;
        }
    }
    return res;
}

/*
 * Escreva uma função que recebe uma string e um número n, que indica a quantidade de hifens que devem ser adicionados
 * ao início e ao final da mesma. A função modificará a própria string de entrada. Considere que a string possui espaço
 * suficiente para receber os caracteres extras. Dica: lembre-se que você pode montar a nova string em uma variável
 * auxiliar e, depois, copiá-la para a string original.
 *
 * void addDashes(char str[], int n)
 * Exemplos de uso da função:
 * char str[100] = "World"; // cabem 99 caracteres
 * addDashes(str, 5); // adicionar 5 hifens ao início e ao final de str
 * printf("%s", str); // "-----World-----"
 * Funções liberadas da biblioteca padrão: printf() e scanf() <stdio.h>; strlen(), strcpy(), strcat() e strcmp() <string.h>.
 * Não é permitido usar qualquer outra função além das enumeradas acima.
 * A prova é individual. Se for detectado qualquer tipo de plágio, as provas dos participantes  serão ZERADAS, sem a possibilidade de recuperação. Exemplos de plágios:
 * Cópias de colegas: não é prova em grupo;
 * Cópias de códigos encontrados na internet: não é trabalho de pesquisa.
 * Instruções para envio:
 * Quanto terminar a prova, vá à última questão clique em FINALIZAR TENTATIVA.
 * Caso o tempo da prova termine, a prova será enviada automaticamente.
 *
 * */

void addDashes(char str[], int n) {
    char strCopy[strlen(str)];
    strcpy(strCopy, str);
    for (int i = 0; i < n; ++i) {
        str[i] = '-';
    }
    int j = 0, tamFinal = (int) strlen(strCopy) + n + n; // tamanho final para 1 for fazer tudo
    for (int i = n; i < tamFinal; ++i) {
        if (j < strlen(strCopy)) {
            str[i] = strCopy[j];
            ++j;
        } else {
            str[i] = '-';
        }
    }
}

/*
 *
 * Escreva uma função que recebe uma matriz, bem como suas dimensões (linha e coluna), e gera seu conteúdo seguindo um padrão.
 * O padrão está apresentado no exemplo abaixo. Dessa forma, você precisa identificar o padrão com base nos valores apresentados no exemplo.
 * void fillMatrix(int rows, int cols, int m[rows][cols])
 * Exemplo de uso da função e padrão de números a gerar:
 * int mat[4][6];
 * fillMatrix(4, 6, mat);
// Após a chamada da função com as dimensões informadas,
// a matriz terá sido preenchida com o seguinte padrão de conteúdo:
-> 24 23 22 21 20 19
-> 18 17 16 15 14 13
-> 12 11 10  9  8  7
-> 6  5  4  3  2  1
 * */


void fillMatrix(int rows, int cols, int m[rows][cols]){
    int initNumber = rows*cols;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            m[i][j] = initNumber - j;
        }
        initNumber -= cols;
    }
}

int main() {
//    int rows = 4, cols = 6;
//    int mat[rows][cols];
//    fillMatrix(rows, cols, mat);
////    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            printf("%d - ", mat[i][j]);
//        }
//        printf("Pulou\n");
//    }
//    char str[100] = "Marcos"; // cabem 99 caracteres
//    addDashes(str, 7); // adicionar 5 hifens ao início e ao final de str
//    printf("%s\n", str); // "-----World-----"
//
//    int vet1[] = {-1,-1,2,-2,1,1,4,4,5,5,-3,-3,99,99};
//    int vet2[] = {-1,-1,2,2,1,1,4,4,5,5,-3,-3,99,99};
//    int vet3[] = {-1,-1,1,1,4,4,5,5,-3,-3,99,99};
//    int vet4[] = {-1,2,-1,2,1,1,4,4,5,5,-3,-3,99,99};
//
//    int res = isDuplicated(14, vet1); // res: 1 (true)
//    int res2 = isDuplicated(14, vet2); // res: 1 (true)
//    int res3 = isDuplicated(12, vet3); // res: 1 (true)
//    int res4 = isDuplicated(14, vet4); // res: 1 (true)
//    printf("%d\n", res);
//    printf("%d\n", res2);
//    printf("%d\n", res3);
//    printf("%d\n", res4);
    return 0;
}
