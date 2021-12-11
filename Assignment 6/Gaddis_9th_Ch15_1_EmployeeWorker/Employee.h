/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Employee.h
 * Author: jaymc
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee{
    protected:
        std::string name;
        int number;
        std::string hiredate;
    public:
        Employee(){
            name="empty";
            number=0;
            hiredate="empty";
        }        
        Employee(std::string,int,std::string);
        void set(std::string,int,std::string);
        std::string getName() const;
        int getNum() const;
        std::string getHd() const;
};
#endif /* EMPLOYEE_H */

