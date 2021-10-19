//
// Created by moraski on 18/10/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

void limparVetor(int **vetor1, int **vetor2, int **vetor3, int **vetor4) {
    free(*vetor1);
    free(*vetor2);
    free(*vetor3);
    free(*vetor4);
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

    printf("\n---------------------------------------------- Exercicio A ----------------------------------------------\n");

    printf("\n---------------------------------------------- Quick sort ----------------------------------------------\n");

    int v[5] = {1, 3, 4, 5, 2};
    printf("Vetor antes: ");
    print_vector(v, 5);
    QuickSort(v, 0, 4);
    printf("Vetor apos: ");
    print_vector(v, 5);

    printf("\n---------------------------------------------- Partition sort ----------------------------------------------\n");

    int v2[5] = {1, 3, 4, 5, 2};
    printf("Vetor antes: ");
    print_vector(v2, 5);
    Partition(v2, 0, 4);
    printf("Vetor apos: ");
    print_vector(v2, 5);

    printf("\n---------------------------------------------- Exercicio B  ----------------------------------------------\n");

    printf("\n---------------------------------------------- B - QuickSort  ----------------------------------------------\n");

    int *vector = random_vector(100, 1000, 0);
    printf("Vetor antes: \n");
    print_vector(vector, 100);
    QuickSort(vector, 0, 99);
    printf("Vetor apos: \n");
    print_vector(vector, 100);

    printf("\n---------------------------------------------- B - QuickSort Random ----------------------------------------------\n");

    int *vector2 = random_vector(100, 1000, 0);
    printf("Vetor antes: \n");
    print_vector(vector2, 100);
    RandomQuickSort(vector2, 0, 99);
    printf("Vetor apos: \n");
    print_vector(vector2, 100);

    printf("\n---------------------------------------------- Exercicio C ----------------------------------------------\n");

    printf("\n---------------------------------------------- C - QuickSort ----------------------------------------------\n");
    int *vector3 = random_vector(10, 10, 0);
    printf("Vetor antes: \n");
    print_vector(vector3, 10);
    MedQuickSort(vector3, 0, 9);
    printf("Vetor apos: \n");
    print_vector(vector3, 10);

    printf("\n---------------------------------------------- C - QuickSort Mediana de 3 ----------------------------------------------\n");
    int *vector4 = random_vector(10, 10, 0);
    printf("Vetor antes: \n");
    print_vector(vector4, 10);
    MedQuickSort(vector4, 0, 9);
    printf("Vetor apos: \n");
    print_vector(vector4, 10);

    printf("\n---------------------------------------------- Exercicio D ----------------------------------------------\n");

    int seed = 42;
    int max = 100;
    clock_t time, time2, time3, time4;

    printf("\n---------------------------------------------- Quicksort N = 100 ----------------------------------------------\n");

    int *vetor1, *vetor2, *vetor3, *vetor4;
    vetor1 = random_vector(100, max * 100, seed);
    time = clock();
    QuickSort(vetor1, 0, 99);
    time = clock() - time;
    printf("Tempo para n = 100: %fs\n", ((float) (time) / CLOCKS_PER_SEC));

    printf("\n---------------------------------------------- Quicksort N = 1000 ----------------------------------------------\n");

    vetor2 = random_vector(1000, max * 1000, seed);
    time2 = clock();
    QuickSort(vetor2, 0, 999);
    time2 = clock() - time2;
    printf("Tempo para n = 1000: %fs\n", ((float) (time2) / CLOCKS_PER_SEC));

    printf("\n---------------------------------------------- Quicksort N = 10000 ----------------------------------------------\n");

    vetor3 = random_vector(10000, max * 10000, seed);
    time3 = clock();
    QuickSort(vetor3, 0, 9999);
    time3 = clock() - time3;
    printf("Tempo para n = 10000: %fs\n", ((float) (time3) / CLOCKS_PER_SEC));

    printf("\n---------------------------------------------- Quicksort N = 50000 ----------------------------------------------\n");
    vetor4 = random_vector(50000, max * 50000, seed);
    time4 = clock();
    QuickSort(vetor4, 0, 49999);
    time4 = clock() - time4;
    printf("Tempo para n = 50000: %fs\n", ((float) (time4) / CLOCKS_PER_SEC));

    limparVetor(&vetor1, &vetor2, &vetor3, &vetor4);

    printf("\n---------------------------------------------- Quicksort Randomizado ----------------------------------------------\n");

    printf("\n---------------------------------------------- Quicksort Randomizado N = 100 ----------------------------------------------\n");

    vetor1 = random_vector(100, max * 100, seed);
    time = clock();
    RandomQuickSort(vetor1, 0, 99);
    time = clock() - time;
    printf("Tempo para n = 100: %fs\n", ((float) (time) / CLOCKS_PER_SEC));

    printf("\n---------------------------------------------- Quicksort Randomizado N = 1000 ----------------------------------------------\n");

    vetor2 = random_vector(1000, max * 1000, seed);
    time2 = clock();
    RandomQuickSort(vetor2, 0, 999);
    time2 = clock() - time2;
    printf("Tempo para n = 1000: %fs\n", ((float) (time2) / CLOCKS_PER_SEC));

    printf("\n---------------------------------------------- Quicksort Randomizado N = 10000 ----------------------------------------------\n");

    vetor3 = random_vector(10000, max * 10000, seed);
    time3 = clock();
    RandomQuickSort(vetor3, 0, 9999);
    time3 = clock() - time3;
    printf("Tempo para n = 10000: %fs\n", ((float) (time3) / CLOCKS_PER_SEC));

    printf("\n---------------------------------------------- Quicksort Randomizado N = 50000 ----------------------------------------------\n");

    vetor4 = random_vector(50000, max * 50000, seed);
    time4 = clock();
    RandomQuickSort(vetor4, 0, 49999);
    time4 = clock() - time4;
    printf("Tempo para n = 50000: %fs\n", ((float) (time4) / CLOCKS_PER_SEC));

    limparVetor(&vetor1, &vetor2, &vetor3, &vetor4);

    printf("\n---------------------------------------------- Quicksort Mediana ----------------------------------------------\n");

    printf("\n---------------------------------------------- Quicksort Mediana N = 100 ----------------------------------------------\n");

    vetor1 = random_vector(100, max * 100, seed);
    time = clock();
    MedQuickSort(vetor1, 0, 99);
    time = clock() - time;
    printf("Tempo para n = 100: %fs\n", ((float) (time) / CLOCKS_PER_SEC));

    printf("\n---------------------------------------------- Quicksort Mediana N = 1000 ----------------------------------------------\n");

    vetor2 = random_vector(1000, max * 1000, seed);
    time2 = clock();
    MedQuickSort(vetor2, 0, 999);
    time2 = clock() - time2;
    printf("Tempo para n = 1000: %fs\n", ((float) (time2) / CLOCKS_PER_SEC));

    printf("\n---------------------------------------------- Quicksort Mediana N = 10000 ----------------------------------------------\n");

    vetor3 = random_vector(10000, max * 10000, seed);
    time3 = clock();
    MedQuickSort(vetor3, 0, 9999);
    time3 = clock() - time3;
    printf("Tempo para n = 10000: %fs\n", ((float) (time3) / CLOCKS_PER_SEC));

    printf("\n---------------------------------------------- Quicksort Mediana N = 50000 ----------------------------------------------\n");

    vetor4 = random_vector(50000, max * 50000, seed);
    time4 = clock();
    MedQuickSort(vetor4, 0, 49999);
    time4 = clock() - time4;
    printf("Tempo para n = 50000: %fs\n", ((float) (time4) / CLOCKS_PER_SEC));

    printf("\n---------------------------------------------- FIM TABELA 01 ----------------------------------------------\n");

    printf("\n---------------------------------------------- Quicksort Tabela 02 ----------------------------------------------\n");
    limparVetor(&vetor1, &vetor2, &vetor3, &vetor4);
    vetor1 = random_vector(100, max * 100, seed);
    vetor2 = random_vector(1000, max * 1000, seed);
    vetor3 = random_vector(10000, max * 10000, seed);
    vetor4 = random_vector(50000, max * 50000, seed);
    QuickSort(vetor1, 0, 99);
    QuickSort(vetor2, 0, 999);
    QuickSort(vetor3, 0, 9999);
    QuickSort(vetor4, 0, 49999);


    printf("\n---------------------------------------------- Quicksort N = 100 ----------------------------------------------\n");
    time = clock();
    QuickSort(vetor1, 0, 99);
    time = clock() - time;
    printf("Tempo para N = 100 ordenado: %fs\n", ((float) (time) / CLOCKS_PER_SEC));

    printf("\n---------------------------------------------- Quicksort N = 1000 ----------------------------------------------\n");

    time2 = clock();
    QuickSort(vetor2, 0, 999);
    time2 = clock() - time2;
    printf("Tempo para N = 1000 ordenado: %fs\n", ((float) (time2) / CLOCKS_PER_SEC));

    printf("\n---------------------------------------------- Quicksort N = 10000 ----------------------------------------------\n");

    time3 = clock();
    QuickSort(vetor3, 0, 9999);
    time3 = clock() - time3;
    printf("Tempo para N = 10000 ordenado: %fs\n", ((float) (time3) / CLOCKS_PER_SEC));

    printf("\n---------------------------------------------- Quicksort N = 50000 ----------------------------------------------\n");

    time4 = clock();
    QuickSort(vetor4, 0, 49999);
    time4 = clock() - time4;
    printf("Tempo para N = 50000 ordenado: %fs\n", ((float) (time4) / CLOCKS_PER_SEC));

    printf("\n---------------------------------------------- Quicksort Randomizado ----------------------------------------------\n");

    printf("\n---------------------------------------------- Quicksort Randomizado N = 100 ----------------------------------------------\n");

    time = clock();
    RandomQuickSort(vetor1, 0, 99);
    time = clock() - time;
    printf("Tempo para N = 100 ordenado: %fs\n", ((float) (time) / CLOCKS_PER_SEC));

    printf("\n---------------------------------------------- Quicksort Randomizado N = 1000 ----------------------------------------------\n");

    time2 = clock();
    RandomQuickSort(vetor2, 0, 999);
    time2 = clock() - time2;
    printf("Tempo para N = 1000 ordenado: %fs\n", ((float) (time2) / CLOCKS_PER_SEC));

    printf("\n---------------------------------------------- Quicksort Randomizado N = 10000 ----------------------------------------------\n");

    time3 = clock();
    RandomQuickSort(vetor3, 0, 9999);
    time3 = clock() - time3;
    printf("Tempo para N = 10000 ordenado: %fs\n", ((float) (time3) / CLOCKS_PER_SEC));

    printf("\n---------------------------------------------- Quicksort Randomizado N = 50000 ----------------------------------------------\n");

    time4 = clock();
    RandomQuickSort(vetor4, 0, 9999);
    time4 = clock() - time4;
    printf("Tempo para N = 50000 ordenado: %fs\n", ((float) (time4) / CLOCKS_PER_SEC));

    printf("\n---------------------------------------------- Quicksort Mediana ----------------------------------------------\n");

    printf("\n---------------------------------------------- Quicksort Mediana N = 100 ----------------------------------------------\n");

    time = clock();
    MedQuickSort(vetor1, 0, 99);
    time = clock() - time;
    printf("Tempo para N = 100 ordenado: %fs\n", ((float) (time) / CLOCKS_PER_SEC));

    printf("\n---------------------------------------------- Quicksort Mediana N = 1000 ----------------------------------------------\n");

    time2 = clock();
    MedQuickSort(vetor2, 0, 999);
    time2 = clock() - time2;
    printf("Tempo para N = 1000 ordenado: %fs\n", ((float) (time2) / CLOCKS_PER_SEC));

    printf("\n---------------------------------------------- Quicksort Mediana N = 10000 ----------------------------------------------\n");

    time3 = clock();
    MedQuickSort(vetor3, 0, 9999);
    time3 = clock() - time3;
    printf("Tempo para N = 10000 ordenado: %fs\n", ((float) (time3) / CLOCKS_PER_SEC));

    printf("\n---------------------------------------------- Quicksort Mediana N = 50000 ----------------------------------------------\n");

    time4 = clock();
    MedQuickSort(vetor4, 0, 49999);
    time4 = clock() - time4;
    printf("Tempo para N = 50000 ordenado: %fs\n", ((float) (time4) / CLOCKS_PER_SEC));

    printf("\n---------------------------------------------- FIM TABELA 02 ----------------------------------------------\n");


    return 0;
}