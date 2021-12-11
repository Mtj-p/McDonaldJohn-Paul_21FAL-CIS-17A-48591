/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Employee.h"

Employee::Employee(std::string newname, int num, std::string hd){
    set(newname,num,hd);
}

void Employee::set(std::string newname,int num,std::string hd) {
    name=newname;
    number=num;
    hiredate=hd;
}
std::string Employee::getName() const{
    return name;
}

int Employee::getNum() const{
    return number;
}
std::string Employee::getHd() const{
    return hiredate;
}