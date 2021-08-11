//
// Created by jvmor on 15/04/2021.
//
#include<stdio.h>
#include<stdlib.h>

int main(){

    return 0;
}

// Exercicio 1
int isPrime(int n){
    int primo = 1;

    for (int i = 2; i < n; ++i) {
        if (n%i == 0){
            primo = 0;
        }
    }

    return primo;
}
// Exercicio 2
void printRandom(int n, int max){

    for (int i = 0; i < n; ++i) {
        printf("%d ", rand() % max+1);
    }
    printf("\n");

}
// Exercicio 3
void printRandom2(int n, int max){

    for (int i = 0; i < n; ++i) {
        printf("%d ", (rand() % (max*2)+1) + (-max));
    }
    printf("\n");

}

// Exercicio 4
int summation(int n){
    int soma = 0;
    for (int i = 0; i <= n; ++i) {
        soma+=i;
    }
    printf("Soma dos números: %d\n", soma);

}
// Exercicio 5
int factorialSum(int n){
    int soma = 0;
    int fatorial = 1;
    for (int i = 1; i <= n; ++i) {
        fatorial*=i;
        soma+=fatorial;
    }
    printf("Soma dos fatoriais do número: %d\n", soma);

}
// Exercicio 6
int factorialSum2(int n){
    int sum = 0;
    int fat = 1;
    for(int i=1; i<=n; i = i+1){
        fat *=i;
        sum +=fat;
    }
    printf("%d",sum);
    return sum;
}
// Exercicio 7
int isPerfectNumber(int n){
    int soma = 0;
    for (int i = 1; i < n; ++i) {
        if (n%i == 0){
            soma+=i;
        }
    }
    if (soma == n){
        return 1;
    } else{
        return 0;
    }
}
// Exercicio 8
void numbersInFull10(int n){
    if (n < -10 || n > 10){
        printf("Número fora do alcance de -10 a 10\n");
    }
    if (n < 0){
        printf("Menos ");
        n*=-1;
    }
    switch (n) {
        case 0:
            printf("Zero");
            break;
        case 1:
            printf("Um");
            break;
        case 2:
            printf("Dois");
            break;
        case 3:
            printf("Três");
            break;
        case 4:
            printf("Quatro");
            break;
        case 5:
            printf("Cinco");
            break;
        case 6:
            printf("Seis");
            break;
        case 7:
            printf("Sete");
            break;
        case 8:
            printf("Oito");
            break;
        case 9:
            printf("Nove");
            break;
        case 10:
            printf("Dez");
            break;
    }
    printf("\n");
}
// Exercicio 9
void numbersInFull100(int n){
    if (n < -100 || n > 100){
        printf("Número fora do alcance de -10 a 10\n");
    } else{
        if (n < 0){
            printf("Menos ");
            n*=-1;
        }
        if (n == 0){
            printf("Zero");
        }
        int nDez = n;
        if (n >= 10 && n < 20) {
            if (nDez == 11){
                printf("Onze");
            }
            if (nDez == 12){
                printf("Doze");
            }
            if (nDez == 13){
                printf("Treze");
            }
            if (nDez == 14){
                printf("Quatorze");
            }
            if (nDez == 15){
                printf("Quinze");
            }
            if (nDez == 16){
                printf("Dezesseis");
            }
            if (nDez == 17){
                printf("Dezessete");
            }
            if (nDez == 18){
                printf("Dezoito");
            }
            if (nDez == 19){
                printf("Dezenove");
            }
        } else if (n >= 20 && n < 30) {
            printf("Vinte ");
            n%=10;
        } else if (n >= 30 && n < 40) {
            printf("Trinta ");
            n%=10;
        } else if (n >= 40 && n < 50) {
            printf("Quarenta ");
            n%=10;
        } else if (n >= 50 && n < 60) {
            printf("Cinquenta ");
            n%=10;
        } else if (n >= 60 && n < 70) {
            printf("Sessenta ");
            n%=10;
        } else if (n >= 70 && n < 80) {
            printf("Setenta ");
            n%=10;
        } else if (n >= 80 && n < 90) {
            printf("Oitenta ");
            n%=10;
        } else if (n >= 90 && n < 100) {
            printf("Noventa ");
            n%=10;
        } else if (n == 100){
            printf("Cem");
            nDez=0;
        }
        if (nDez > 20){
            printf("e ");
        }
        switch (n) {
            case 1:
                printf("Um");
                break;
            case 2:
                printf("Dois");
                break;
            case 3:
                printf("Três");
                break;
            case 4:
                printf("Quatro");
                break;
            case 5:
                printf("Cinco");
                break;
            case 6:
                printf("Seis");
                break;
            case 7:
                printf("Sete");
                break;
            case 8:
                printf("Oito");
                break;
            case 9:
                printf("Nove");
                break;
            case 10:
                printf("Dez");
                break;
        }
        printf("\n");
    }
}
// Exercicio 10
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
// Exercicio 11
void printLine(int n, char fill, char edge){
    printf("%c",edge);
    for (int i = 0; i < n; ++i) {
        printf("%c",fill);
    }
    printf("%c",edge);
}
// Exercicio 12
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
// Exercicio 13
void printBoxFilled(int height, int width, char ch){
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            printf("%c", ch);
        }
        printf("\n");
    }

}
// Exercicio 14
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
// Exercicio 15
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
// Exercicio 16
void batchReport(int *min, int *max){
    int num;
    int maior= -2147483647 - 1;
    int menor= 2147483647;
    printf("Digite um número: ");
    while(1){
        scanf("%d", &num);
        if(num==0){
            break;
        }else{
            if(num>=maior){
                maior = num;
                *max = maior;

            }
            if(num<=menor){
                menor = num;
                *min = menor;

            }
            printf("Digite outro número: ");
        }


    }
}
// Exercicio 17
void randReport(int n, int* evenSum, int* primes){
    if (n == 0) {
        printf("Não pode ser 0 o limite");
    }
    int randNum;
    int somaPar = 0;
    int primos = 0;
    for (int i = 0; i < n; ++i) {
        randNum = rand() % n+1;
        if (randNum%2 == 0){
            somaPar+= randNum;
        }
        for (int j = 2; j < randNum; ++j) {
            if (randNum%j == 0){
                ++primos;
            }
        }
        printf("%d ", randNum);
    }
    *evenSum = somaPar;
    *primes = primos;
    printf("\n");
}

