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
    return head == NULL && last == NULL;
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
DoubleNode<T> *LinkedDouble<T>::findNode(std::string id) {
    DoubleNode<T>* aux=head;
    while (aux!= NULL){
        if(id.compare(aux->info.getId())==0){
            return  aux;
        }
        aux=aux->next;
    }
    return NULL;
}
template<class T>
T *LinkedDouble<T>::findInfo(std::string id) {
    DoubleNode<T>* aux=head;
    while (aux!= NULL){
        if(id.compare(aux->info.getId())==0){
            T* info=&aux->info;
            return info;
        }
        aux=aux->next;
    }
    return NULL;
}
template<class T>
void LinkedDouble<T>::addNodeAfterTo(DoubleNode<T> *nodeReference, T info) {
    DoubleNode<T>* newNode = new DoubleNode<T>(info);
    if(isEmpty()){
        head = newNode;
        last = newNode;
    } else {
        if(nodeReference == last){
            addNodeLast(info);
        } else {
            newNode->previous = nodeReference;
            newNode->next = nodeReference->next;
            newNode->next->previous = newNode;
            nodeReference->next = newNode;
        }
    }

}

template<class T>
void LinkedDouble<T>::addNodeBeforeTo(DoubleNode<T>* nodeReference,T info) {
    DoubleNode<T>* newNode= new DoubleNode<T>(info);
    if ( isEmpty() ){
        head=newNode;
        last=newNode;
    }else{
        if (nodeReference==head){
            addNodeFirst(info);
        }else{
            newNode->next=nodeReference;
            newNode->previous=nodeReference->previous;
            nodeReference->previous=newNode;
            newNode->previous->next=newNode;
        }

    }
}
template<class T>
T *LinkedDouble<T>::getObject(int position) {
    short int counter=0;
    DoubleNode<T>* aux =head;
    while(aux!=NULL){
        if(counter==position){
            T* info= &aux ->info;
            return info;
        }
        aux=aux->next;
        counter++;
    }
    return NULL;
}
template<class T>
T LinkedDouble<T>::getLast() {
    return last->info;
}
template<class T>
T LinkedDouble<T>::getFirst() {
    return head->info;
}
template<class T>
LinkedDouble<T>::~LinkedDouble() {
    while (head!=NULL){
        DoubleNode<T>* aux=head;
        head=head->next;
        delete (aux);
    }

}




