//
// Created by jvmor on 15/04/2021.
//
#include<stdio.h>
#include<stdlib.h>

void printLine(int n, char fill, char edge){
    printf("%c",edge);
    for (int i = 0; i < n; ++i) {
        printf("%c",fill);
    }
    printf("%c",edge);
}


int main (){
    int n char fill, char edge
    printf("n: ");
    scanf("%d", &n);
    printf("fill: ");
    scanf("%c", &fill);
    printf("edge: ");
    scanf("%c", &edge);
    printLine(n, fill, edge);

    return 0;

}