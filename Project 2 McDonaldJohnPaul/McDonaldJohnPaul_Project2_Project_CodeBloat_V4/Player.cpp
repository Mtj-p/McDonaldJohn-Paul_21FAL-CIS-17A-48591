
#include "Player.h"


Player::Player(string a){
    name=a;
}
Player::Player(string a, Hand *h){
    name = a; 
    hand = h;
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
