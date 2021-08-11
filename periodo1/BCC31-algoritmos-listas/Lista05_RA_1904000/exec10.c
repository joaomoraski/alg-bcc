#include <stdio.h>

int main () {

    int m;
    printf("Questão numero 10!\n");

    printf("Informe M: ");
    scanf("%d", &m);

    int ss = m-1;
    int xs = 1;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < ss; ++j) {
            printf(" ");
        }
        for (int j = 0; j < xs; ++j) {
            printf("X");
        }
        printf("\n");
        xs+=2;
        ss-=1;

    }

    return 0;
}