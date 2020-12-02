//
// Created by jxesa on 2/12/2020.
//

#include "LinkedList.h"

template<class T>
LinkedList<T>::LinkedList() {
    head=NULL;
}

template<class T>
bool LinkedList<T>::isEmpty() {
    return false;
}

template<class T>
void LinkedList<T>::addNodeFirst(T info) {
    if(isEmpty()){
        head=new Node<T>(info);
    }else{
        auto* newNode= new Node<T>(info);
        newNode->next=head;
        head=newNode;
    }
}

template<class T>
std::vector<T> LinkedList<T>::getLinkedList() {
    return std::vector<T>();
}

template<class T>
LinkedList<T>::~LinkedList() {
    while (head!=NULL){
        Node<T>* aux=head;
        head=head->next;
        delete (aux);
    }
}

