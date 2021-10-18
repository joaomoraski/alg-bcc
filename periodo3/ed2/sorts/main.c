//
// Created by moraski on 18/10/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include "mergesort.h"
#include "quicksort.h"

int *random_vector(int n, int max, int seed) {
    int *vector = malloc(sizeof(int) * n);
    srand(seed);
    for (int i = 0; i < n; ++i) {
        vector[i] = rand() % max;
    }
    return vector;
}

void print_vector(int *vector, int tam) {
    printf("[ ");
    for (int i = 0; i < tam; ++i) {
        printf("%d ", vector[i]);
    }
    printf("]");
    printf("\n");
}

int main() {
//    int *vector = random_vector(100, 1000, 0);
//    print_vector(vector, 100);

//    printf("\n---------------------------------------------- Quick sort ----------------------------------------------------------\n");
//    int v[5] = {1, 3, 4, 5, 2};
//    printf("Vetor antes: \n");
//    print_vector(v, 5);
//    QuickSort(v, 0, 4);
//    printf("Vetor apos: \n");
//    print_vector(v, 5);
//    printf("\n---------------------------------------------- Partition sort ----------------------------------------------------------\n");
//    int v2[5] = {1, 3, 4, 5, 2};
//    printf("Vetor antes: \n");
//    print_vector(v2, 5);
//    Partition(v2, 0, 4);
//    printf("Vetor apos: \n");
//    print_vector(v2, 5);

//    printf("\n---------------------------------------------- B - QuickSort ----------------------------------------------------------\n");
//    int *vector = random_vector(100, 1000, 0);
//    printf("Vetor antes: \n");
//    print_vector(vector, 100);
//    QuickSort(vector, 0, 99);
//    printf("Vetor apos: \n");
//    print_vector(vector, 100);
//    printf("\n---------------------------------------------- B - QuickSort Random ----------------------------------------------------------\n");
//    int *vector2 = random_vector(100, 1000, 0);
//    printf("Vetor antes: \n");
//    print_vector(vector2, 100);
//    RandomQuickSort(vector2, 0, 99);
//    printf("Vetor apos: \n");
//    print_vector(vector2, 100);

    printf("\n---------------------------------------------- B - QuickSort ----------------------------------------------------------\n");
    int *vector = random_vector(10, 10, 0);
    printf("Vetor antes: \n");
    print_vector(vector, 10);
    MedQuickSort(vector, 0, 9);
    printf("Vetor apos: \n");
    print_vector(vector, 10);
    printf("\n---------------------------------------------- B - QuickSort Med ----------------------------------------------------------\n");
    int *vector2 = random_vector(10, 10, 0);
    printf("Vetor antes: \n");
    print_vector(vector2, 10);
    MedQuickSort(vector2, 0, 9);
    printf("Vetor apos: \n");
    print_vector(vector2, 10);

    return 0;
}