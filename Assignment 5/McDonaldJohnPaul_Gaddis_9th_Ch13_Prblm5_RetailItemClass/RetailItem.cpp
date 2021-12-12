/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "RetailItem.h"

RetailItem::RetailItem(){
    description="null";
    unitsOnHand=0;
    price=0.0;
}
RetailItem::RetailItem(string d,int u,float p){
    description=d;
    unitsOnHand=u;
    price=p;
}
void RetailItem::setDesc(string d){
    description=d;
}
void RetailItem::setUOH(int u){
    unitsOnHand=u;
}

void RetailItem::setPrice(float p){
    price=p;
}
void RetailItem::setAll(string d,int u,float p){
    description=d;
    unitsOnHand=u;
    price=p;
}
string RetailItem::getDesc(){
    return description;
}
int RetailItem::getUOH(){
    return unitsOnHand;
}
float RetailItem::getPrice(){
    return price;
}