/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Player.h"


Player::Player(string a){
    name=a;
}


void Player::setHand(Hand *h){
    hand=h;
}

string Player::getName(){
    return name;
}

void Player::prntHand(){
    hand->display();
}

unsigned char Player::getHandsize(){
    unsigned char b = hand->getHandsize();
    return b;
}

 Hand * Player::getHand(){
     return hand;
 }