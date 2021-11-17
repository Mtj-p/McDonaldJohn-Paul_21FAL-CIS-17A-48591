/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Patient.cpp
 * Author: mtjp
 * 
 * Created on November 16, 2021, 8:32 PM
 */

#include "Patient.h"

Patient::Patient(std::string Name,std::string Address,std::string Phone,std::string Emergency) {
    this->Name=Name;
    this->Address=Address;
    this->Phone=Phone;
    this->Emergency=Emergency;
}
    void Patient::setName(string name){
        Name=name;
    }
    void Patient::setAddress(string address){
        Address=address;
    }
    void Patient::setPhone(string phone){
        Phone=phone;
    }
    void Patient::setEmergency(string emergency){
        Emergency=emergency;
    }


std::string Patient::getName(){
    return Name;
}
std::string Patient::getAddress(){
    return Address;
}

std::string Patient::getPhone(){
    return Phone;
}
std::string Patient::getEmergency(){
    return Emergency;
}

