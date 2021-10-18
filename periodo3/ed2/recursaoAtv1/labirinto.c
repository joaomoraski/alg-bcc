//
// Created by moraski on 18/10/2021.
//

#include <stdio.h>
#include <stdbool.h>

#define LINHA 10
#define COLUNA 10

void printarLabirinto(int A[LINHA][COLUNA]) {
    printf("{\n");
    for (int i = 0; i < LINHA; ++i) {
        printf("\t{ ");
        for (int j = 0; j < COLUNA; ++j) {
            printf("%d, ", A[i][j]);
        }
        printf("}\n");
    }
    printf("}\n");
}

void printarCaminho(int A[LINHA][COLUNA]) {
    int count = 0;
    for (int i = 0; i < LINHA; ++i) {
        for (int j = 0; j < COLUNA; ++j) {
            if (A[i][j] == 2) {
                printf("Passo %d: (i, j) - (%d, %d)\n", count++, i, j);
            }
        }
    }
}

bool explorar(int A[LINHA][COLUNA], int i, int j) {

    A[i][j] = 2;

    if (i == 9 && j == 9) return true;

    if (i + 1 < LINHA) {
        if (A[i + 1][j] == 0) {
            if (explorar(A, i + 1, j)) return true;
        }
    }

    if (i - 1 >= 0) {
        if (A[i - 1][j] == 0) {
            if (explorar(A, i - 1, j)) return true;
        }
    }

    if (j + 1 < COLUNA) {
        if (A[i][j + 1] == 0) {
            if (explorar(A, i, j + 1)) return true;
        }
    }

    if (j - 1 >= 0) {
        if (A[i][j - 1] == 0) {
            if (explorar(A, i, j - 1)) return true;
        }
    }
    return false;
}


