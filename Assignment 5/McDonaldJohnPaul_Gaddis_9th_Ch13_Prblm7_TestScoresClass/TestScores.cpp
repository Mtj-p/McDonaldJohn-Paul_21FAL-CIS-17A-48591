/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "TestScores.h"

TestScores::TestScores(){
    test1=0.0;
    test2=0.0;
    test3=0.0;
    tavg=0.0;
}
TestScores::TestScores(float a,float b,float c){
    test1=a;
    test2=b;
    test3=c;
    tavg=setAvg();
}
void TestScores::setT1(float a){
    test1=a;
    tavg=setAvg();
}
void TestScores::setT2(float b){
    test2=b;
    tavg=setAvg();
}
void TestScores::setT3(float c){
    test3=c;
    tavg=setAvg();
}
void TestScores::setAll(float a,float b,float c){
    test1=a;
    test2=b;
    test3=c;
    tavg=setAvg();
}
float TestScores::setAvg(){
    tavg=(test1+test2+test3)/3;
}
float TestScores::getT1(){
    return test1;
}
float TestScores::getT2(){
    return test2;
}
float TestScores::getT3(){
    return test3;
}

float TestScores::getAvg(){
    return tavg;
}