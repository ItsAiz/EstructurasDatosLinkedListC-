//
// Created by jxesa on 24/02/2021.
//

#ifndef DATASTRUCTURED_NODE_H
#define DATASTRUCTURED_NODE_H
#include <cstdlib>
template<class T>class LinkedCircle;
template<class T>
class Node {
    friend class LinkedCircle<T>;
    private:
        Node<T>* next;
        T info;
    public:
        Node(){
           Node::next=NULL;
        }

        Node(T info) : info(info) {
            Node::next=NULL;
        }


};


#endif //DATASTRUCTURED_NODE_H
