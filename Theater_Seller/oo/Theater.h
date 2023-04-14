//
// Created by Taeyeon Kim on 15/12/2021.
//

#ifndef WEEK10_THEATER_H
#define WEEK10_THEATER_H

#include "TicketSeller.h"
#include "Audience.h"

class Theater {
public:
    Theater(std::shared_ptr<TicketSeller> ticketSeller)
                : ticketSeller(std::move(ticketSeller)) {}
    void enter(Audience& audience) {
        ticketSeller->sellTo(audience);
    }
private:
    std::shared_ptr<TicketSeller> ticketSeller;
};

#endif //WEEK10_THEATER_H
