#include<stdio.h>
#include <string.h>

void printSurname(char name[]) {
    int cont = 0;
    for (int i = strlen(name) - 1; i > 0; --i) {
        if (name[i] == ' ') {
            break;
        } else {
            ++cont;
        }
    }
    for (int i = strlen(name) - cont; i < strlen(name); ++i) {
        printf("%c", name[i]);
    }
    printf("\n");
}

int areSimilar(int n1, int v1[n1], int n2, int v2[n2]) {
    int cont = 0;
    if (n1 != n2) {
        return 0;
    }
    for (int i = 0; i < n1; ++i) {
        for (int j = 0; j < n2; ++j) {
            if (v1[i] == v2[j]) {
                ++cont;
            }
        }
    }
    if (n1 == n2 && cont == n1) {
        return 1;
    } else {
        return 0;
    }
}

void matrixFill(int d, int m[d][d], init[d]){
    for (int i = 0; i < d; ++i) {
        for (int j = 0; j < d; ++j) {
            m[i][j] = init[j];
            ++init[j];
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}


int main() {


    return 0;
}