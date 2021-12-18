/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Employee.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

Employee::Employee(char a[],char b[],float c){
    strcpy(MyName,a);
    strcpy(JobTitle,b);
    HourlyRate=c;
    HoursWorked=0;
    GrossPay=0;
    NetPay=0;
}

double Employee::Tax(float a){
    double taxes = 0;
    if(a<500){
        taxes=a*.1;
    }
    if(a>=500&&a<1000){
        taxes=a*.2;
    }
    if(a>1000){
        taxes=a*.3;
    }
    return taxes;
}
float Employee::CalculatePay(float a,int b){
    return getNetPay(getGrossPay(a,b));
}
float Employee::getGrossPay(float a,int b){
    float wages = 0 ;
    if(b>50){
        wages = (((b-50)*2*a)+(10*a*1.5)+(40*a));
    }else if(b<=50&&b>40){
        wages = ((b-40)*1.5+(40*a));
    }else if(b<=40){
        wages = b*a;
    }
    return wages;
}
float Employee::getNetPay(float a){
    float theft = Tax(a);
    NetPay=a-theft;
    return NetPay;   
    
}
void Employee::toString(){
    std::cout<<"Name = "<<MyName<<" Title = "<<JobTitle<<std::endl;
    std::cout<<" Hourly Rate = "<<HourlyRate<<" Hours Worked = "<<HoursWorked;
    std::cout<<" Gross Pay = "<<getGrossPay(HourlyRate,HoursWorked);
    std::cout<<" Net Pay = "<<CalculatePay(HourlyRate,HoursWorked)<<std::endl;
}
int Employee::setHoursWorked(int a){
    if(a>0&&a<=84){
        HoursWorked=a;
    }else{
        std::cout<<"Unacceptable Hours Worked"<<std::endl;
    }
    return HoursWorked;
}
float Employee::setHourlyRate(float a){
    if(a>0&&a<=200){
        HourlyRate=a;
    }else{
        std::cout<<"Unacceptable Hourly Rate"<<std::endl;
    }
    return HourlyRate;
}