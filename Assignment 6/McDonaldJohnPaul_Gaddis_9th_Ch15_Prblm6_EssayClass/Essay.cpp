/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Essay.h"

void Essay::setEssay(float gram,float spel,float clen,float cont){
    if(gram<=30){grammar=gram;}
    if(spel<=20){spelling=spel;}
    if(clen<=20){correctlength=clen;}
    if(cont<=30){content=cont;}
    calcEssay();
    
}
void Essay::setGrammar(float gram){
    if(gram<=30){grammar=gram;}
    calcEssay();   
}
void Essay::setSpelling(float spel){
    if(spel<=20){spelling=spel;}
    calcEssay();   
}
void Essay::setCorrectLength(float clen){
    if(clen<=20){correctlength=clen;}
    calcEssay();   
}
void Essay::setContent(float cont){
    if(cont<=30){content=cont;}
    calcEssay();   
}
float Essay::getGrammar(){
    return grammar;
}
float Essay::getSpelling(){
    return spelling;
}
float Essay::getCorrectLength(){
    return correctlength;
}
float Essay::getContent(){
    return content;
}
float Essay::getEssay(){
    return essay;
}
void Essay::calcEssay(){
    essay=(grammar+spelling+correctlength+content);
    score=essay;
}