

#ifndef WEEK10_AUDIENCE_H
#define WEEK10_AUDIENCE_H

#include "Bag.h"

class Audience {
public:
    Audience() {}
    Audience(Bag bag) : bag(bag) {}
    long buy (Ticket ticket) {
        return bag.hold(ticket);
    }
private:
    Bag bag;
};
#endif //WEEK10_AUDIENCE_H