int main() {
    int A[LINHA][COLUNA] = {
            {0, 1, 0, 1, 1, 1, 1, 1, 0, 0},
            {0, 0, 0, 0, 1, 1, 0, 1, 1, 0},
            {0, 1, 1, 0, 0, 1, 0, 1, 0, 0},
            {1, 0, 0, 1, 0, 0, 0, 0, 0, 1},
            {1, 1, 0, 0, 0, 1, 1, 1, 1, 1},
            {0, 0, 0, 1, 0, 1, 1, 0, 0, 1},
            {0, 1, 1, 1, 0, 0, 0, 0, 1, 1},
            {0, 0, 0, 1, 1, 1, 1, 1, 1, 1},
            {0, 1, 0, 0, 0, 0, 0, 1, 1, 1},
            {0, 1, 1, 1, 1, 1, 0, 0, 0, 0},
    };
    printf("\n//----------------------------- Labirinto 1 ------------------------------\\\n\n");
    printarLabirinto(A);
    if (explorar(A, 0, 0)) {
        printf("\nTem solução!\n");
        printf("\n//----------------------------- Solucionado ------------------------------\\\n\n");
        printarLabirinto(A);
        printf("\n//----------------------------- Passo a passo ------------------------------\\\n\n");
        printarCaminho(A);
    } else {
        printf("Não tem solução!\n");
        printarLabirinto(A);
    }

    int B[LINHA][COLUNA] = {
            {0, 1, 1, 0, 1, 1, 1, 1, 1, 1},
            {0, 1, 1, 0, 1, 1, 1, 1, 1, 1},
            {0, 1, 1, 0, 1, 1, 1, 1, 1, 1},
            {0, 0, 0, 0, 1, 1, 1, 1, 1, 1},
            {1, 1, 1, 0, 0, 0, 0, 0, 1, 1},
            {1, 1, 1, 0, 1, 1, 1, 0, 1, 1},
            {1, 1, 1, 0, 1, 1, 1, 0, 1, 1},
            {1, 1, 1, 1, 0, 0, 0, 0, 1, 1},
            {1, 1, 1, 1, 1, 1, 1, 0, 0, 0},
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
    };

    printf("\n//----------------------------- Labirinto 2 ------------------------------\\\n\n");
    printarLabirinto(B);
    if (explorar(B, 0, 0)) {
        printf("\nTem solução!\n");
        printf("\n//----------------------------- Solucionado ------------------------------\\\n\n");
        printarLabirinto(B);
        printf("\n//----------------------------- Passo a passo ------------------------------\\\n\n");
        printarCaminho(B);
    } else {
        printf("Não tem solução!\n");
        printarLabirinto(B);
    }

    int C[LINHA][COLUNA] = {
            {0, 1, 1, 0, 1, 1, 1, 1, 1, 1},
            {0, 0, 0, 0, 0, 0, 1, 1, 1, 1},
            {0, 1, 1, 0, 1, 1, 0, 0, 0, 0},
            {0, 1, 1, 0, 0, 0, 0, 1, 1, 1},
            {0, 1, 1, 1, 0, 1, 1, 1, 1, 1},
            {0, 1, 1, 1, 0, 1, 0, 0, 1, 1},
            {0, 1, 1, 1, 0, 1, 0, 1, 1, 1},
            {0, 0, 0, 0, 1, 1, 0, 1, 1, 1},
            {1, 1, 1, 0, 0, 0, 0, 0, 0, 0},
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
    };
    printf("\n//----------------------------- Labirinto 3 ------------------------------\\\n\n");
    printarLabirinto(C);
    if (explorar(C, 0, 0)) {
        printf("\nTem solução!\n");
        printf("\n//----------------------------- Solucionado ------------------------------\\\n\n");
        printarLabirinto(C);
        printf("\n//----------------------------- Passo a passo ------------------------------\\\n\n");
        printarCaminho(C);
    } else {
        printf("Não tem solução!\n");
        printarLabirinto(C);
    }

    int D[LINHA][COLUNA] = {
            {0, 0, 0, 0, 0, 1, 1, 1, 1, 1},
            {0, 1, 1, 1, 0, 1, 0, 1, 1, 1},
            {0, 1, 1, 1, 0, 1, 0, 0, 0, 0},
            {0, 1, 1, 1, 0, 1, 0, 1, 1, 1},
            {0, 1, 1, 1, 0, 0, 0, 0, 1, 1},
            {0, 1, 1, 1, 0, 1, 0, 1, 1, 1},
            {0, 1, 1, 1, 0, 1, 0, 1, 1, 1},
            {1, 1, 1, 1, 0, 1, 0, 1, 0, 1},
            {1, 1, 1, 1, 1, 1, 0, 0, 0, 1},
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    };
    printf("\n//----------------------------- Labirinto 4 ------------------------------\\\n\n");
    printarLabirinto(D);
    if (explorar(D, 0, 0)) {
        printf("\nTem solução!\n");
        printf("\n//----------------------------- Solucionado ------------------------------\\\n\n");
        printarLabirinto(D);
        printf("\n//----------------------------- Passo a passo ------------------------------\\\n\n");
        printarCaminho(D);
    } else {
        printf("\nNão tem solução!\n");
        printf("\n//----------------------------- Após Tentativa de solução ------------------------------\\\n\n");
        printarLabirinto(D);
    }

    int E[LINHA][COLUNA] = {
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    };
    printf("\n//----------------------------- Labirinto 5 ------------------------------\\\n\n");
    printarLabirinto(E);
    if (explorar(E, 0, 0)) {
        printf("\nTem solução!\n");
        printf("\n//----------------------------- Solucionado ------------------------------\\\n\n");
        printarLabirinto(E);
        printf("\n//----------------------------- Passo a passo ------------------------------\\\n\n");
        printarCaminho(E);
    } else {
        printf("\nNão tem solução!\n");
        printf("\n//----------------------------- Após Tentativa de solução ------------------------------\\\n\n");
        printarLabirinto(E);
    }

    return 0;
}