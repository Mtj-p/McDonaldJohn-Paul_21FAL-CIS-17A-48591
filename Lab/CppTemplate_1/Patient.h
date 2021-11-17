/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Patient.h
 * Author: mtjp
 *
 * Created on November 16, 2021, 8:32 PM
 */

#ifndef PATIENT_H
#define PATIENT_H

#include <string>
using namespace std;

class Patient {
private:
    std::string Name;
    std::string Address;
    std::string Phone;
    std::string Emergency;
public:
    Patient(std::string,std::string,std::string,std::string);
    std::string getName();
    std::string getAddress();
    std::string getPhone();
    std::string getEmergency();
    void setName(string);
    void setAddress(string);
    void setPhone(string);
    void setEmergency(string);
};


#endif /* PATIENT_H */

