//
// Created by moraski on 13/07/2021.
//

//Quais dados precisam ser representados e manipulados?
//

//- Descrição do teste
//- Número total de testes
//- Número de acertos
//- Número de erros

/*******************************************************************
*   DADOS
*******************************************************************/
typedef struct teste Teste;

/*******************************************************************
*   OPERACOES
*******************************************************************/
Teste* teste_criar(char* descricao);
void teste_verificar(Teste* t, int condicao, char *mensagem);
void teste_relatorio(Teste* t);
void teste_desalocar(Teste** t);




