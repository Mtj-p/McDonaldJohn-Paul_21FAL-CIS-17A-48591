/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "MilTime.h"
#include <iostream>

void MilTime::setTime(int a,int b){
    if(a>0&&a<=2359){
        milHours=a;
        min=(milHours%100);
    }
    if(a<0||a>2359){
        throw BadHour(a);
    }
    if(b>=0&&b<=59){
        milSeconds=b;
        sec=milSeconds;
    }
    if(b<0||b>59){
        throw BadSeconds(b);
    }
    if(milHours>1200){
        hour=(milHours/100)-12;
    }
    if(milHours<=1259){
        hour=(milHours/100);
    }   
}
string MilTime::getHour(){
    string a;
    string b=":";
    a+=to_string(hour);
    a.append(b);
    a+=to_string(min);
    a.append(b);
    a+=to_string(sec);
    return a;   
}
string MilTime::getTime(){
    string a;
    string b=":";
    a+=to_string(milHours);
    a.append(b);
    a+=to_string(milSeconds);
    return a; 
}