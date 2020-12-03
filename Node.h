//
// Created by jxesa on 27/11/2020.
//

#ifndef PRIMERSESIONESTRUCTURASDATOS_NODE_H
#define PRIMERSESIONESTRUCTURASDATOS_NODE_H
#include <cstdlib>

template <class T> class LinkedList;
template <class T>
class Node {
    friend class LinkedList<T>;

public:
    Node(T info) : info(info) {
        next = NULL;
    }

    T getInfo() const;

    virtual ~Node() {
    }

private:
    T info;
    Node<T>* next;
};

#endif //PRIMERSESIONESTRUCTURASDATOS_NODE_H