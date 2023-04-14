//
// Created by Taeyeon Kim on 11/12/2021.
//

#ifndef WEEK10_INVITATION_H
#define WEEK10_INVITATION_H

class Invitation {
public:
    Invitation() : invitation(true) {}
    bool isInvitation() {
        return invitation;
    }
    friend class Bag;
private:
    void setInvitation(bool invitation) {
        this->invitation = invitation;
    }
private:
    bool invitation;
};

#endif //WEEK10_INVITATION_H
