
#ifndef WEEK10_TICKETSELLER_H
#define WEEK10_TICKETSELLER_H
//std::cout << "TicketSeller > getTicketOffice() ticketOffice " << &ticketOffice << " " << ticketOffice.remainingTicket() << std::endl;

#include "TicketOffice.h"
#include "Audience.h"

class TicketSeller {
public:
    TicketSeller(std::shared_ptr<TicketOffice> ticketOffice)
    : ticketOffice(std::move(ticketOffice)) {}
    std::shared_ptr<TicketOffice> getTicketOffice() {
        return ticketOffice;
    }
    void sellTo(Audience audience){
        long amount = audience.buy(getTicketOffice()->getTicket());
        getTicketOffice()->plusAmount(amount);
    }
private:
    std::shared_ptr<TicketOffice> ticketOffice;
};

#endif //WEEK10_TICKETSELLER_H
