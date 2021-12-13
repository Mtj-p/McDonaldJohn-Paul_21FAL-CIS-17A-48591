/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Numbers.h"


Numbers::Numbers(){
    number=0;
}

Numbers::Numbers(int n){
    if(n>0&&n<10000){
        number=n;
    }
    else{
        cout<<"\nNumber out of range\n";
    }
}

void Numbers::print(){
    
    int thousands=0;
    int hundreds=0;
    int tenz=0;
    int ones=0;
    cout<<number<<" ";
    if(number>=1000){
        thousands=number/1000;
        number=number-(thousands*1000);
        cout<<lessThan20[thousands]<<" "<<thousand<<" ";
    }
    if(number>=100){
        hundreds=number/100;
        number=number-(hundreds*100);
        cout<<lessThan20[hundreds]<<" "<<hundred<<" ";
    }
    if(number>=20){
        tenz=number/10;
        number=number-(tenz*10);
        cout<<tens[tenz]<<" ";
    }
    if(number>=10&&number<=19){
        cout<<lessThan20[number];
        number=number-number;
    }
    if(number>0){
        ones=number;
        cout<<lessThan20[ones];
    }
    cout<<endl;
}