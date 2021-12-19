/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Deck.h
 * Author: jaymc
 *
 * Created on December 18, 2021, 8:22 AM
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

