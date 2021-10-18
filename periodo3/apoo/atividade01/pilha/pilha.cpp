//
// Created by moraski on 04/10/2021.
//
#include<iostream>
#include "pilha.h"


Node::Node(int dado) {
    this->dado = dado;
    this->prox = NULL;
}

Pilha::Pilha() {
    this->top = NULL;
    this->qtde = 0;
}

bool Pilha::add(int value) {
    Node *node = new Node(value);
    if (this->qtde != 0) {
        node->prox = this->top;
        this->top = node;
        this->qtde++;
        return true;
    }
    this->top = node;
    this->qtde++;
    return true;
}

bool Pilha::remove() {
    if (this->qtde == 0) return false;
    this->top = this->top->prox;
    this->qtde--;
    return true;
}

void Pilha::toString() {
    if (this->qtde == 0) return;
    Node *noAtual = this->top;
    std::cout << "[ ";
    while (noAtual != NULL) {
        std::cout << noAtual->dado << " ";
        noAtual = noAtual->prox;
    }
    std::cout << "]" << std::endl;
}


int main() {
    std::cout << "-------------------- Criando a pilha --------------------" << std::endl;
    Pilha *pilha = new Pilha();
    std::cout << "-------------------- Pilha criada --------------------" << std::endl;
    std::cout << "-------------------- Funçao add --------------------" << std::endl;
    pilha->add(10);
    pilha->toString();
    pilha->add(20);
    pilha->toString();
    pilha->add(30);
    pilha->toString();
    pilha->add(40);
    pilha->toString();
    pilha->add(50);
    pilha->toString();
    std::cout << "-------------------- Fim do add --------------------" << std::endl;
    std::cout << "Tamanho da fila(Tamanho esperado 5): " << pilha->sizeOf() << std::endl;
    std::cout << "-------------------- Teste remove --------------------" << std::endl;
    if (!pilha->remove()) {
        std::cout << "-------------------- Nao Passou --------------------" << std::endl;
    } else {
        std::cout << "-------------------- Passou --------------------" << std::endl;
        pilha->toString();
    }

    if (!pilha->remove()) {
        std::cout << "-------------------- Nao Passou --------------------" << std::endl;
    } else {
        std::cout << "-------------------- Passou --------------------" << std::endl;
        pilha->toString();
    }
    return 0;
}