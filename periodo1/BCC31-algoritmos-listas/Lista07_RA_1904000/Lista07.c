//
// Created by moraski on 22/04/2021.
//
#include<stdio.h>
#include<math.h>


void printVetor(int n, int vet[n]){
    for (int i = 0; i <= n-1; i++) {
        printf("%d, ", vet[i]);
    }
    printf("\n");

}

// Exercicio 01 - Lista 07
void printReverse(int n, int vet[n]){
    for (int i = n-1; i >= 0; i--) {
        printf("%d, ", vet[i]);
    }
    printf("\n");

}

// Exercicio 02 - Lista 07
void printEven(int n, int vet[n]){
    for (int i = 0; i <= n-1; i++) {
        if (vet[i]%2 == 0){
            printf("%d, ", vet[i]);
        }
    }
    printf("\n");

}

// Exercicio 03 - Lista 07
void setPositive(int n, int vet[n]){
    for (int i = 0; i <= n-1; i++) {
        if (vet[i] < 0){
            vet[i]*= -1;
        }
        printf("%d, ", vet[i]);
    }
    printf("\n");

}

// Exercicio 04 - Lista 07
int sumValues(int n, int vet[n]){
    int soma = 0;
    for (int i = 0; i < n-1; i++) {
        soma+=vet[i];
    }
    return soma/n;
}

// Exercicio 05 - Lista 07
int find(int n, int vet[n], int elem){
    for (int i = 0; i <= n-1; ++i) {
        if (vet[i] == elem){
            return vet[i];
        }
    }
    return -1;
}


// Exercicio 06 - Lista 07
void findMinMax(int n, int vet[n]){
    int min = vet[0];
    int max = vet[0];
    for (int i = 0; i <= n-1; ++i) {
        if (vet[i] > max){
            max = vet[i];
        }
        if (vet[i] < min){
            min = vet[i];
        }
    }
    printf("Menor: %d\n", min);
    printf("Maior: %d\n", max);
}

// Exercicio 07 - Lista 07
void replaceAll(int n, int vet[n], int elem){
    for (int i = 0; i <= n-1; ++i) {
        if (vet[i] == elem){
            vet[i] = -1;
        }
        printf("%d, ", vet[i]);
    }
    printf("\n");

}

// Exercicio 08- Lista 07
void reverse(int n, int vet[n]){
    for (int i = 0; i <= n-1; ++i) {
        vet[i]*= -1;
        printf("%d ", vet[i]);
    }
    printf("\n");

}

// Exercicio 09 - Lista 07
void readVector(int n, int vet[n]){
    for (int i = 0; i <= n-1; ++i) {
        printf("Informe um número: ");
        scanf("%d", &vet[i]);
    }
    for (int i = 0; i <= n - 1; ++i) {
        printf("%d, ", vet[i]);
    }
    printf("\n");

}

// Exercicio 10 - Lista 07
void reverseInput(int n, int vet[n]){
    for (int i = 0; i <= n-1; ++i) {
        printf("Informe um número: ");
        scanf("%d", &vet[i]);
    }
    for (int i = n-1; i >= 0; i--) {
        printf("%d, ", vet[i]);
    }
    printf("\n");
}

// Exercicio 11 - Lista 07
void countElements(int n, int vet[n]){
    int vetCount[n];
    for (int i = 0; i <= n-1; ++i) {
        vetCount[i] = 0;
    }
    for (int i = 0; i <= n-1; ++i) {
        for (int j = 0; j <= n-1; ++j) {
            if (vet[i] == vet[j]){
                vetCount[i] += 1;
            }
        }
    }
    for (int i = 0; i <= n - 1; ++i) {
        printf("O valor %d, esta contido %d vezes no vetor\n", vet[i], vetCount[i]);
    }
}

// Exercicio 12 - Lista 07
void minBills(int x){
    int bills[5] = {1,5,10,50,100};// tabela de tipos de cédulas
    int count[5] = {0,0,0,0,0}; // conta as ocorrências de cada tipos de cédula
    for (int i = 4; i >= 0; --i) {
        int quantNotas = (int) x/bills[i];
        if (quantNotas >= 1){
            count[i] = quantNotas;
            x-= bills[i] * quantNotas;
        }

    }
    for (int i = 4; i >= 0; --i) {
        if (count[i] != 0){
            printf("%d cédulas de R$%d,00\n", count[i], bills[i]);
        }
    }
    printf("\n");
}

// Exercicio 13 - Lista 07
void distances(int n, int points[n]){
    for (int i = 0; i < n - 1; ++i) {
        int x1, x2, y1, y2;
        x1 = points[i]; ++i;
        y1 = points[i]; ++i;
        x2 = points[i]; ++i;
        y2 = points[i];
//        printf("A distância é: %lf\n", sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)));
    }
}

// Exercicio 14 - Lista 07
void histogram(int days[]){
    char vetLetra[7] = {'D', 'S', 'T', 'Q', 'Q', 'S', 'S'};
    for (int i = 0; i < 6; ++i) {
        printf("%c: ", vetLetra[i]);
        for (int j = 0; j < days[i]; ++j) {
            printf(">");
        }
        printf("\n");
    }
}

// Exercicio 15 - Lista 07
void tempReport(int days[]){
    float media = 0;
    for (int i = 0; i < 6; ++i) {
        media+=days[i];
    }
    printf("Media: %2.f\n", media/6);
    findMinMax(7, days);
    histogram(days);
}

// Exercicio 16 - Lista 07
void defrag(int n, int vet[n]){
    int vetInt[n]; int posiLivre[n];
    int j = 0; int k = 0;
    for (int i = 0; i <= n - 1; ++i) {
        if (vet[i] == -1){
            posiLivre[j] = vet[i];
            ++j;
        }else{
            vetInt[k] = vet[i];
            ++k;
        }
    }
    for (int i = 0; i < k; ++i) {
        vet[i] = vetInt[i];
    }
    int l =0 ;
    for (int i = k; i < n; ++i) {
        vet[i] = posiLivre[l];
        ++l;
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

// Exercicio 17 - Lista 07
void vecConcat(int n1, int v1[n1], int n2, int v2[n2], int v3[]){
    int total = n1+n2;
    for (int i = 0; i < n1; ++i) {
        v3[i] = v1[i];
    }
    int j = 0;
    for (int i = n1; i < total; ++i) {
        v3[i] = v2[j];
        ++j;
    }
    printf("Vetor 3: ");
    for (int i = 0; i < total; ++i) {
        printf("%d, ", v3[i]);
    }
    printf("\n");
}

// Exercicio 18 - Lista 07
void vecUnion(int n1, int v1[n1], int n2, int v2[n2], int v3[]){
    int cont = 0;
    for (int i = 0; i < n1; i++) {
        v3[i] = v1[i];
    }
    for (int j = n1; j < n2; j++) {
        if (v3[j] != v2[cont]) {
            v3[j] = v2[cont];
            cont++;
        }
    }
    for (int x = 0; x < n1+n2; x++) {
        printf("%d, ", v3[x]);
    }

//    for(int i=0; i<3; i++){
//        printf("%d ",v3[i]);
//    }
    printf("\n");
}

// Exercicio 19 - Lista 07
void vecIntersection(int n1, int v1[n1], int n2, int v2[n2], int v3[]){
    int cont = 0;
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(v1[i]==v2[j]){
                v3[cont] = v1[i];
                cont += 1;
                break;
            }
        }
    }
    for(int i=0; i<3; i++){
        printf("%d ",v3[i]);
    }
    printf("\n");
}


int main (){

    return 0;
}



