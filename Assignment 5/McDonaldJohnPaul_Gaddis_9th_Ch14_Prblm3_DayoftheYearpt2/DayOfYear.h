/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DayOfYear.h
 * Author: jaymc
 *
 * Created on December 12, 2021, 11:46 AM
 */

#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H

#include <iostream>
#include <string>

using namespace std;

class DayOfYear{
private:
    int doty;
    int day;
    int cmonth;
    string conv;
    void convert();
public:
    DayOfYear();
    DayOfYear(int);
    DayOfYear(string,int);
    void setDayOfYear(int);
    void print();
    static string months[];
    static int correctdays[];
    DayOfYear& operator++();
    DayOfYear operator++(int);
    DayOfYear& operator--();
    DayOfYear operator--(int);
};

#endif /* DAYOFYEAR_H */

