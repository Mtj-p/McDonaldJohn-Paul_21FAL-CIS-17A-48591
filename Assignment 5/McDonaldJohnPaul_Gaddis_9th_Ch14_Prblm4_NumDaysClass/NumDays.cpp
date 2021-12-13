/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "NumDays.h"

NumDays::NumDays(){
    hours=0.0;
    days=0.0;
    
}
NumDays::NumDays(float h){
    hours = h;
    days = calcDays();
}
NumDays NumDays::operator + (const NumDays &right){
    NumDays temp;
    temp.hours = hours + right.hours;
    temp.days=temp.calcDays();
    return temp;
}
NumDays NumDays::operator - (const NumDays &right){
    NumDays temp;
    temp.hours = hours - right.hours;
    temp.days=temp.calcDays();
    return temp;
}
NumDays NumDays::operator++(){
    ++hours;
    days=calcDays();
    return *this;
}
NumDays NumDays::operator++(int){
    NumDays temp(hours);
    hours++;
    days=temp.calcDays();
    return temp;
}
NumDays NumDays::operator--(){
    --hours;
    days=calcDays();
    return *this;
}
NumDays NumDays::operator--(int){
    NumDays temp(hours);
    hours--;
    days=temp.calcDays();
    return temp;
}
void NumDays::setHours(float h){
    hours = h;
    days = calcDays();
}
float NumDays::retDays(){
    return days;
}
float NumDays::retHours(){
    return hours;
}
float NumDays::calcDays(){
    float temp=hours/8;
    return temp;
}