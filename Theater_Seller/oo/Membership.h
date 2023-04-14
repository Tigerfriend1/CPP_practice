//
// Created by 김태경 on 2023/04/14.
//

#ifndef THEATER_SELLER_MEMBERSHIP_H
#define THEATER_SELLER_MEMBERSHIP_H

class Membership{
private:
    int remainCount;
public:
    Membership(int remainCount): remainCount(remainCount){}
    bool isAvailable(){
        return remainCount>0;
    }
    void use(){
        remainCount--;
    }
    int getMembership(){ //정상작동 확인용
        return remainCount;
    }
};

#endif //THEATER_SELLER_MEMBERSHIP_H
