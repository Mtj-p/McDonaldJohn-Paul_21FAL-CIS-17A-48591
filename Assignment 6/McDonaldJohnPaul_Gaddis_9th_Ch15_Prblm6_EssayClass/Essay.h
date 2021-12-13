/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Essay.h
 * Author: jaymc
 *
 * Created on December 12, 2021, 8:38 PM
 */

#ifndef ESSAY_H
#define ESSAY_H

#include "GradedActivity.h"

class Essay : public GradedActivity{
protected:
    float essay;
    float grammar;
    float spelling;
    float correctlength;
    float content;
    void calcEssay();
public:
    Essay():GradedActivity(){
        essay=0.0;
        grammar=0.0;
        spelling=0.0;
        correctlength=0.0;
        content=0.0;
    }
    Essay(double s):GradedActivity(s){
        essay=0.0;
        grammar=0.0;
        spelling=0.0;
        correctlength=0.0;
        content=0.0;
    }
    void setEssay(float,float,float,float);
    void setGrammar(float);
    void setSpelling(float);
    void setCorrectLength(float);
    void setContent(float);
    float getGrammar();
    float getSpelling();
    float getCorrectLength();
    float getContent();
    float getEssay();   
    
};

#endif /* ESSAY_H */

