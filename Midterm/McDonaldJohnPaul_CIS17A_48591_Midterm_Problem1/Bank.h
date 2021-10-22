/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bank.h
 * Author: jaymc
 *
 * Created on October 21, 2021, 11:18 AM
 */

#ifndef BANK_H
#define BANK_H

#include <string>
#include <vector>

using std::string;

struct Bank {
    string accnum;
    string name;
    string address;
    float balance;
    int numrec;
    int numcheck;
    int numdeposit;
    vector<float> record;
};

#endif /* BANK_H */

