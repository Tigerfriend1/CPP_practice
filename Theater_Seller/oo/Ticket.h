//
// Created by Taeyeon Kim on 11/12/2021.
//

#ifndef WEEK10_TICKET_H
#define WEEK10_TICKET_H

class Ticket {
public:
    Ticket() {}
    Ticket(long fee) : fee(fee) {}
    long getFee(){ return fee;}
    bool isOwned() {return owned;}
    friend class TicketOffice;
private:
    void setOwned(bool owned){ this->owned = owned;}
private:
    long fee = 10'000;
    bool owned = false;
};

#endif //WEEK10_TICKET_H
