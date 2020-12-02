#include <iostream>
#include "LinkedList.cpp"

using namespace std;

int main() {
    LinkedList<int>* list=new LinkedList<int>();
    list->addNodeFirst(45);
    delete (list);
    return 0;
}
