//
// Created by moraski on 04/10/2021.
//
#include<iostream>
#include "fila.h"

Node::Node(int dado) {
    this->dado = dado;
    this->prox = NULL;
}

Fila::Fila() {
    this->first = NULL;
    this->last = NULL;
    this->qtde = 0;
}

bool Fila::add(int value) {
    Node *node = new Node(value);
    if (this->qtde == 0) {
        this->first = node;
        this->last = node;
        this->qtde++;
        return true;
    }
    this->last->prox = node;
    this->last = node;
    this->qtde++;
    return 1;
}

bool Fila::remove() {
    if (this->qtde == 0) return false;
    this->first = this->first->prox;
    this->qtde--;
    return true;
}

void Fila::toString() {
    if (this->qtde == 0) return;
    Node *noAtual = this->first;
    std::cout << "[ ";
    while (noAtual != NULL) {
        std::cout << noAtual->dado << " ";
        noAtual = noAtual->prox;
    }
    std::cout << "]\n";
}

int main() {
    std::cout << "-------------------- Criando a fila --------------------" << std::endl;
    Fila *fila = new Fila();
    std::cout << "-------------------- Fila criada --------------------" << std::endl;
    std::cout << "-------------------- Funçao add --------------------" << std::endl;
    fila->add(10);
    fila->toString();
    fila->add(20);
    fila->toString();
    fila->add(30);
    fila->toString();
    fila->add(40);
    fila->toString();
    fila->add(50);
    fila->toString();
    std::cout << "-------------------- Fim do add --------------------" << std::endl;
    std::cout << "Tamanho da fila(Tamanho esperado 5): " << fila->sizeOf() << std::endl;
    std::cout << "-------------------- Teste remove --------------------" << std::endl;
    if (!fila->remove()) {
        std::cout << "-------------------- Nao Passou --------------------" << std::endl;
    } else {
        std::cout << "-------------------- Passou --------------------" << std::endl;
        fila->toString();
    }

    if (!fila->remove()) {
        std::cout << "-------------------- Nao Passou --------------------" << std::endl;
    } else {
        std::cout << "-------------------- Passou --------------------" << std::endl;
        fila->toString();
    }
    return 0;
}
