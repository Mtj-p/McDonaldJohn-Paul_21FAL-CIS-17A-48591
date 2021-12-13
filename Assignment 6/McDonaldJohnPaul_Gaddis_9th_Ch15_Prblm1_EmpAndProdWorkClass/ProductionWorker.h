/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ProductionWorker.h
 * Author: jaymc
 *
 * Created on December 12, 2021, 6:57 PM
 */

#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.h"

class ProductionWorker : public Employee{
protected:
    int shift;
    float payrate;
    
public:
    
    ProductionWorker() : Employee (){
        shift = 0;
        payrate = 0;
    }
    ProductionWorker(string na, string nu, string hd) : Employee (na, nu, hd){
        shift = 0;
        payrate = 0;
    }
    
    void setshift(int);
    void setpr(float);
    void setboth(int,float);
    int getshift();
    float getrate();
    string shiftname(int);
    
};

#endif /* PRODUCTIONWORKER_H */

