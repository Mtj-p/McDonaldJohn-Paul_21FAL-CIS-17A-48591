/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Employee.h
 * Author: jaymc
 *
 * Created on December 12, 2021, 6:51 PM
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
using namespace std;

class Employee{
protected:
    string name;
    string number;
    string hiredate;
public:
    Employee();
    Employee(string,string,string);
    string getName();
    string getNum();
    string getHD();
    void setName(string);
    void setNum(string);
    void setHD(string);
};

#endif /* EMPLOYEE_H */

