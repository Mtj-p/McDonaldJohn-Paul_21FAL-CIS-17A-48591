/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AbstractCard.h
 * Author: jaymc
 *
 * Created on December 18, 2021, 6:32 PM
 */

#ifndef ABSTRACTCARD_H
#define ABSTRACTCARD_H

class AbstractCard{

public:

    unsigned char newcard(unsigned char);
    unsigned char suit();
    unsigned char face();
    unsigned char value();    
};

#endif /* ABSTRACTCARD_H */

