//
// Created by 김태경 on 2023/04/05.
//
#include "Cart.h"
#include "Item.h"
#include "Checkout.h"
#include <iostream>
#include <algorithm>
void Cart::addItem(const Item &item) {
    items.push_back(item);

}



void Cart::deleteItem(int id) {
    items.erase(remove_if(items.begin(),items.end(),[=](auto a)->bool{return a.getId()==id;}));

}

int Cart::checkout() {
    Checkout c;
    return c.calculateTotalPrice(items.begin(),items.end());
}

void Cart::viewItemDetails(int id, ostream &out) const {
    out<<"item "<<id<<":"<<endl;
    auto i=find_if(items.begin(),items.end(),[=](auto a)->bool{return a.getId()==id;});
    if (i==items.end()){
        out<<"Item not found."<<endl;
        return;
    }
    out<<"Name: "<<i->getName()<<endl;
    out<<"Quantity: "<<i->getQuantity()<<endl;
    out<<"Price: "<<i->getPrice()<<endl;
}

const_iterator Cart::cbegin() const {
    return const_iterator();
}

const_iterator Cart::cend() const {
    return const_iterator();
}

