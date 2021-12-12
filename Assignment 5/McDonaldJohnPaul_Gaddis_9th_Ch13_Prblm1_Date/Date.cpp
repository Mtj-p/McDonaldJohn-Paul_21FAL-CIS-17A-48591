/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include "Date.h"



Date::Date(){
    month = 0;
    day = 0;
    year = 0;
}//default constructor

Date::Date(int m, int d, int y){
    if(d>0&&d<32){
        day = d;
    }else{
        cout<<"Invalid day\n";
    }
    if(m>0&&m<13){
        month = m;
    }else{
        cout<<"Invalid month\n";
    }
    year = y;
}//the constructor will validate the information when it's called


void Date::pdnum(){
    cout<<month<<"/"<<day<<"/"<<year<<'\n';
}//00/00/0000

void Date::pdmf(){
    switch(month){
        case 0:cout<<"Invalid";break;
        case 1:cout<<"January";break;
        case 2:cout<<"February";break;
        case 3:cout<<"March";break;
        case 4:cout<<"April";break;
        case 5:cout<<"May";break;
        case 6:cout<<"June";break;
        case 7:cout<<"July";break;
        case 8:cout<<"August";break;
        case 9:cout<<"September";break;
        case 10:cout<<"October";break;
        case 11:cout<<"November";break;
        case 12:cout<<"December";break;
        default:cout<<"Invalid";break;
    }
    cout<<" "<<day<<", "<<year<<endl;
}//Month 00, 0000

void Date::pddf(){
    cout<<day<<" ";
    switch(month){
        case 0:cout<<"Invalid";break;
        case 1:cout<<"January";break;
        case 2:cout<<"February";break;
        case 3:cout<<"March";break;
        case 4:cout<<"April";break;
        case 5:cout<<"May";break;
        case 6:cout<<"June";break;
        case 7:cout<<"July";break;
        case 8:cout<<"August";break;
        case 9:cout<<"September";break;
        case 10:cout<<"October";break;
        case 11:cout<<"November";break;
        case 12:cout<<"December";break;
        default:cout<<"Invalid";break;
    }
    cout<<" "<<year<<endl;
}//00 Month 0000