/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ActiveHand.h
 * Author: jaymc
 */

#ifndef ACTIVEHAND_H
#define ACTIVEHAND_H

#include <iostream>
#include <vector>
#include "Deck.h"
#include "Dealer.h"

class ActiveGame{
private:
    int numplayers;
    string []activeplayers;
    vector<unsigned char> activehand;
public:
    ActiveGame(int);
    ~ActiveGame(){delete []activeplayers;}
    void setActiveHand(Hand*);
    
};


#endif /* ACTIVEHAND_H */

