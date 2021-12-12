/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Inventory.h
 * Author: jaymc
 *
 * Created on December 12, 2021, 5:19 AM
 */

#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
#include <iostream>
using namespace std;

class Inventory{
private:
    int itemnum;
    int quantity;
    float cost;//we don't sell anything that expensive
    double tcost;//a quantity * a float might be a double
    //total cost is going to become a stale member unless I call setTotalCost within every set function
public:
    Inventory();
    Inventory(int,int,float);
    void setItemNumber(int);
    void setQuantity(int);
    void setCost(float);
    void setTotalCost();
    int getItemNumber();
    int getQuantity();
    float getCost();
    double getTotalCost();
};


#endif /* INVENTORY_H */

