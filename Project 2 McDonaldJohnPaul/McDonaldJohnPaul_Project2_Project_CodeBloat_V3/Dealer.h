/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Dealer.h
 * Author: jaymc
 *
 * Created on December 18, 2021, 3:07 PM
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
        Dealer(string name, unsigned nCards):Player(name){
            deck=new Deck();
        }
        ~Dealer(){delete deck;}
        void display(){
            deck->display();
        }
        void shuffle(){
            deck->shuffle();
        }
};

#endif /* DEALER_H */

