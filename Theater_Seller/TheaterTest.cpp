//
// Created by 김태경 on 2023/04/14.
//
#include "oo/Theater.h"
#include "oo/TicketOffice.h"
#include "oo/TicketSeller.h"
#include "oo/Audience.h"
using namespace std;

int main() {
    std::vector<Ticket> tickets {{10'000}, {10'000}, {10'000}};
    TicketOffice ticketOffice{3,tickets};
    TicketSeller ticketSeller{make_shared<TicketOffice>(ticketOffice)};
    Theater theater {make_shared<TicketSeller>(ticketSeller)};

    Audience audience {100'000, {3}};
    theater.enter(audience);
}