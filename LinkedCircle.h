//
// Created by jxesa on 24/02/2021.
//

#ifndef DATASTRUCTURED_LINKEDCIRCLE_H
#define DATASTRUCTURED_LINKEDCIRCLE_H
#include "Node.h"
#include <vector>
template<class T>
class LinkedCircle {
    private:
        Node<T>* head;
    public:
        LinkedCircle();
        bool isEmpty();
        void addNodeFirst(T info);
        void addNodeLast(T info);
        std::vector<T> getLinkedCircular();
        Node<T>* findNode(int);
        std::vector<T> runLinkedCircular(Node<T>*);
        virtual ~LinkedCircle();
};


#endif //DATASTRUCTURED_LINKEDCIRCLE_H
