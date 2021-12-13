/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MilTime.h
 * Author: jaymc
 *
 * Created on December 12, 2021, 8:03 PM
 */

#ifndef MILTIME_H
#define MILTIME_H
#include "Time.h"
#include <string>
using namespace std;
class MilTime : public Time{
protected:
    int milHours;
    int milSeconds;
public:
    class BadHour{
    private:
        int value;
    public:
        BadHour(int val){
            value = val;
        }
        int getValue() const{
            return value;
        }
    };
    class BadSeconds{
    private:
        int value;
    public:
        BadSeconds(int val){
            value = val;
        }
        int getValue() const{
            return value;
        }
    };
    MilTime():Time(){
        milHours=0;
        milSeconds=0;
    }
    MilTime(int a,int b,int c):Time(a,b,c){
        milHours=0;
        milSeconds=0;
    }
    void setTime(int,int);
    string getHour();
    string getTime();
    
};

#endif /* MILTIME_H */

