

#include "Dealer.h"


void Dealer::newRound(){
    delete deck;
    deck = new Deck();
}