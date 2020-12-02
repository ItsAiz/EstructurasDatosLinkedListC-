//
// Created by jxesa on 2/12/2020.
//

#ifndef DATASTRUCTURED_LINKEDLIST_H
#define DATASTRUCTURED_LINKEDLIST_H
#include "Node.h"
#include <vector>


template<class T>
class LinkedList {
public:
    LinkedList();
    bool isEmpty();
    void addNodeFirst(T info);
    std:: vector<T> getLinkedList();

    virtual ~LinkedList();

private:
    Node <T>* head;
};

#endif //DATASTRUCTURED_LINKEDLIST_H
