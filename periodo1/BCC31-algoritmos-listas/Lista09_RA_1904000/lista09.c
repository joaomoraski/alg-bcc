//
// Created by moraski on 06/05/2021.
// Using: CLion IDE - JetBrains
//

//gcc lista09.c -str=c99 && ./a.out

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// funções permitidas printf(), scanf(), strlen(), strcpy(), strcmp(), strcat();

// Exercicio 01
void printMat(int rows, int cols, int m[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", m[i][j]);
        }
    }
    printf("\n");
}

// Exercicio 02
void printMatRev(int rows, int cols, int m[rows][cols]) {
    for (int i = rows - 1; i >= 0; --i) {
        for (int j = cols - 1; j >= 0; --j) {
            printf("%d ", m[i][j]);
        }
    }
    printf("\n");
}

// Exercicio 03
void printMinMax(int rows, int cols, int m[rows][cols]) {
    int min = 2147483647; // max_int
    int max = -2147483648; // min_int
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (m[i][j] > max) {
                max = m[i][j];
            }
            if (m[i][j] < min) {
                min = m[i][j];
            }
        }
    }
    printf("Maior: %d\n", max);
    printf("Menor: %d\n", min);
}

// Exercicio 04
void findMinMax(int rows, int cols, int m[rows][cols], int *min, int *max) {
    int minF = 2147483647; // max_int
    int maxF = -2147483648; // min_int
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (m[i][j] > maxF) {
                maxF = m[i][j];
            }
            if (m[i][j] < minF) {
                minF = m[i][j];
            }
        }
    }
    *min = minF;
    *max = maxF;
}

// Exercicio 05
void initValues(int rows, int cols, int m[rows][cols], int start, int step) {
    m[0][0] = start;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (m[i][j] != start) {
                m[i][j] = (m[i][j - 1] + step);
            } else {
                continue;
            }
        }
    }
}

// Exercicio 06
void initRandom(int rows, int cols, int m[rows][cols], int min, int max) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            m[i][j] = min + rand() % (max + 1 - min);
        }
    }
}

// Exercicio 07
int maxLine(int rows, int cols, int m[rows][cols]) {
    int maiorSoma = 0;
    for (int i = 0; i < rows; ++i) {
        int soma = 0;
        for (int j = 0; j < cols; ++j) {
            soma += m[i][j];
        }
        if (maiorSoma < soma) {
            maiorSoma = soma;
        }
    }
    return maiorSoma;
}

// Exercicio 08
void findTotals(int rows, int cols, int m[rows][cols]) {
    int soma = 0;
    for (int i = 0; i < rows; ++i) {
        soma = 0;
        for (int j = 0; j < cols; ++j) {
            if (j == cols - 1) {
                m[i][j] = soma;
            } else {
                soma += m[i][j];
            }
        }
    }
}

// Exercicio 09
int matrixEquals(int r1, int c1, int m1[r1][c1], int r2, int c2, int m2[r2][c2]) {
    int res;
    if (r1 != r2 || c1 != c2) {
        return 0;
    }
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            if (m1[i][j] == m2[i][j]) {
                res = 1;
            } else {
                res = 0;
                break;
            }
        }
        if (!res) {
            break;
        }
    }
    return res;
}

// Exercicio 10
void sum(int rows, int cols, int m1[rows][cols], int m2[rows][cols], int m3[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

// Exercicio 11
void transpose(int r1, int c1, int m1[r1][c1], int r2, int c2, int m2[r2][c2]) {
    if (r1 != c2 || c1 != r2) {
        printf("Incompativel");
    } else {
        for (int i = 0; i < r1; i = i + 1) {
            for (int j = 0; j < c1; j = j + 1) {
                m2[j][i] = m1[i][j];
            }
        }
    }
}

// Exercicio 12
void multiply(int d, int m1[d][d], int m2[d][d], int m3[d][d]) {
    for (int i = 0; i < d; i++) {
        for (int k = 0; k < d; k++) {
            m3[i][k] = 0;
            for (int j = 0; j < d; j++) {
                m3[i][k] += m1[i][j] * m2[j][k];
            }
        }
    }
}

// Exercicio 13
void switchDiagonals(int d, int m1[d][d]) {
    int principalDiag[d];
    int secondaryDiag[d];
    int j = d - 1;
    int k = 0;
    for (int i = 0; i < d; ++i) {
        principalDiag[i] = m1[i][i];
        secondaryDiag[i] = m1[j][k];
        --j;
        ++k;
    }
    j = d - 1;
    k = 0;
    for (int i = 0; i < d; ++i) {
        m1[i][i] = secondaryDiag[j];
        m1[j][k] = principalDiag[j];
        --j;
        ++k;
    }
}

// Exercicio 14
void pascalTriangle(int n) {
    int m[n][n + 1];
    for (int i = 0; i < n + 1; ++i) {
        m[0][i] = 0;
        m[i][0] = 0;
    }
    m[0][1] = 1;
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n + 1; ++j) {
            m[i][j] = m[i - 1][j - 1] + m[i - 1][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n + 1; ++j) {
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Exercicio 15
int checkUpperTriangle(int d, int m[d][d]) {
    int check = 1;
    for (int i = 0; i < d; ++i) {
        for (int j = 0; j < d; ++j) {
            if (i > j && m[i][j] != 0) {
                check = 0;
            }
        }
    }
    return check;
}

// Exercicio 16
int checkIdentify(int rows, int cols, int m[rows][cols]) {
    int check = 1;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (i > j && m[i][j] != 0) {
                check = 0;
            }
            if (i < j && m[i][j] != 0) {
                check = 0;
            }
        }
    }
    return check;
}

// Exercicio 17
int checkSymmetric(int d, int m[d][d]) {
    for (int i = 0; i < d; i++) {
        for (int j = i + 1; j < d; j++) {
            if (m[i][j] != m[j][i]) {
                return 0;
            }
        }
    }
    return 1;
}

// Exercicio 18
void printStrings(int n, int len, char list[n][len]) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", list[i]);
    }
}

// Exercicio 19
void printStringsMinMax(int n, int len, char list[n][len]) {
    int min = 2147483647; // max_int
    int max = -2147483648; // min_int
    int saveMin, saveMax;
    char str[1000];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < len - 1; ++j) {
            str[j] = list[i][j];
        }
        if (strlen(str) < min) {
            min = strlen(str);
            saveMin = i;
        }
        if (strlen(str) > max) {
            max = strlen(str);
            saveMax = i;
        }
    }
    printf("%s\n", list[saveMin]);
    printf("%s\n", list[saveMax]);
}


// Exercicio 20
int countWords(int n, int len, char lines[n][len]) {
    int w = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < len - 1; ++j) {
            while (lines[i][j] == ' ') {
                ++j;
            }
            if (lines[i][j] != ' ' && lines[i][j] != '\t') {
                ++w;
                while (lines[i][j] != ' ') {
                    ++j;
                }
            }
        }
    }
    return w;
}

// Exercicio 21
int countOccurrences(int n, int len, char lines[n][len], char word[]) {
    int contLetter = 0;
    int occurence = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < len - 1; ++j) {
            while (lines[i][j] == ' ') {
                ++j;
            }
            while (lines[i][j] == word[contLetter]) {
                ++contLetter;
                ++j;
            }
            if (contLetter == strlen(word)) {
                ++occurence;
                contLetter = 0;
            } else {
                contLetter = 0;
            }
        }
    }
    return occurence;
}

// Main
int main() {


    return 0;
}

