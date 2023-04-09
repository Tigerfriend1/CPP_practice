//
// Created by 김태경 on 2023/04/05.
//
#include "SinglyLinkedList.h"
#include <iostream>
using namespace std;

void SinglyLinkedList::addNode(Song data) {
    Node *New=new Node(data);
    if (this->head== nullptr){
        head=New;
    }
    else {
        Node *current = head;
        New->next = current;
        head=New;
    }
//    if (this->head== nullptr){
//        this->head=New;
//    }
//    else {
//        Node *current=this->head;
//        while(current->next!= nullptr){
//            current=current->next;
//        }
//        current->next=New;
//    }
}

void SinglyLinkedList::removeNode(Song data) {
    Node *current=this->head;
    Node *pre= nullptr;
    while(current!= nullptr && !current->data.equals(data)){
        pre=current;
        current=current->next;
    }
    pre->next=current->next;
    delete current;
}

void SinglyLinkedList::printList() {
    Node *current=this->head;
    while(current!= nullptr){
        cout<<current->data.toString()<<endl;
        current=current->next;
    }
    cout<<endl;
}

