/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Procedure.h
 * Author: mtjp
 *
 * Created on November 16, 2021, 8:30 PM
 */

#ifndef PROCEDURE_H
#define PROCEDURE_H

   
#include <string>
using namespace std;
class Procedure {
private:
    string name;
    string date;
    string doc;
    float charge;
public:
    Procedure(string,string,string,float);
    void setName(string);
    void setDate(string);
    void setDoc(string);
    void setCharge(float);
    string getName();
    string getDate();
    string getDoc();
    float getCharge();

};


#endif /* PROCEDURE_H */

