/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "DayOfYear.h"
string DayOfYear::months[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};

DayOfYear::DayOfYear(){
    day=0;
    doty=0;    
    conv = "null";
}
DayOfYear::DayOfYear(int d){
    day=d;
    doty=d;
    convert();
}

void DayOfYear::convert(){
    if(doty<0||doty>365){
        cout<<"Days is out of bounds.";
    }
    if(doty>=1&&doty<=31){
        conv=months[0];
    }
    if(doty>=32&&doty<=59){
        conv=months[1];
        doty-=31;
    }
    if(doty>=60&&doty<=90){
        conv=months[2];
        doty-=59;
    }
    if(doty>=90&&doty<=120){
        conv=months[3];
        doty-=90;
    }
    if(doty>=121&&doty<=151){
        conv=months[4];
        doty-=120;
    }
    if(doty>=152&&doty<=181){
        conv=months[5];
        doty-=151;
    }
    if(doty>=182&&doty<=212){
        conv=months[6];
        doty-=181;
    }
    if(doty>=213&&doty<=243){
        conv=months[7];
        doty-=212;
    }
    if(doty>=244&&doty<=273){
        conv=months[8];
        doty-=243;
    }
    if(doty>=274&&doty<=304){
        conv=months[9];
        doty-=273;
    }
    if(doty>=305&&doty<=334){
        conv=months[10];
        doty-=304;
    }
    
    if(doty>=335&&doty<=365){
        conv=months[11];
        doty-=334;
    }
}
void DayOfYear::print(){
    cout<<"Day "<<day<<" would be "<<conv<<" "<<doty<<"."<<endl;
}