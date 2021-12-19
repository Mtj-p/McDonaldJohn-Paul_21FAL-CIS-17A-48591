
#include "Hand.h"
#include "Card.h"
#include <iostream>

using namespace std;


 Hand::Hand(unsigned char *a,unsigned char b){
     handsize=b;
     myhand=a;
 }

 Hand::Hand(const Hand& otherhand){
     handsize=otherhand.handsize;
     myhand=otherhand.myhand;
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