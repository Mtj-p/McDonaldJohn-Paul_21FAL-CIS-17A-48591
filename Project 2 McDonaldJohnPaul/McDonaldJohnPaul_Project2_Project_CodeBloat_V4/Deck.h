/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#ifndef DECK_H
#define DECK_H

#include "Card.h"

class Deck {
private:
    unsigned char nCards;
    unsigned char nShuffle;
    unsigned char *index;
    unsigned char nDealt;
    Card **card;
public:
    Deck();
    ~Deck();
    Deck operator ++ ();
    Deck operator ++ (int); 
    void shuffle();
    void display();
    unsigned char getnCards();
};




#endif /* DECK_H */

