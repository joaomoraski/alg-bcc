//
// Created by moraski on 29/04/2021.
//
// utilizar após scanf ou getchar
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Clear buffer
void clearBuffer() {
    while (getchar() != '\n');
}

// Exercicio 01 - Lista 08
void printString(){
    char str[10000];
    printf("Informe a string: ");
    scanf("%s", str);
    clearBuffer();
    printf("A String informada é: %s\n", str);
}

// Exercicio 02 - Lista 08
void printStringReversed(char str[]){
    for (int i = strlen(str); i >= 0; --i) {
        printf("%c", str[i]);
    }
    printf("\n");
}

// Exercicio 03 - Lista 08
void printStringHyphenized(char str[], char separator){
    for (int i = 0; i < strlen(str); ++i) {
        if (strlen(str) - i == 1){
            separator = '\0';
        }
        printf("%c %c ", str[i], separator);

    }
    printf("\n");
}

// Exercicio 04 - Lista 08
void stringReport(char str[]){
    int l = 0; int d = 0; int o = 0;
    for (int i = 0; i < strlen(str) ; i++){
        int index = str[i];

        if((index >= 'a' && index <= 'z') || (index >= 'A' && index <= 'Z')){
            l++;
        } else if(index >= '0' && index <= '9'){
            d++;
        } else{
            o++;
        }
    }
    printf("Letras: %d\nDigitos: %d\nOutros: %d\n", l, d, o);
}

// Exercicio 05 - Lista 08
void stringToUpper(char str[]){
    for (int i = 0; str[i] != '\0'; i++){
        int c = str[i];
        if (c >= 'a' && c <= 'z'){
            c -= 32;
        }
    }
}

// Exercicio 06 - Lista 08
int stringCompareNoCase(char s1[], char s2[]){
    for (int i = 0; s1[i] != '\0'; i++){
        int c = s1[i];

        if (c >= 'a' && c <= 'z'){
            c -= 32;
            s1[i] = c;
        }
    }
    for (int i = 0; s2[i] != '\0'; i++){
        int c = s2[i];
        if (c >= 'a' && c <= 'z'){
            c -= 32;
            s2[i] = c;
        }
    }
    return strcmp(s1,s2);
}

// Exercicio 07 - Lista 08
int countWords(char str[]){
    int count = 0;
    for (int i = 0; i < strlen(str); ++i) {
        if (count == 0 && str[i] != '\0'){
            count++;
        }
        if (str[i] == ' '){
            count++;
        }
    }
    return count;
}

// Exercicio 08 - Lista 08
int countWordsPlus(char str[]){
    int w = 0;
    for (int i = 0; i < strlen(str); ++i) {
        if (str[i] == ' '){
            i++;
        }
        if (str[i] != ' ' && str[i] != '\t'){
            w++;
            while (str[i] != ' '){
                i++;
            }
        }
    }
    return w;
}

// Exercicio 09 - Lista 08
void stringCapitalize(char str[]){
    char c = ' ';
    for (int i = 0; i < strlen(str); ++i) {
        if (c == ' ' && str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] -32;
        }
        if (c != ' ' && str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] +32;
        }
        c = str[i];
    }
    printf("\n");
}

// Exercicio 10 - Lista 08
int stringCompare(char str1[], char str2[]) {
    int i = 0, flag = 0;
    while(str1[i] != '\0' && str2[i] != '\0') {
        if(str1[i] != str2[i]) {
            flag = 1;
            break;
        }
        i++;
    }
    if(flag == 0 && str1[i] == '\0' && str2[i] == '\0')
        return 1;
    else
        return 0;
}

// Exercicio 11 - Lista 08
void stringTrim(char str[]){
    char strTrim[strlen(str)];
    int first = 0; int last = 0;
    for (int i = 0; i < strlen(str); ++i) {
        for (int j = strlen(str); j > 0 ; --j) {
            if (str[i] != ' ') {
                last = i;
                break;
            }
        }if (str[i] != ' '){
            first = i; break;
        }
    }
    int j = 0;
    for (int i = 0; i < strlen(str); ++i) {
        while(str[i] == ' '  && i < first ){
            if (i > first){
                break;
            }
            i++;
        }
        while (str[i] == ' ' && i < last){
            i++;
        }
        strTrim[j] = str[i];
        j++;
    }
    strcpy(str, strTrim);

}

// Exercicio 12 - Lista 08
int stringContains(char str[], char sub[]){
    int w = 0;
    for (int i = 0; i < strlen(str); ++i) {
        if (str[i] == sub[w] && str[i] != ' '){
            while (str[i+w] == sub[w]){
                w++;
            }
            if (w != strlen(sub)){
                w = 0;
            }
        }
    }
    if (w == strlen(sub)){
        return 1;
    }else{
        return 0;
    }
}

// Exercicio 13 - Lista 08
void cutString(char str[], char target[]){
    int w = 0;
    for (int i = 0; i < strlen(str); ++i) {
        if (str[i] == target[w] && str[i] != ' '){
            while (str[i+w] == target[w]){
                w++;
            }
            if (w == strlen(target)){
                str[i+w] = '\0';
            } else{
                w = 0;
            }
        }
    }
    printf("\n");
}

// Exercicio 14 - Lista 08
void removeSubstring(char str[], char sub[]){
    int w = 0;
    for (int i = 0; i < strlen(str); ++i) {
        while (1){
            if (sub[w] == str[i]){
                w++;
                i++;
            } else{
                break;
            }
        }
        i = i-w;
        if (w == strlen(sub)){
            for (int j = i; j < i+w; ++j) {
                str[j] = ' ';
            }
            i = 0; w = 0;
        } else{
            w = 0;
        }
    }
    printf("\n");
}

// Exercicio 15 - Lista 08
void intToString(int number, char converted[]){
    int i = 0; char rev;
    while (number != 0){
        converted[i] = (number%10) + 48;
        number/=10;
        i++;
    }
    for (int j = 0; j < strlen(converted); ++j) {
        if (converted[j] < 48 || converted[j] > 57 ){
            converted[j] = ' ';
        }
    }
    int tam = strlen(converted);
    for (int j = 0; j < tam / 2; ++j) {
        rev = converted[j];
        converted[j] = converted[tam-1-j];
        converted[tam-1-j] = rev;
    }
}


// Exercicio 16 - Lista 08
int stringToInt( char str[]){
    int lenStr = strlen(str); int sum = 0;
    for (int j = 0; j < lenStr; ++j) {
        int pot= 1;
        for(int i = lenStr-j-1; i>0; --i) {
            pot = pot * 10;
        }
        sum+= ((str[j]-48) * pot) ;
    }
    return sum;
}

// Execicio 17 - Lista 08
void lettersFrequency(char str[]){
    int i; int cont = 0;
    for(i=0; str[i] != '\0';i++){
        int n = 0;
        for(int j=0; str[j] != '\0';j++){
            if(str[i] ==  str[j])
                n = n+1;
        }
        printf("%c: %d \n",str[i],n);
    }

}

int main (){

    return 0;
}



