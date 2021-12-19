/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Player.h
 * Author: jaymc
 *
 * Created on December 18, 2021, 2:44 PM
 */

#ifndef PLAYER_H
#define PLAYER_H


#include "Hand.h"
#include <string>

using namespace std;

class Player {
protected: 
    string name;
    int wins;
    Hand *hand;
public:
    Player(string);
    void setHand(Hand *);
    string getName();
    void prntHand();

        
};


#endif /* PLAYER_H */

