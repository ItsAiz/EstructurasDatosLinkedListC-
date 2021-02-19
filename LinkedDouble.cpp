//
// Created by jxesa on 19/02/2021.
//

#include "LinkedDouble.h"

template<class T>
LinkedDouble<T>::LinkedDouble(){
    head=NULL;
    last=NULL;
}
template<class T>
bool LinkedDouble<T>::isEmpty() {
    return head==NULL;
}

template<class T>
void LinkedDouble<T>::addNodeFirst(T info) {
    DoubleNode<T>* newNode=new DoubleNode<T>(info);
    if(isEmpty()){
        head=newNode;
        last=newNode;
    }else{
        newNode->next=head;
        head->previous=newNode;
        head=newNode;
    }
}

template<class T>
void LinkedDouble<T>::addNodeLast(T info) {
    DoubleNode<T>* newNode=new DoubleNode<T>(info);
    if(isEmpty()){
        head=newNode;
        last=newNode;
    }else{
        last->next=newNode;
        newNode->previous=last;
        last=newNode;
    }
}

template<class T>
std::vector<T> LinkedDouble<T>::getLinkedList(bool forward) {
    std::vector<T> out;
    DoubleNode<T>* aux=forward?head:last;
    while (aux!=NULL){
        out.push_back(aux->info);
        aux=forward?aux->next:aux->previous;
    }
    return out;

}

template<class T>
LinkedDouble<T>::~LinkedDouble() {

}
