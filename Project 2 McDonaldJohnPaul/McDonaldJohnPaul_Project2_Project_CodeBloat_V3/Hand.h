/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Hand.h
 * Author: jaymc
 *
 * Created on December 18, 2021, 2:03 PM
 */

#ifndef HAND_H
#define HAND_H

#include "Card.h"

class Hand {
protected:
    unsigned char handsize;
    unsigned char * myhand;
public:
    Hand(unsigned char*,unsigned char);
    ~Hand(){delete []myhand;}
    void clearhand(){delete []myhand;}
    unsigned char * getHand();
    unsigned char getHandsize();
    void display();
};

#endif /* HAND_H */

