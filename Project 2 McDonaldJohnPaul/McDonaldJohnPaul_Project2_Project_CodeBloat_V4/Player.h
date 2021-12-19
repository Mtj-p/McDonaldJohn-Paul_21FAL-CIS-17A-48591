
#ifndef PLAYER_H
#define PLAYER_H


#include "Hand.h"
#include <string>

using namespace std;

class Player {
protected: 
    string name;
    Hand *hand;
public:
    Player(string);
    Player(string, Hand *);
    void setHand(Hand *);
    string getName();
    void prntHand();

        
};


#endif /* PLAYER_H */

