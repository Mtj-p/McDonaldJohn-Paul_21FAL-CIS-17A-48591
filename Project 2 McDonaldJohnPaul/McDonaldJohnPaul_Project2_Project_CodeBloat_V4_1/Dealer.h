/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Dealer.h
 * Author: jaymc
 */

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
            nDeal=0;
        }
        ~Dealer(){delete deck;}
        
        void newRound();
        void display(){
            deck->display();
        }
        void shuffle(){
            deck->shuffle();
        }
        Hand *deal(unsigned char nDeal){
            Hand *hand=new Hand(deck->deal(nDeal),nDeal);
            return hand;
        }
};

#endif /* DEALER_H */

