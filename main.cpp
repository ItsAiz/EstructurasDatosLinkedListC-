#include <iostream>
#include "Book.h"
#include "LinkedCircle.cpp"
using namespace std;
void printList(std::vector<int> list){
    for(int num: list){
        cout<<num<<"\t";
    }
}
int main() {
    auto* list=new LinkedCircle<int>();
    list->addNodeLast(23);
    list->addNodeFirst(45);
    list->addNodeFirst(28);
    list->addNodeFirst(18);
    list->addNodeFirst(5);
    list->addNodeLast(55);
    list->addNodeLast(59);
    printList(list->getLinkedCircular());
    Node<int>* find=list->findNode(45);
    if(find!=NULL){
        cout<<"\nEl nodo existe"<<endl;
    }else{
        cout<<"El nodo no existe"<<endl;
    }
    printList(list->runLinkedCircular(find));

    return 0;
}
