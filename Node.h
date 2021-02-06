//
// Created by jxesa on 27/11/2020.
//

#ifndef PRIMERSESIONESTRUCTURASDATOS_NODE_H
#define PRIMERSESIONESTRUCTURASDATOS_NODE_H
#include <cstdlib>

template <class T> class Stack;

template <class T>
class Node {
    friend class Stack<T>;

public:
    Node(T info) : info(info) {
        next = NULL;
    }

    virtual ~Node() {

    }

private:
    T info;
    Node<T>* next;
};

#endif //PRIMERSESIONESTRUCTURASDATOS_NODE_H