//
// Created by jxesa on 2/12/2020.
//

#include "LinkedList.h"
#include <vector>

template<class T>
LinkedList<T>::LinkedList() {
    head=NULL;
}

template<class T>
bool LinkedList<T>::isEmpty() {
    return head==NULL;
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
    std::vector<T> out;
    Node<T>* aux=head;
    while (aux!= NULL){
        out.push_back(aux->info);
        aux=aux->next;
    }
    return out;
}

template<class T>
Node<T> *LinkedList<T>::findNode(std::string id) {
    Node<T>* aux=head;
    while (aux!= NULL){
       if(id.compare(aux->info.getId())==0){
           return aux;
       }
       aux=aux->next;
    }
    return NULL;
}
template<class T>
T *LinkedList<T>::findInfo(std::string id) {
    Node<T>* aux=head;
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
void LinkedList<T>::addLast(T info) {
    Node<T>* newNode=new Node<T>(info);
    if(isEmpty()){
        head=newNode;
    }else{
        Node<T>* aux=head;
        while (aux->next!=NULL){
            aux=aux->next;
        }
        aux->next=newNode;
    }
}
template<class T>
int LinkedList<T>::getSize() {
    int counter=0;
    Node<T>* aux=head;
    while (aux!=NULL){
        aux=aux->next;
        counter++;
    }
    return counter;
}
template<class T>
void LinkedList<T>::addNodeAfterTo(Node<T>* nodeReference,T info) {
    if(isEmpty()){
        head=new Node<T>(info);
    }else{
        if(nodeReference==head){
            addNodeFirst(info);
        }else{
            Node<T>* newNode=new Node<T>(info);
            newNode->next=nodeReference->next;
            nodeReference->next=newNode;
        }
    }
}
template<class T>
void LinkedList<T>::addNodeBeforeTo(Node<T>* nodeReference,T info) {
    if(isEmpty()){
        head=new Node<T>(info);
    }else{
        if(nodeReference==head){
            addNodeFirst(info);
        }else{
            Node<T>* aux=head;
            while (aux->next!=nodeReference){
              aux=aux->next;
            }
            Node<T>* newNode= new Node<T>(info);
            newNode->next=aux->next;
            aux->next=newNode;
        }
    }

}
template<class T>
void LinkedList<T>::addNodeSorted(T info) {
    Node<T>* newNode=new Node<T>(info);
    if(isEmpty()){
        head=new Node<T>(info);
    }else{
        Node<T>* act = head;
        Node<T>* ant = NULL;
        while(act!=NULL && info.getId().compare(act->info.getId())>0){
            ant=act;
            act=act->next;
        }
        if(ant==NULL){
            head=newNode;
        }else{
            ant->next=newNode;
        }
        newNode->next=act;
    }
}
template<class T>
T *LinkedList<T>::getObject(int position) {
    short int counter=0;
    Node<T>* aux =head;
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
LinkedList<T>::~LinkedList() {
    while (head!=NULL){
        Node<T>* aux=head;
        head=head->next;
        delete (aux);
    }
}









