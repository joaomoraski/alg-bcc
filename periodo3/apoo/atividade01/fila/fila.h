//
// Created by moraski on 04/10/2021.
//
#ifndef FILA_H
#define FILA_H

class Node {
public:
    Node(int dado);

    int dado;
    Node *prox;
};

class Fila {
public:
    Fila();

    bool add(int value);

    bool remove();

    inline int sizeOf() { return this->qtde; };

    inline int firstItem() { return this->first->dado; };

    void toString();

private:
    Node *first;
    Node *last;
    int qtde;
};


#endif
