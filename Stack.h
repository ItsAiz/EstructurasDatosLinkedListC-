//
// Created by jxesa on 30/11/2020.
//

#ifndef DATASTRUCTURED_STACK_H
#define DATASTRUCTURED_STACK_H

#include "Node.h"

template <class T>
class Stack {
public:
    Stack();
    bool isEmpty();
    void push( T );
    T pop();

    Node<T> *getHead() const;

    ~Stack();

private:
    Node<T>* head;
};


#endif //DATASTRUCTURED_STACK_H
