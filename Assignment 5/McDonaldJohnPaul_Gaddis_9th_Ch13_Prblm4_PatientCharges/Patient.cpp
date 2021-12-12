/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Patient.h"

Patient::Patient(){
    name="null";
    address="null";
    phone="null";
    emergency="null";    
}

Patient::Patient(string n, string a,string p, string e){
    name = n;
    address = a;
    phone = p;
    emergency = e;    
}

void Patient::setName(string n){
    name = n;
}
void Patient::setAddress(string a){
    address = a;
}
void Patient::setPhone(string p){
    phone = p;
}
void Patient::setEmergency(string e){
    emergency = e; 
}
void Patient::setAll(string n, string a,string p, string e){
    name = n;
    address = a;
    phone = p;
    emergency = e;  
}
string Patient::getName(){
    return name;
}
string Patient::getAddress(){
    return address;
}
string Patient::getPhone(){
    return phone;
}
string Patient::getEmergency(){
    return emergency;
}
