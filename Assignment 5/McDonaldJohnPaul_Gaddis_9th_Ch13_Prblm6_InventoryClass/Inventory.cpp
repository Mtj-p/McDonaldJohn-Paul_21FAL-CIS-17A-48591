/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Inventory.h"


Inventory::Inventory(){
    itemnum=0;
    quantity=0;
    cost=0;
    tcost=0;
}
Inventory::Inventory(int i,int q,float c){
    if(i>0){
        itemnum=i;
    }else{
        cout<<"\nInvalid Item #";
        itemnum=0;
    }
    if(q>0){
        quantity=q;
    }else{
        cout<<"\nInvalid Quantity";
        quantity=0;
    } 
    if(c>0){
        cost=c;
    }else{
        cout<<"\nInvalid Cost";
        cost=0;
    }   
    setTotalCost();
}
void Inventory::setItemNumber(int i){
    if(i>0){
        itemnum=i;
    }else{
        cout<<"\nInvalid Item #";
        itemnum=0;
    }
}
void Inventory::setQuantity(int q){
    if(q>0){
        quantity=q;
    }else{
        cout<<"\nInvalid Quantity";
        quantity=0;
    } 
    setTotalCost();
}
void Inventory::setCost(float c){
    if(c>0){
        cost=c;
    }else{
        cout<<"\nInvalid Cost";
        cost=0;
    }  
    setTotalCost();
}
void Inventory::setTotalCost(){
    tcost=quantity*cost;
}
int Inventory::getItemNumber(){
    return itemnum;
}
int Inventory::getQuantity(){
    return quantity;
}
float Inventory::getCost(){
    return cost;
}
double Inventory::getTotalCost(){
    return tcost;
}