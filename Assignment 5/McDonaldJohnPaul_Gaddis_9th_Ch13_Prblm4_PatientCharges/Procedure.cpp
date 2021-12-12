/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Procedure.h"

Procedure::Procedure(){
    name="null";
    date="null";
    practitioner="null";
    charge=0.0;
}

Procedure::Procedure(string n,string d,string p,float c){
    name=n;
    date=d;
    practitioner=p;
    charge=c;
}
void Procedure::setName(string n){
    name=n;
}
void Procedure::setDate(string d){
    date=d;
}
void Procedure::setPrac(string p){
    practitioner=p;
}
void Procedure::setCharge(float c){
    charge=c;
}
void Procedure::setAll(string n,string d,string p,float c){
    name=n;
    date=d;
    practitioner=p;
    charge=c;
}
string Procedure::getName(){
    return name;
}
string Procedure::getDate(){
    return date;
}
string Procedure::getPrac(){
    return practitioner;
}
float Procedure::getCharge(){
    return charge;
}