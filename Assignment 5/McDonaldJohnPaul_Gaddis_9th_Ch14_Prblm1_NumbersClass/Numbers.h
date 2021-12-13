/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Numbers.h
 * Author: jaymc
 *
 * Created on December 12, 2021, 7:51 AM
 */

#ifndef NUMBERS_H
#define NUMBERS_H

#include <iostream>
#include <string>

using namespace std;

class Numbers{
private:
    int number;
    string hundred = " hundred";
    string thousand = " thousand";
    static const string lessThan20[20]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    static const string tens[10]={"","ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
public:
    Numbers();
    Numbers(int);
    void print();
};


#endif /* NUMBERS_H */

