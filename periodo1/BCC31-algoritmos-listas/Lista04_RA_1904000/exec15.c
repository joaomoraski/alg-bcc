#include <stdio.h>

int main(){

    int number = 0;

    int candidato1 = 0;
    int candidato2 = 0;
    int candidato3 = 0;
    int candidato4 = 0;
    int nulo = 0;
    int branco = 0;

    while (1){
        printf("Informe o número do voto: ");
        scanf("%d", &number);
        if (number != 0){
            switch (number) {
                case 1:
                    ++candidato1;
                    break;
                case 2:
                    ++candidato2;
                    break;
                case 3:
                    ++candidato3;
                    break;
                case 4:
                    ++candidato4;
                    break;
                case 5:
                    ++nulo;
                    break;
                case 6:
                    ++branco;
                    break;
            }
        } else{
            break;
        }
    }
    if (candidato1 >= candidato2){
        if (candidato1 > candidato3){
            if (candidato1 > candidato4){
                candidato1+=branco;
            } else{
                candidato4 += branco;
            }
        } else if (candidato3 > candidato4){
            candidato3+=branco;
        } else{
            candidato4+=branco;
        }
    } else{
        candidato2 += branco;
    }

    printf("Candidato 1: %d\nCandidato 2: %d\nCandidato 3: %d\nCandidato 4: %d\nNulos: %d\nBrancos: %d\n", candidato1, candidato2, candidato3, candidato4, nulo, branco);



    return 0;
}