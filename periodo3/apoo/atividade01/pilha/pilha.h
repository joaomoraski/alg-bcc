//
// Created by moraski on 04/10/2021.
//

#ifndef PILHA_H
#define PILHA_H

class Node {
public:
    Node(int dado);

    int dado;
    Node *prox;
};

class Pilha {
public:
    Pilha();

    bool add(int value);

    bool remove();

    inline int sizeOf() { return this->qtde; };

    void toString();

private:
    Node *top;
    int qtde;
};

#endif