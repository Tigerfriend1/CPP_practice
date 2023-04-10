
#ifndef WEEK10_BAG_H
#define WEEK10_BAG_H

#include "Invitation.h"
#include "Ticket.h"


class Bag {
public:
    Bag() {}
    Bag(long amount)  {this->amount = amount;}
    Bag(long amount, const Invitation invitation) : amount(amount), invitation(invitation) {}
    long hold(Ticket ticket) {
        if(hasInvitation()){
            setTicket(ticket);
            return 0;
        } else {
            setTicket(ticket);
            minusAmount(ticket.getFee());
            return ticket.getFee();
        }
    }
private:
    bool hasInvitation() {return invitation.isInvitation();}
    bool hasTicket() {return ticket.isOwned();}
    void setTicket(Ticket ticket) {this->ticket = ticket; invitation.setInvitation(false);}
    void minusAmount(long amount) {this->amount -= amount;}
private:
    long amount;
    Invitation invitation;
    Ticket ticket;
};
#endif //WEEK10_BAG_H
