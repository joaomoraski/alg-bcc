#include "tabelahash_ea.h"
#include <stdlib.h>

THEA* THEA_Criar(int m) {
    THEA *nova = malloc(sizeof(THEA));
    nova->m = m;
    nova->n = 0;
    nova->t = malloc(sizeof(ELEM) *m);
    for (int i = 0; i < m; i++) {
        nova->t[i].estado = E_LIVRE;
    }
    return nova;
}

int THEA_Hash(THEA* TH, int chave, int k){
    return ((chave % TH->m) +k) % TH->m;
}
int THEA_Inserir(THEA *TH, int chave, int valor) {
    int k = 0;
    int h = THEA_Buscar(TH,chave);
    if (h<0) {
        h = THEA_Hash(TH, chave, k);
        int h_inicial = h;
        while (TH->t[h].estado == E_OCUPADO) {
            if (TH->t[h].chave == chave) {
                TH->n--;
                break;
            }
            k++;
            h = THEA_Hash(TH, chave, k);
            if (h == h_inicial) {
                return -1;
            }
        }
    }

    TH->t[h].estado = E_OCUPADO;
    TH->t[h].chave = chave;
    TH->t[h].valor = valor;
    TH->n++;
    return h;
}
int THEA_Buscar(THEA *TH, int chave);
void THEA_Remover(THEA* TH, int chave);