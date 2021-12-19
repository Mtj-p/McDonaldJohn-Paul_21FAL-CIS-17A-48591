/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include "ActiveGame.h"
#include "Hand.h"
#include <iostream>
#include <vector>

using namespace std;

ActiveGame::ActiveGame(int nums){
    string b= "Suzzy";
    for(int i=0;i<nums;i++){
        cout<<"Player "<<i<<": ";
        activeplayers=b;
    }
    cout<<"Active Players: "<<nums<<endl;
}

void ActiveGame::setActiveHand(Hand *a){
    unsigned char b = a->getHandsize();
    unsigned char *d = a->getHand();
    for(unsigned char i=0; i<b;i++){
        activehand.push_back(d[i]);
    }
    cout<<"Active hand ";
    for(int i=0;i<activehand.size();++i){
        cout<<activehand[i]<< ' ';
    }
}