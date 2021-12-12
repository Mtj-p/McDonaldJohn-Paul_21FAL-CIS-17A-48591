/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RetailItem.h
 * Author: jaymc
 *
 * Created on December 12, 2021, 5:04 AM
 */

#ifndef RETAILITEM_H
#define RETAILITEM_H

#include <string>
using namespace std;

class RetailItem{
private:
    string description;
    int unitsOnHand;
    float price;//I'm not selling anything worth a double
public:
    RetailItem();
    RetailItem(string,int,float);
    void setDesc(string);
    void setUOH(int);
    void setPrice(float);
    void setAll(string,int,float);
    string getDesc();
    int getUOH();
    float getPrice();
};

#endif /* RETAILITEM_H */

