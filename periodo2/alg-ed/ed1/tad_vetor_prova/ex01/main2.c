
#include "tad_vetor.h"

//Vetor* lerVetor(){
//    int tam;
//    scanf("[%d] ", &tam);
//    printf("%d", tam);
//    Vetor* v = vet_criar(tam);
//    for (int i=0; i < tam; i++){
//        int n;
//        scanf("%d ", &n);
//        vet_anexar(v, n);
//    }
//    return v;
//}
struct vetor {
    int *vet;
    int tam;
    int qtd;
};

void teste01() {

    Vetor* v1 = vet_criar(4);
        vet_anexar(v1, 1);
    vet_anexar(v1, 2);
    vet_anexar(v1, 3);
    vet_anexar(v1, 4);


    Vetor* v2 = vet_criar(6);
    vet_anexar(v2, 5);
    vet_anexar(v2, 6);
    vet_anexar(v2, 7);
    vet_anexar(v2, 8);
    vet_anexar(v2, 9);
    vet_anexar(v2, 10);

    Vetor *v3 = vet_concatena(v1,v2);
    vet_imprimir(v3);
    vet_desalocar(&v1);
    vet_desalocar(&v2);
    vet_desalocar(&v3);
    printf("\n");


    Vetor* vA1 = vet_criar(4);
    vet_anexar(vA1, 1);
    vet_anexar(vA1, 2);
    vet_anexar(vA1, 3);
    vet_anexar(vA1, 4);


    Vetor* vB1 = vet_criar(4);
    vet_anexar(vB1, 5);
    vet_anexar(vB1, 6);
    vet_anexar(vB1, 7);
    vet_anexar(vB1, 8);

    Vetor *vR1 = vet_concatena(vA1,vB1);
    vet_imprimir(vR1);
    vet_desalocar(&vA1);
    vet_desalocar(&vB1);
    vet_desalocar(&vR1);
    printf("\n");

//    --------------------------------------------------------------------------------------

    Vetor* vA2 = vet_criar(2);
    vet_anexar(vA2, 5);
    vet_anexar(vA2, 4);


    Vetor* vB2 = vet_criar(3);
    vet_anexar(vB2, 3);
    vet_anexar(vB2, 2);
    vet_anexar(vB2, 1);

    Vetor *vR2 = vet_concatena(vA2,vB2);
    vet_imprimir(vR2);
    vet_desalocar(&vA2);
    vet_desalocar(&vB2);
    vet_desalocar(&vR2);
    printf("\n");

    //    --------------------------------------------------------------------------------------

    Vetor* vA3 = vet_criar(2);
    vet_anexar(vA3, 5);
    vet_anexar(vA3, 6);


    Vetor* vB3 = vet_criar(4);
    vet_anexar(vB3, 1);
    vet_anexar(vB3, 2);
    vet_anexar(vB3, 3);
    vet_anexar(vB3, 4);

    Vetor *vR3 = vet_concatena(vA3,vB3);
    vet_imprimir(vR3);
    vet_desalocar(&vA3);
    vet_desalocar(&vB3);
    vet_desalocar(&vR3);
    printf("\n");



    //    --------------------------------------------------------------------------------------

    Vetor* vA4 = vet_criar(0);

    Vetor* vB4 = vet_criar(4);
    vet_anexar(vB4, 1);
    vet_anexar(vB4, 2);
    vet_anexar(vB4, 3);
    vet_anexar(vB4, 4);

    Vetor *vR4 = vet_concatena(vA4,vB4);
    vet_imprimir(vR4);
    vet_desalocar(&vA4);
    vet_desalocar(&vB4);
    vet_desalocar(&vR4);
    printf("\n");


    //    --------------------------------------------------------------------------------------

    Vetor* vA5 = vet_criar(4);
    vet_anexar(vA5, 1);
    vet_anexar(vA5, 2);
    vet_anexar(vA5, 3);
    vet_anexar(vA5, 4);

    Vetor* vB5 = vet_criar(0);

    Vetor *vR5 = vet_concatena(vA5,vB5);
    vet_imprimir(vR5);
    vet_desalocar(&vA5);
    vet_desalocar(&vB5);
    vet_desalocar(&vR5);
    printf("\n");

//    Vetor* v3 = vet_criar(5);
//    vet_anexar(v2, 20);
//    vet_anexar(v2, 40);
//    vet_anexar(v2, 60);
//    vet_anexar(v2, 80);
//    vet_anexar(v2, 100);
//
//    Vetor* v4 = vet_criar(5);
//    vet_anexar(v2, 10);
//    vet_anexar(v2, 30);
//    vet_anexar(v2, 50);
//    vet_anexar(v2, 70);
//    vet_anexar(v2, 90);





// Leitura do primeiro vetor
//    Vetor* v1 = vet_criar(3);
//    vet_anexar(v1, 1);
//    vet_anexar(v1, 2);
//    vet_anexar(v1, 3);
//
//    Vetor* v2 = vet_criar(3);
//    vet_anexar(v2, 4);
//    vet_anexar(v2, 5);
//    vet_anexar(v2, 6);
//    vet_anexar(v2, 7);
//
//    Vetor* v3 = vet_concatena(v1,v2);
//    vet_imprimir(v3);  // [1,2,3,4,5,6]
}

//void teste02(){
//    Vetor* v1 = lerVetor();
//    Vetor* v2 = lerVetor();
//    Vetor* v3 = vet_intercala(v1, v2);
//    vet_imprimir(v3);
//
//    vet_desalocar(&v1);
//    vet_desalocar(&v2);
//    vet_desalocar(&v3);
//    scanf("\n");
//    printf("\n");
//}


int main() {

    teste01();
//    teste02();
}
