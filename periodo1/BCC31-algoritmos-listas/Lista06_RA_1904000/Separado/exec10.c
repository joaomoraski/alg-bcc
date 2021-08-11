//
// Created by jvmor on 15/04/2021.
//
#include<stdio.h>
#include<stdlib.h>

void intToRoman(int num){
    int rem;
    while(num != 0){
        if(num > 100 ||num <= 0){
            printf("INVÁLIDO");
            break;
        }

        else if (num == 100){
            printf("C");
            num -= 100;
        }

        else if (num >= 90){
            printf("XC");
            num -= 90;
        }

        else if (num >= 50){
            printf("L");
            num -= 50;
        }

        else if (num >= 40){
            printf("XL");
            num -= 40;
        }

        else if (num >= 10){
            printf("X");
            num -= 10;
        }

        else if (num >= 9){
            printf("IX");
            num -= 9;
        }

        else if (num >= 5){
            printf("V");
            num -= 5;
        }

        else if (num >= 4){
            printf("IV");
            num -= 4;
        }

        else if (num >= 1){
            printf("I");
            num -= 1;
        }
    }
}

int main (){
    int n;
    printf("Informe o número: ");
    scanf("%d", &n);

    intToRoman(n);

    return 0;
}