//
// Created by jxesa on 24/02/2021.
//

#include "LinkedCircle.h"
template<class T>
LinkedCircle<T>::LinkedCircle() {
    head=NULL;
}
template<class T>
bool LinkedCircle<T>::isEmpty() {
    return head==NULL;
}
template<class T>
void LinkedCircle<T>::addNodeFirst(T info) {
    if(isEmpty()){
        head=new Node<T>(info);
        head->next=head;
    }else{
        Node<T>* newNode=new Node<T>(info);
        newNode->next=head->next;
        head->next=newNode;
    }
}
template<class T>
void LinkedCircle<T>::addNodeLast(T info) {
    Node<T>* newNode=new Node<T>(info);
    if(isEmpty()){
        head=newNode;
        head->next=head;
    }else{
        newNode->next=head->next;
        head->next=newNode;
        head=newNode;
    }
}
template<class T>
Node<T> *LinkedCircle<T>::findNode(int info) {
    Node<T>* aux=head;
    do{
        if(aux->next->info==info){
            return aux->next;
        }
        aux=aux->next;
    }while (aux != head);
    return NULL;
}

template<class T>
std::vector<T> LinkedCircle<T>::getLinkedCircular() {
    std::vector<T> out;
    Node<T>* aux=head;
    do{
        out.push_back(aux->next->info);
        aux=aux->next;
    }while (aux != head);
    return out;
}
template<class T>
std::vector<T> LinkedCircle<T>::runLinkedCircular(Node<T>* node) {
    std::vector<T> out;
    Node<T>* aux=node;
    do{
        out.push_back(aux->info);
        aux=aux->next;
    }while (aux != node);
    return out;
}
template<class T>
LinkedCircle<T>::~LinkedCircle() {

}




