#include "lista.h"


/*------------------------------------------------
Especificação dos dados
-------------------------------------------------*/
typedef struct no{
	TipoElemento dado;
	struct no    *ant;
	struct no    *prox;
}No;

struct lista{
	No *inicio;
	No *fim;
	int qtde;
};


/*------------------------------------------------
Implementação das funções
-------------------------------------------------*/

Lista* lista_criar();
void lista_destruir(Lista** endereco);

bool lista_anexar(Lista* l, TipoElemento elemento);
bool lista_inserir(Lista* l, TipoElemento elemento, int posicao);

bool lista_removerPosicao(Lista* l, int posicao, TipoElemento* endereco);
int lista_removerElemento(Lista* l, TipoElemento elemento);

bool lista_substituir(Lista* l, int posicao, TipoElemento novoElemento);
int lista_posicao(Lista* l, TipoElemento elemento);
bool lista_buscar(Lista* l, int posicao, TipoElemento* endereco);

int lista_tamanho(Lista* l);
bool lista_vazia(Lista* l);
bool lista_toString(Lista* l, char* str);