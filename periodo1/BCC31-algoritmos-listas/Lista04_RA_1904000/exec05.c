#include <stdio.h>

int main(){

    printf("\nDEC\tOCT\tHEX\tCHR\n");
    for (int i = 33; i < 127; ++i) {
        printf("%d\t%o\t%x\t%c\n", i,i,i,i);
    }

    return 0;

}