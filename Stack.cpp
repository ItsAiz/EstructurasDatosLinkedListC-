//
// Created by jxesa on 30/11/2020.
//

#include "Stack.h"

template<class T>
Stack<T>::Stack() {
    Stack::head = NULL;
}

template<class T>
bool Stack<T>::isEmpty() {
    return head == NULL;
}

template<class T>
void Stack<T>::push( T info ) {
    if ( isEmpty( ) ){
        head = new Node<T>( info );
    }else{
        Node<T>* newNode = new Node<T>(info);
        newNode->next = head;
        head = newNode;
    }
}

template<class T>
T Stack<T>::pop() {
    Node<T>* aux = head;
    T out = aux->info;

    head = head->next;
    delete( aux );

    return out;
}

template<class T>
Stack<T>::~Stack() {

}



