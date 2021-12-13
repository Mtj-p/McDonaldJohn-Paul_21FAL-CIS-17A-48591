/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "ProductionWorker.h"



void ProductionWorker::setshift(int s){
    if(s<1||s>2){
        cout<<"\nInvalid shift\n";
    }
    if(s>0&&s<3){
        shift = s;
    }
}
void ProductionWorker::setpr(float p){
    payrate = p;
}

void ProductionWorker::setboth(int s,float p){
    if(s<1||s>2){
        cout<<"\nInvalid shift\n";
    }
    if(s>0&&s<3){
        shift = s;
    }
    payrate = p;
}

int ProductionWorker::getshift(){
    return shift;
}
float ProductionWorker::getrate(){
    return payrate;
}
string ProductionWorker::shiftname(int a){
    string yes;
    if(a==1){
        yes="Day";
    }
    if(a==2){
        yes="Night";
    }
    else{
        yes="Null";
    }
    return yes;
}
