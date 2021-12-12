/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Date.h
 * Author: jaymc
 *
 * Created on December 12, 2021, 3:44 AM
 */

#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;

class Date{
private://the stored members of the date
    int month;
    int day;
    int year;
public:
    Date();//default constructor
    Date(int,int,int);//constructor to pass the values
    void pdnum();// 00/00/0000
    void pdmf();// Month 00, 0000
    void pddf();// 00 Month 0000
};

#endif /* DATE_H */

