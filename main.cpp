#include <iostream>
#include "LinkedList.cpp"
#include "LinkedDouble.cpp"
#include "Book.h"
using namespace std;

int main() {
//    auto* list=new LinkedList<Book>();
//    auto* listSorted=new LinkedList<Book>();
//    cout<<"Double Linked List"<<endl;
//    listSorted->addNodeSorted(Book("1", "cien anios soledad", "Garcia", 246));
//    listSorted->addNodeSorted(Book("2", "Satanas", "Mendoza", 506));
//    listSorted->addNodeSorted(Book("3", "No me se otro", "Garcia", 230));
//    listSorted->addNodeSorted(Book("4", "Que creativo", "Garcia", 806));
//    listSorted->addNodeSorted(Book("5", "Si o no", "Garcia", 100));
//    listSorted->addNodeSorted(Book("7", "Pero bueno", "Potazio", 160));
//    listSorted->addNodeSorted(Book("8","potatzio","Yo",500));
//
//    list->addNodeFirst(Book("1", "cien anios soledad", "Garcia", 246));
//    list->addNodeFirst(Book("2", "Satanas", "Mendoza", 506));
//    list->addNodeFirst(Book("3", "No me se otro", "Garcia", 230));
//    list->addNodeFirst(Book("4", "Que creativo", "Garcia", 806));
//    list->addLast(Book("5", "Si o no", "Garcia", 100));
//    Node<Book>* node=list->findNode("5");
//    auto* info=list->findInfo("4");
//    cout<<"Info node: "<<*info<<endl;
//    for (Book book: list->getLinkedList()){
//        cout<<book<<"\n";
//    }
//
//    list->addNodeBeforeTo(list->findNode("3"),Book("7", "Pero bueno", "Potazio", 160));
//    list->addNodeAfterTo(list->findNode("1"),Book("8","potatzio","Yo",500));
//
//    cout<<"Size linkedlist: "<<to_string(list->getSize())<<endl;
//    cout<<"GetObject: "<<*list->getObject(0)<<endl;
//
//    if(node!=NULL){
//        cout<<"Existe el nodo"<<endl;
//    }else{
//        cout<<"El nodo no existe"<<endl;
//    }
//    cout<<"Nuevos añadidos"<<endl;
//    for (Book book: list->getLinkedList()){
//        cout<<book<<"\n";
//    }
//    cout<<"Eliminar nodo"<<endl;
//    Node<Book>* nodeDelede=list->findNode("5");
//    Book bookDeleted=list->deleteNode(nodeDelede);
//    for (Book book: list->getLinkedList()){
//        cout<<book<<"\n";
//    }
//    cout<<"Nodo eliminado: "<<bookDeleted<<endl;
//
//    cout<<"Lista ordenada"<<endl;
//    for (Book book: listSorted->getLinkedList()){
//        cout<<book<<"\n";
//    }
//    cout<<endl;
//    delete (list);
//    delete (listSorted);
    auto* doubleBook=new LinkedDouble<Book>();

    return 0;
}
