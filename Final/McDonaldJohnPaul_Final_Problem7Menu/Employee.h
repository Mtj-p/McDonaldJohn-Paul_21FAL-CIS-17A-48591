/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Employee.h
 * Author: jaymc
 *
 * Created on December 17, 2021, 11:35 PM
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee{
private:
    double Tax(float);
    char MyName[20];
    char JobTitle[20];
    float HourlyRate;
    int HoursWorked;
    float GrossPay;
    float NetPay;
public:
    Employee(char[],char[],float);
    float CalculatePay(float,int);
    float getGrossPay(float,int);
    float getNetPay(float);
    void toString();
    int setHoursWorked(int);
    float setHourlyRate(float);
};

#endif /* EMPLOYEE_H */

