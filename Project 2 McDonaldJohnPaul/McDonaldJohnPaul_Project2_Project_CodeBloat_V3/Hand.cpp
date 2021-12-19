/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Hand.h"
#include "Card.h"
#include <iostream>

using namespace std;


 Hand::Hand(unsigned char *a,unsigned char b){
     handsize=b;
     myhand=a;
 }

 unsigned char * Hand::getHand(){
     return myhand;
 }
 unsigned char Hand::getHandsize(){
     return handsize;
 }
 
 void Hand::display(){
    for(unsigned char crd=0;crd<handsize;crd++){
        Card card(myhand[crd]);
        cout<<static_cast<int>(myhand[crd])<<" "<<card.face()<<
                card.suit()<<" "<<
                static_cast<int>(card.value())<<endl;
    }
}