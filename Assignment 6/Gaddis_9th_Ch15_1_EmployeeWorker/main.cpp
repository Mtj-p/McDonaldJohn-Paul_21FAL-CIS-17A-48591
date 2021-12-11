/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jaymc
 *
 * Created on November 30, 2021, 6:10 AM
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>

#include "Employee.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    
    string y = "John";
    int x = 1020;
    string d = "October 10";
    
    Employee me(y,x,d);
    cout<<"Name: "<<me.getName()<<" Number: "<<me.getNum()<<" Date: "<<me.getHd()<<endl;
    return 0;
}

