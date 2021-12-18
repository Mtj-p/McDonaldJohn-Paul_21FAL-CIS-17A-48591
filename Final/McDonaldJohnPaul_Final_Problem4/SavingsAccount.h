/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SavingsAccount.h
 * Author: jaymc
 *
 * Created on December 17, 2021, 4:48 PM
 */

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

class SavingsAccount{
private:
    float Withdraw(float);
    float Deposit(float);
    float Balance;
    int FreqWithDraw;
    int FreqDeposit;
public:
    SavingsAccount(float);
    void Transaction(float);
    float Total(float=0,int=0);
    float TotalRecursive(float=0,int=0);
    void toString();
};


#endif /* SAVINGSACCOUNT_H */

