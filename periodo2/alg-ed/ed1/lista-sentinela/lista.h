#ifndef _LISTA_H_
#define _LISTA_H_
#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

typedef int TipoElemento;
#define FORMATO "%d"
/*-----------------------------------------------
DADOS
-------------------------------------------------*/
typedef struct lista Lista;



/*------------------------------------------------
PROTÃ“TIPOS
-------------------------------------------------*/

/**
 * @brief Cria e inicializa a lista
 *
 * @return Lista*: EndereÃ§o da lista criada
 */
Lista* lista_criar();

/**
 * @brief Desaloca a lista e limpa o lixo de memÃ³ria
 *
 * @param endereco: EndereÃ§o de memÃ³ria onde estÃ¡ o ponteiro da lista a ser desalocada
 */
void lista_destruir(Lista** endereco);

/**
 * @brief Insere o elemento no final da lista
 *
 * @param l: endereÃ§o para a lista
 * @param elemento: elemento a ser inserido
 * @return bool: 'true' quando o elemento for inserido com sucesso e false caso contrÃ¡rio
 */
bool lista_anexar(Lista* l, TipoElemento elemento);

/**
 * @brief Insere um elemento na lista em uma posiÃ§Ã£o especÃ­fica
 * CenÃ¡rios que devem ser considerados na inserÃ§Ã£o
 * (a) inserÃ§Ã£o na lista estÃ¡ vazia
 * (b) inserÃ§Ã£o na primeira posiÃ§Ã£o
 * (c) inserÃ§Ã£o na Ãºltima posiÃ§Ã£o
 * (d) inserÃ§Ã£o no meio
 *
 * @param l: endereÃ§o para a lista
 * @param elemento: elemento a ser inserido
 * @param posicao: posiÃ§Ã£o na qual o elemento deve ser inserido na lista
 * @return bool: true se a inserÃ§Ã£o ocorreu corretamente e false caso contrÃ¡rio
 */
bool lista_inserir(Lista* l, TipoElemento elemento, int posicao);


/**
 * @brief Remove o elemento que ocupa uma posiÃ§Ã£o especÃ­fica da lista.
 * CenÃ¡rios que devem ser considerados na remoÃ§Ã£o
 * (a) remoÃ§Ã£o na lista com um Ãºnico elemento
 * (b) remoÃ§Ã£o da primeira posiÃ§Ã£o
 * (c) remoÃ§Ã£o da Ãºltima posiÃ§Ã£o
 * (d) remoÃ§Ã£o do meio
 *
 * @param l: endereÃ§o para a lista
 * @param posicao: posiÃ§Ã£o a ser removida
 * @param endereco: endereÃ§o de memÃ³ria em que o elemento removido deve ser armazenado (devolvido)
 * @return bool: true se a remoÃ§Ã£o ocorreu corretamente e false caso contrÃ¡rio
 */
bool lista_removerPosicao(Lista* l, int posicao, TipoElemento* endereco);

/**
 * @brief Remove a primeira ocorrÃªncia do elemento na lista
 *
 * @param l: endereÃ§o para a lista
 * @param elemento: elemento a ser removido
 * @return int: Ã­ndice do elemento que foi removido
 */
int lista_removerElemento(Lista* l, TipoElemento elemento);

/**
 * @brief Substitui o elemento que ocupa uma posiÃ§Ã£o na lista.
 *
 * @param l: endereÃ§o da lista
 * @param posicao: posiÃ§Ã£o a ser substituida
 * @param novoElemento: novo elemento que ocuparÃ¡ a posiÃ§Ã£o
 * @return bool: true se a substituiÃ§Ã£o ocorrer com sucesso e false caso contrÃ¡rio.
 */
bool lista_substituir(Lista* l, int posicao, TipoElemento novoElemento);

/**
 * @brief Devolve o Ã­ndice que um elemento ocupa na lista
 *
 * @param l: endereÃ§o da lista
 * @param elemento: elemento a ser encontrado
 * @return int: posiÃ§Ã£o que o elemento ocupa na lista ou -1 caso o elemento nÃ£o seja encontrado.
 */
int lista_posicao(Lista* l, TipoElemento elemento);

/**
 * @brief Devolve o elemento que ocupa uma determinada posiÃ§Ã£o da lista.
 *
 * @param l: endereÃ§o da lista
 * @param posicao: posiÃ§Ã£o desejada
 * @param endereco: endereÃ§o de memÃ³ria no qual serÃ¡ armazenado (devolvido) o elemento que ocupa a posiÃ§Ã£o especificada
 * @return bool: true caso a posiÃ§Ã£o exista e false caso contrÃ¡rio.
 */
bool lista_buscar(Lista* l, int posicao, TipoElemento* endereco);

/**
 * @brief Devolve a quantidade elementos da lista
 *
 * @param l: endereÃ§o da lista
 * @return int: quantidade de elementos
 */
int lista_tamanho(Lista* l);

/**
 * @brief Verifica se a lista estÃ¡ vazia.
 *
 * @param l: endereÃ§o da lista
 * @return bool: true caso a lista esteja vazia e false caso contrÃ¡rio.
 */
bool lista_vazia(Lista* l);

/**
 * @brief Devolve uma versÃ£o da lista no formato de string. O formato utilizado deve ser: [elem1,elem2,...,elemn]
 *
 * @param l: endereÃ§o da lista
 * @param str: endereÃ§o no qual a versÃ£o string serÃ¡ armazenada
 * @return bool: se a string for copiada ou false caso contrÃ¡rio.
 */
bool lista_toString(Lista* l, char* str);

#endif