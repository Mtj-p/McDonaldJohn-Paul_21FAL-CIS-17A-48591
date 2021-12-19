
#ifndef DEALER_H
#define DEALER_H

#include "Player.h"
#include "Deck.h"
#include <iostream>

using namespace std;

class Dealer : public Player{
    protected:
        Deck *deck;
        unsigned char nDeal;
    public:
        Dealer(string name):Player(name){
            deck=new Deck();
        }
        ~Dealer(){delete deck;}
        void newRound();
        void display(){
            deck->display();
        }
        void shuffle(){
            deck->shuffle();
        }
};

#endif /* DEALER_H */

