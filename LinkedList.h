//
// Created by jxesa on 2/12/2020.
//

#ifndef DATASTRUCTURED_LINKEDLIST_H
#define DATASTRUCTURED_LINKEDLIST_H
#include "Node.h"
#include <vector>
#include <string>


template<class T>
class LinkedList {
private:
    Node <T>* head;
public:
    LinkedList();
    bool isEmpty();
    void addNodeFirst(T info);
    std:: vector<T> getLinkedList();
    Node<T>* findNode(std::string id);
    T* findInfo(std::string);
    void addLast(T);
    void addNodeAfterTo(Node<T>*,T);
    void addNodeBeforeTo(Node<T>*,T);
    int getSize();
    T* getObject(int);
    virtual ~LinkedList();

};
#endif //DATASTRUCTURED_LINKEDLIST_H
