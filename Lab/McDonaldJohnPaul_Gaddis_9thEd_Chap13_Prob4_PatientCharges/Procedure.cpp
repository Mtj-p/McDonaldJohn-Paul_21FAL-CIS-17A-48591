

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Procedure.cpp
 * Author: mtjp
 * 
 * Created on November 16, 2021, 7:58 PM
 */

#include "Procedure.h"
#include <string>
using namespace std;

Procedure::Procedure(string x,string y,string z,float f){
    name=x;
    date=y;
    doc=z;
    charge=f;    
}
    void Procedure::setName(string x){
        name=x;
    }
    void Procedure::setDate(string y){
        date=y; 
    }
    void Procedure::setDoc(string z){
        doc=z; 
    }
    void Procedure::setCharge(float f){
        charge=f;
    }
    string Procedure::getName(){
        return name;
    }
    string Procedure::getDate(){
        return date;
    }
    string Procedure::getDoc(){
        return doc;
    }
    float Procedure::getCharge(){
        return charge;
    }
