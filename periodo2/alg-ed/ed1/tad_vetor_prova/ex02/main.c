#include "tad_produto.h"

//struct produto{
//    int codigo;
//    char descricao[50];
//    double ultimos_precos[4]; // armazena no máximo os últimos 4 preços praticados
//    int qtd_precos;           // quantidade de preços armazenados no vetor ultimos_precos
//};

int main(){
    printf("Testes\n");

    Produto *produto = produto_criar(1, "Mouse Logitech", 90.50);
    char saida[50];
    printf("%d %.2f %d\n", produto_codigo(produto), produto_preco(produto), produto_descricao(produto, saida));
    produto_destruir(&produto);
    Produto *produto2 = produto_criar(1, "Mouse Logitech", 100);
    printf("%.2f ", produto_preco(produto2));
    printf("%.2f ", produto_preco(produto2));
    produto_altera_preco(produto2, 200);
    printf("%.2f ", produto_preco(produto2));
    printf("%.2f ", produto_media_preco(produto2));
    produto_altera_preco(produto2, 300);
    printf("%.2f ", produto_preco(produto2));
    printf("%.2f ", produto_media_preco(produto2));
    produto_altera_preco(produto2, 400);
    printf("%.2f ", produto_preco(produto2));
    printf("%.2f ", produto_media_preco(produto2));
    produto_altera_preco(produto2, 500);
    printf("%.2f ", produto_preco(produto2));
    printf("%.2f\n", produto_media_preco(produto2));


//    1 90.50 Mouse Logitech
//    [5] 100.0 200.0 300.0 400.0 500.0
//
//    (01) {1, Mouse Logitec, 90.50} true
//    100.00 100.00 200.00 150.00 300.00 200.00 400.00 250.00 500.00 350.00
//    add 1 media, add 1 media add 1 media
//


    Produto *produto3 = produto_criar(3, "Pendrive sandisk", 55.55);
    char saida2[50];
    printf("%d %.2f %d\n", produto_codigo(produto3), produto_preco(produto3), produto_descricao(produto3, saida2));
    produto_destruir(&produto3);
    Produto *produto4 = produto_criar(1, "Mouse Logitech", 100);
    printf("%.2f ", produto_preco(produto4));
    printf("%.2f ", produto_preco(produto4));
    produto_altera_preco(produto4, 200);
    printf("%.2f ", produto_preco(produto4));
    printf("%.2f ", produto_media_preco(produto4));
    produto_altera_preco(produto4, 300);
    printf("%.2f ", produto_preco(produto4));
    printf("%.2f\n", produto_media_preco(produto4));

//
//
//    3 55.55 Pendrive Sandisk
//    [3] 100.0 200.0 300.0c
//
//    (01) {3, Pendrive Sandis, 55.55} true
//    100.00 100.00 200.00 150.00 300.00 200.00
    return 0;
}