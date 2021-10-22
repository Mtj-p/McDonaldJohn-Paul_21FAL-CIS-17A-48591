/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GrossPay.h
 * Author: jaymc
 *
 * Created on October 22, 2021, 12:57 AM
 */

#ifndef GROSSPAY_H
#define GROSSPAY_H

#include <string>
using std::string;

struct GrossPay{
    string boss;
    string company;
    string addy;
    string employname;
    float hours;
    float payrate;
    float finalpay;
};


#endif /* GROSSPAY_H */

