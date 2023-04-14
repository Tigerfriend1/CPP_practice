
#ifndef WEEK10_TICKETOFFICE_H
#define WEEK10_TICKETOFFICE_H

#include <vector>
#include <optional>
#include "Ticket.h"

class TicketOffice {
public:
    TicketOffice(long amount, std::vector<Ticket> tickets)
            : amount(amount), tickets(std::move(tickets)){}
    TicketOffice(std::vector<Ticket> tickets)
            : amount(0), tickets(std::move(tickets)){}
    //TicketOffice에서의 amount를 판매처가 가지고 있는 자본으로 생각했고, 기본 자금이 입력되지 않으면 기본 자금은 0원으로 가정함.

    Ticket getTicket() {
        Ticket ticket = *tickets.begin();
        tickets.erase(tickets.begin());
        ticket.setOwned(true);
        return ticket;
    }

    void minusAmount(long amount) {
        this->amount -= amount;
    }

    void plusAmount(long amount) {
        this->amount += amount;
    }

private:
    long amount;
    std::vector<Ticket> tickets;

};
#endif //WEEK10_TICKETOFFICE_H
