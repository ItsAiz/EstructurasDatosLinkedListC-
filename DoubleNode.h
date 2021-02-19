//
// Created by jxesa on 19/02/2021.
//

#ifndef DATASTRUCTURED_DOUBLENODE_H
#define DATASTRUCTURED_DOUBLENODE_H
#include <cstdlib>
template <class T> class LinkedDouble;

template<class T>
class DoubleNode{
    friend class LinkedDouble<T>;
    private:
        T info;
        DoubleNode<T>* next;
        DoubleNode<T>* previous;
    public:
     DoubleNode(T info): info(info){
         next=NULL;
         previous=NULL;
     }

    virtual ~DoubleNode() {

    }
};
#endif //DATASTRUCTURED_DOUBLENODE_H
