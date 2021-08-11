#include "tad_estoque.h"



int main(){
    Estoque* e = estoque_criar("estoque 01");
    
    int quantidade;
    scanf("[%d] ", &quantidade);
    for (int i=0; i < quantidade; i++){
        int cod;
        char desc[100];
        float preco;
        scanf("%d %f %s", &cod, &preco, desc);
        Produto* p = produto_criar(cod, desc, preco);
        estoque_anexar(e, p);
    }
    estoque_imprimir(e);
    printf("\n");

    // Teste estoque_remover_elemento, estoque_imprimir
    scanf("[%d] ", &quantidade);
    for (int i=0; i < quantidade; i++){
        char desc[100];
        scanf("%s", desc);
        estoque_remover_elemento(e, desc);
    }
    estoque_imprimir(e);
    
    estoque_destruir(&e);
    
    return 0;
}