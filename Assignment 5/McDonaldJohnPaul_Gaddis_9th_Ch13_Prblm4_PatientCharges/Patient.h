/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Patient.h
 * Author: jaymc
 *
 * Created on December 12, 2021, 4:20 AM
 */

#ifndef PATIENT_H
#define PATIENT_H

#include <string>
using namespace std;

class Patient{
private:
    string name;
    string address;
    string phone;
    string emergency;
public:
    Patient();
    Patient(string,string,string,string);
    void setName(string);
    void setAddress(string);
    void setPhone(string);
    void setEmergency(string);
    void setAll(string,string,string,string);
    string getName();
    string getAddress();
    string getPhone();
    string getEmergency();
};

#endif /* PATIENT_H */

