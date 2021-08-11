//
// Created by jvmor on 15/04/2021.
//
#include<stdio.h>
#include<stdlib.h>

void printBoxFilled(int height, int width, char ch){
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            printf("%c", ch);
        }
        printf("\n");
    }

}

int main (){
    char ch;
    int height;
    int width;
    printf("Char: ");
    scanf("%c", &ch);
    printf("height: ");
    scanf("%d", &height);
    printf("width: ");
    scanf("%d", &width);


    printBoxFilled(height, width, ch);

    return 0;
}