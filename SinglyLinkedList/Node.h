//
// Created by 김태경 on 2023/04/05.
//

#ifndef SINGLYLINKEDLIST_NODE_H
#define SINGLYLINKEDLIST_NODE_H
#include "Song.h"

class Node {
public:
    Node(Song d) : data(d), next(nullptr) {}

    friend class SinglyLinkedList;

private:
    Song data;
    Node* next;
};
#endif //SINGLYLINKEDLIST_NODE_H
