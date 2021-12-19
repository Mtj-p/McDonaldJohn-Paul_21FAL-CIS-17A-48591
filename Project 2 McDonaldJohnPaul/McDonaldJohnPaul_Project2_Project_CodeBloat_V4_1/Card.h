/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Card.h
 * Author: jaymc
 */

#ifndef CARD_H
#define CARD_H

#include <string>
using namespace std;

class Card{
private:
    unsigned char rawCardValue;
public:
    Card();
    Card(unsigned char);
    unsigned char newcard(unsigned char);
    unsigned char suit();
    unsigned char face();
    unsigned char value();    
};

#endif /* CARD_H */

