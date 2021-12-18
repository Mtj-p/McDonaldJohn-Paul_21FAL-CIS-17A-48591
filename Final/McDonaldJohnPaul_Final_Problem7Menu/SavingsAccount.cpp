/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "SavingsAccount.h"
#include <iostream>
#include <iomanip>

SavingsAccount::SavingsAccount(float a){
    if(a>0){
        Balance=a;
        FreqWithDraw=0;
        FreqDeposit=0;
    }
    else{
        Balance = 0;
        FreqWithDraw=0;
        FreqDeposit=0;
    }
}

void SavingsAccount::Transaction(float a){
    if(a>0){
        Balance = Deposit(a);
    }
    
    if(a<0){
        Balance = Withdraw(a);
    }
}

float SavingsAccount::Deposit(float a){
    
    Balance += a;
    FreqDeposit++;
    return Balance;
}

float SavingsAccount::Withdraw(float a){
    if(Balance<(a*-1)){
        std::cout<<"WithDraw not allowed\n";
    }
    if(Balance>=(a*-1)){
        Balance+=a;
    }    
    FreqWithDraw++;
    return Balance;
}

void SavingsAccount::toString(){
    std::cout<<"Balance="<<Balance<<std::endl;
    std::cout<<"WithDraws="<<FreqWithDraw<<std::endl;
    std::cout<<"Deposit="<<FreqDeposit<<std::endl;
}


float SavingsAccount::Total(float a,int b){
    float c=1+a;
    a=c;
    for(int i=0;i<b-1;i++){
        a=a*c;
    }
    return Balance*a;
}
float SavingsAccount::TotalRecursive(float a,int b){
    for(int i=0;i<b;i++){
        Balance += (Balance * a);
    }
    
    return Balance;
}
 