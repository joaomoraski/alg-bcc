#ifndef LISTA_H
#define LISTA_H
typedef int Value;

class Node {
public:
    Value value;
    Node *prox;
    Node *ant;

    Node(Value value);
};

class List {
public:
    List(int maxLength);

    void add(Value value);

    inline int sizeOf() { return this->length; };

    bool removeIndex(int index);

    void toString();

    int find(int index);

private:
    Node *first;
    Node *last;
    int length;
    int maxLength;
};

#endif
