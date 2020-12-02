#include <iostream>
#include "LinkedList.cpp"
#include "Book.h"
using namespace std;

int main() {
    auto* list=new LinkedList<Book>();
    list->addNodeFirst(Book("1", "cien anios soledad", "Garcia", 246));
    list->addNodeFirst(Book("2", "Satanas", "Mendoza", 506));
    list->addNodeFirst(Book("3", "No me se otro", "Garcia", 230));
    list->addNodeFirst(Book("4", "Que creativo", "Garcia", 806));
    list->addLast(Book("5", "Si o no", "Garcia", 100));
    Node<Book>* node=list->findNode("5");
    //auto* info=list->findInfo("5");
    //cout<<*info<<endl;
    if(node!=NULL){
        cout<<"Existe el nodo"<<endl;
    }else{
        cout<<"El nodo no existe"<<endl;
    }
    for (Book book: list->getLinkedList()){
        cout<<book<<"\n";
    }
    cout<<endl;
    delete (list);
    return 0;
}
