/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Procedure.h
 * Author: jaymc
 *
 * Created on December 12, 2021, 4:29 AM
 */

#ifndef PROCEDURE_H
#define PROCEDURE_H

#include <string>
using namespace std;

class Procedure{
private:
    string name;
    string date;
    string practitioner;
    float charge;
public:
    Procedure();
    Procedure(string,string,string,float);
    void setName(string);
    void setDate(string);
    void setPrac(string);
    void setCharge(float);
    void setAll(string,string,string,float);
    string getName();
    string getDate();
    string getPrac();
    float getCharge();
};

#endif /* PROCEDURE_H */

