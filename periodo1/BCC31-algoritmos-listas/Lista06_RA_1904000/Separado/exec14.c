//
// Created by jvmor on 15/04/2021.
//
#include<stdio.h>
#include<stdlib.h>

void printBox01(int height, int width){
    int numero = 0;
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            printf("%d", numero);
            printf("%d", numero+1);
            ++j;
        }
        printf("\n");
    }
    printf("\n");

}
void printBox02(int height, int width){
    int numero = 0;
    int j = 0;
    int linha = 0;
    for (int i = 0; i < width*height; ++i) {
        if (linha < height){
            printf("%d", numero);
            ++j;
            printf("%d", numero+1);
            ++j;
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
    printf("height: ");
    scanf("%d", &height);
    printf("width: ");
    scanf("%d", &width);


    printBox01(height, width);
    printBox02(height, width);

    return 0;
}