//
// Created by jxesa on 19/02/2021.
//

#ifndef DATASTRUCTURED_LINKEDDOUBLE_H
#define DATASTRUCTURED_LINKEDDOUBLE_H
#include "DoubleNode.h"
#include <vector>
#include <string>
template<class T>
class LinkedDouble {
    private:
        DoubleNode<T>* head;
        DoubleNode<T>* last;
    public:
     LinkedDouble();
     bool isEmpty();
     void addNodeFirst(T info);
     void addNodeLast(T info);
     DoubleNode<T>* findNode(std::string id);
     T* findInfo(std::string id);
     std::vector<T> getLinkedList(bool forward);
     void addNodeAfterTo(DoubleNode<T>* nodeReference,T info);
     void addNodeBeforeTo(DoubleNode<T>* nodeReference,T info);
     T* getObject(int position);

    virtual ~LinkedDouble();
};


#endif //DATASTRUCTURED_LINKEDDOUBLE_H
