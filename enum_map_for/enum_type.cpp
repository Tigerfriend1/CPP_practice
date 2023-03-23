#include <iostream>
using namespace std;

enum Chioce{
    rock,
    paper,
    scissors
};

int main(){
    Chioce player_choice;
    int a;
    cin>>a;
    if (a==0){
        player_choice=rock;
    }
    else if (a==1){
        player_choice=paper;
    }
    else if (a==2){
        player_choice=scissors;
    }
    else {
        cout<<"no!"<<endl;
        return 0;
    }

    switch(player_choice){
        case rock:
            cout<<"You chose rock.\n"
                  "The computer chose rock.\n"
                  "You tied!";
            break;
        case paper:
            cout<<"You chose paper.\n"
                  "The computer chose scissors.\n"
                  "The computer won!";
            break;
        case scissors:
            cout<<"You chose scissors.\n"
                  "The computer chose paper.\n"
                  "You won!";
            break;
    }
    return 0;


}
