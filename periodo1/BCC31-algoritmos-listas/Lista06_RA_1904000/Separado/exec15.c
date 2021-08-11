//
// Created by jvmor on 15/04/2021.
//
#include<stdio.h>
#include<stdlib.h>

void printBoxProgressive(int height, int width, int max){
    int numero = 0;
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            if (numero >= max){
                numero = 0;
            }
            printf("%d", numero);
            ++numero;
        }
        printf("\n");
    }
    printf("\n");

}
void printBoxProgressive2(int height, int width, int max){
    int numero = 0;
    int j = 0;
    int linha = 0;
    for (int i = 0; i < width*height; ++i) {
        if (linha < height){
            if (numero >= max){
                numero = 0;
            }
            printf("%d", numero);
            ++j;
            ++numero;
            if (j >= width){
                printf("\n");
                ++linha;
                j = 0;
            }
        }

    }
    printf("\n");
}

int main (){
    int height;
    int width;
    int max;
    printf("height: ");
    scanf("%d", &height);
    printf("width: ");
    scanf("%d", &width);
    printf("max: ");
    scanf("%d", &max);

    printBoxProgressive(height, width, max);
    printBoxProgressive2(height, width, max);

    return 0;
}