
#ifndef WEEK10_TICKETOFFICE_H
#define WEEK10_TICKETOFFICE_H

#include <vector>
#include <optional>
#include "Ticket.h"

class TicketOffice {
public:
    TicketOffice(long amount, std::vector<Ticket> tickets)
            : amount(amount), tickets(std::move(tickets)){}

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
