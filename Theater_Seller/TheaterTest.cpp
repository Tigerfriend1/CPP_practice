//
// Created by 김태경 on 2023/04/14.
//
#include "oo/Theater.h"
#include "oo/TicketOffice.h"
#include "oo/TicketSeller.h"
#include "oo/Audience.h"
#include <iostream>
using namespace std;

int main() {
    std::vector<Ticket> tickets {{10'000}, {10'000}, {10'000}};
    TicketOffice ticketOffice{tickets};
    TicketSeller ticketSeller{make_shared<TicketOffice>(ticketOffice)};
    Theater theater {make_shared<TicketSeller>(ticketSeller)};

    //Audience audience {100'000, {3}};
    //Membership객체를 포인터로 할당해야 enter()이후에도 값이 유지됨.
    Membership* membership=new Membership(3); //제대로 작동되는지 확인하기 위해 생성.
    Audience audience {100'000, membership};
    theater.enter(audience);
    cout<<"You have successfully entered the theater."<<endl;
    cout<<"remain MembershipCount is "<<audience.getAudiencemember()->getMembership()<<endl;
}