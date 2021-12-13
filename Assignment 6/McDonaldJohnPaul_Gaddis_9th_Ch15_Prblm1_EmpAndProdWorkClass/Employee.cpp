/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Employee.h"

Employee::Employee(){
    name = "null";
    number = "null";
    hiredate = "null";
}
Employee::Employee(string na,string nu,string hd){
    name = na;
    number = nu;
    hiredate = hd;
}
string Employee::getName(){
    return name;
}
string Employee::getNum(){
    return number;
}
string Employee::getHD(){
    return hiredate;
}
void Employee::setName(string n){
    name = n;
}
void Employee::setNum(string n){
    number = n;
}
void Employee::setHD(string h){
    hiredate = h;
}