/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NumDays.h
 * Author: jaymc
 *
 * Created on December 12, 2021, 5:00 PM
 */

#ifndef NUMDAYS_H
#define NUMDAYS_H

#include <string>
using namespace std;

class NumDays{
private:
    float hours;    
    float days; // this will need to be constantly updated or else it will become stale
    float calcDays();
public:
    NumDays();
    NumDays(float);
    void setHours(float);
    float retDays();
    float retHours();
    NumDays operator + (const NumDays &);
    NumDays operator - (const NumDays &);
    NumDays operator++();
    NumDays operator++(int);
    NumDays operator--();
    NumDays operator--(int);  
    
};

#endif /* NUMDAYS_H */

