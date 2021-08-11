//
// Created by moraski on 17/06/2021.
//
#include <stdio.h>


int main(){

    int length, div;
    scanf("%d", &length);
    if (length < 1 || length > 100) return 0;

    int values[length];
    for (int i = 0; i < length; ++i) {
        scanf("%d", &values[i]);
        if (values[i] <= 1 || values[i] > 107) return 0;
    }

    for (int i = 0; i < length; ++i) {
        if (values[i] != 2 && values[i]%2 == 0) {
            printf("%d nao eh primo\n", values[i]); continue;
        }
        for (int j = 1; j <= values[i]; ++j) {
            if (values[i] % j == 0) div++;
        }
        if (div > 2) printf("%d nao eh primo\n", values[i]);
        else printf("%d eh primo\n", values[i]);
        div = 0;
    }

    return 0;

}