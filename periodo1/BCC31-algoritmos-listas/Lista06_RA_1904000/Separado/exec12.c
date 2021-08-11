//
// Created by jvmor on 15/04/2021.
//
#include<stdio.h>
#include<stdlib.h>

void printBoxCustom(int height, int width, char fill, char edge){
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            if(i==0 && j==0 ){
                printf("%c ",edge);
            }else if(i==0){
                if(j!=width-1){
                    printf("%c ",'-');
                }else if(j==width-1){
                    printf("%c ",edge);
                }
            }else if(j==0){
                if(i!=height-1){
                    printf("%c ",'|');
                }else{
                    printf("%c ",edge);
                }
            }else if(j==width-1){
                if(i!=height-1){
                    printf("%c ",'|');
                }else{
                    printf("%c ",edge);
                }
            }else if(i==height-1){
                if(j!=width-1){
                    printf("%c ",'-');
                }
            }
            else{
                printf("%c ",fill);
            }
        }
        printf("\n");
    }

}

int main (){
    int height, int width, char fill, char edge
    printf("height: ");
    scanf("%d", &height);
    printf("width: ");
    scanf("%d", &width);
    printf("fill: ");
    scanf("%c", &fill);
    printf("edge: ");
    scanf("%c", &edge);
    printBoxCustom(height, width, fill, edge);

    return 0;
}