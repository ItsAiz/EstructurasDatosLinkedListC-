#include <iostream>
#include "LinkedList.cpp"
#include "LinkedDouble.cpp"
#include "Book.h"
using namespace std;

int main() {
    auto* doubleBook=new LinkedDouble<Book>();
    doubleBook->addNodeFirst(Book("1", "cien anios soledad", "Garcia", 246));
    doubleBook->addNodeFirst(Book("2", "Satanas", "Mendoza", 506));
    doubleBook->addNodeFirst(Book("3", "No me se otro", "Garcia", 230));
    doubleBook->addNodeFirst(Book("4", "Que creativo", "Garcia", 806));
    cout<<"Hacia adelante"<<endl;
    for(Book book: doubleBook->getLinkedList(true)){
        cout<<book<<"\n";
    }
    cout<<"Hacia Atras"<<endl;
    for(Book book: doubleBook->getLinkedList(false)){
        cout<<book<<"\n";
    }
    delete (doubleBook);
    return 0;
}
