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

class Deck {
private:
    unsigned char **cards;
protected:
    
~Deck(){delete []cards;}
};

#endif /* DECK_H */

