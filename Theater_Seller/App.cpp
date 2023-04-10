
#include <memory>
#include "Audience.h"
#include "Theater.h"

std::vector<Ticket> createTicket();

int main() {
    std::vector<Ticket> tickets = createTicket();
    std::shared_ptr<TicketOffice> ticketOffice = std::make_shared<TicketOffice>(100'000L, tickets);

    Invitation invitation;
    Bag bag {10'000, invitation};
    Audience audience {bag};

    std::shared_ptr<TicketSeller> ticketSeller = std::make_shared<TicketSeller>(ticketOffice);
    Theater theater(ticketSeller);

    theater.enter(audience);
}

std::vector<Ticket> createTicket() {
    std::vector<Ticket> vec;
    for (int i = 0; i < 10; i++){
        Ticket ticket {8000};
        vec.push_back(ticket);
    }
    return vec;
}
