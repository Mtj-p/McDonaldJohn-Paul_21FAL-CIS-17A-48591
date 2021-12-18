/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Card.h"
#include <iostream>

Card::Card(){
    rawCardValue=0;
}

Card::Card(unsigned char raw){
    try{
        if(raw>0){
            rawCardValue=raw;
        }
        else{
            throw(raw);
        }    
    }
    catch(int Num){
        std::cout<<"Invalid Card Raw Number, Cannot be negative.";        
    }
}

unsigned char Card::newcard(unsigned char raw){
    try{
        if(raw>0){
            rawCardValue=raw;
        }
        if(raw<0){
            throw(raw);
        }    
    }
    catch(int){
        std::cout<<"Invalid Card Raw Number, Cannot be negative.";        
    }
}
unsigned char Card::suit(){
    unsigned char temp = rawCardValue;
    temp = temp % 52;
    temp = temp % 4;
    char s[] = {'S','D','H','C'};
    return s[temp];
}
    
unsigned char Card::face(){
    unsigned char temp = rawCardValue;
    temp = temp % 52;
    temp = temp % 13;
    char f[] = {'1','2','3','4','5','6','7','8','9','T','J','Q','K'};
    return f[temp];
}

unsigned char Card::value(){
    unsigned temp = rawCardValue;
    temp = temp % 52;
    temp = temp % 13;
    temp++;
    return temp>10?10:temp;
}