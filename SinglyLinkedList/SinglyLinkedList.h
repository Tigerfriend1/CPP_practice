//
// Created by 김태경 on 2023/04/05.
//

#ifndef SINGLYLINKEDLIST_SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_SINGLYLINKEDLIST_H
#include "Node.h"

class SinglyLinkedList {
public:
    SinglyLinkedList() : head(nullptr) {}
    void addNode(Song data);
    void removeNode(Song data);
    void printList();

private:
    Node* head;
};
#endif //SINGLYLINKEDLIST_SINGLYLINKEDLIST_H
