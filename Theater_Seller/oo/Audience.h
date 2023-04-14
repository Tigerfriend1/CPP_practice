
#ifndef WEEK10_AUDIENCE_H
#define WEEK10_AUDIENCE_H

#include "Membership.h"
#include "Ticket.h"

class Audience {
public:
    //Audience() {};
    Audience(long amount, Membership* membership) : amount(amount), membership(membership)  {}
    long buy (Ticket ticket) {
        if (membership->isAvailable()){
            membership->use();
            return 0;
        }
        else{ //should buy
            amount-=ticket.getFee();
            return ticket.getFee();
        }
    }
    Membership* getAudiencemember(){ //정상작동확인용
        return membership;
    }
private:
    long amount;
    Membership* membership;
};
#endif //WEEK10_AUDIENCE_H
