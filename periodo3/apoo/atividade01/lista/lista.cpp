//
// Created by moraski on 04/10/2021.
//
#include "lista.h"
#include<iostream>

Node::Node(Value value) {
    this->value = value;
    this->ant = NULL;
    this->prox = NULL;
}

List::List(int maxLength) {
    if (maxLength <= 0) return;
    this->first = NULL;
    this->last = NULL;
    this->length = 0;
    this->maxLength = maxLength;
}

void List::add(Value value) {
    if (this->length + 1 > this->maxLength) return;
    Node *node = new Node(
            value); // usei este padrao de inicializacao pois estou mais acostumado com java (a empresa que trabalho usa esta linguagem)
    if (this->length == 0) {
        this->first = node;
        this->last = node;
        this->length++;
        return;
    }
    this->last->prox = node;
    node->ant = this->last;
    this->last = node;
//    delete (node);
    this->length++;
}

bool List::removeIndex(int index) {
    if (index > this->length - 1) return false;
    Node *nodeI = this->first;
    for (int i = 0; i < index; ++i) {
        nodeI = nodeI->prox;
    }
    if (index == 0) {
        this->first = this->first->prox;
        this->length--;
        return true;
    }
    if (index == this->length - 1) {
        delete (nodeI);
        this->length--;
        return true;
    }
    if (index != 0) {
        Node *nodeAnt = nodeI->ant;
        nodeAnt->prox = nodeI->prox;
        Node *nodeProx = nodeI->prox;
        nodeProx->ant = nodeI->ant;
        this->length--;
        return true;
    }
    return false;
}

int List::find(int index) {
    if (index > this->length - 1) return false;
    Node *nodeI = this->first;
    for (int i = 0; i < index; ++i) {
        nodeI = nodeI->prox;
    }
    return nodeI->value;
}

void List::toString() {
    Node *no_atual = this->first;
    std::cout << "[";
    for (int i = 0; i < this->length; ++i) {
        std::cout << " " << no_atual->value;
        no_atual = no_atual->prox;
    }
    std::cout << " ]" << std::endl;
}

int main() {
    std::cout << "-------------------- Criando a lista --------------------" << std::endl;
    List *lista = new List(10);
    std::cout << "-------------------- Lista criaada --------------------" << std::endl;
    std::cout << "-------------------- Funçao add --------------------" << std::endl;
    lista->add(10);
    lista->toString();
    lista->add(20);
    lista->toString();
    lista->add(30);
    lista->toString();
    lista->add(40);
    lista->toString();
    lista->add(50);
    lista->toString();
    std::cout << "-------------------- Fim do add --------------------" << std::endl;
    std::cout << "Tamanho da lista(Tamanho esperado 5): " << lista->sizeOf() << std::endl;
    std::cout << "-------------------- Teste remove --------------------" << std::endl;
    int removeTeste1 = lista->find(4);
    if (!lista->removeIndex(4)) {
        std::cout << "-------------------- Nao Passou --------------------" << std::endl;
    } else {
        std::cout << "-------------------- Passou | Item removido(index 4):  " << removeTeste1
                  << " --------------------" << std::endl;
        lista->toString();
    }
    int removeTeste2 = lista->find(0);
    if (!lista->removeIndex(0)) {
        std::cout << "-------------------- Nao Passou --------------------" << std::endl;
    } else {
        std::cout << "-------------------- Passou | Item removido(index 0):  " << removeTeste2
                  << " --------------------" << std::endl;
        lista->toString();
    }

    std::cout << "-------------------- Teste find --------------------" << std::endl;
    std::cout << "Indice 0: " << lista->find(0) << std::endl;
    std::cout << "Indice 1: " << lista->find(1) << std::endl;
    std::cout << "Indice 2: " << lista->find(2) << std::endl;
    std::cout << "-------------------- Fim do Teste find --------------------" << std::endl;
    return 0;
}
