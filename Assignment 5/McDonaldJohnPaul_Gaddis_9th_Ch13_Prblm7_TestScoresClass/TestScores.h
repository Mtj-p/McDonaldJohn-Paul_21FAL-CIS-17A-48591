/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TestScores.h
 * Author: jaymc
 *
 * Created on December 12, 2021, 5:55 AM
 */

#ifndef TESTSCORES_H
#define TESTSCORES_H

class TestScores{
private:
    float test1;
    float test2;
    float test3;
    float tavg;
public:
    TestScores();
    TestScores(float,float,float);
    void setT1(float);
    void setT2(float);
    void setT3(float);
    void setAll(float,float,float);
    float setAvg();
    float getT1();
    float getT2();
    float getT3();
    float getAvg();
};


#endif /* TESTSCORES_H */

