/*
 * file: McDonaldJohnPaul_Gaddis_9th_Ch16_Prblm2_TimeFormatExceptions
 * Author: John-Paul McDonald
 * Date: 12/12/2021
 * Purpose: To throw exceptions for invalid hour/second inputs.
 */

//System Libraries
#include "DateTime.h"
#include "MilTime.h"
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    MilTime user;
    int h=0;
    int s=0;
    cout<<"Please enter the time in military format \n";
    cout<<"Hour: ";
    cin>>h;
    cout<<"Seconds: ";
    cin>>s;
    try{
    user.setTime(h,s);
    }
    catch(MilTime::BadHour(e)){
        cout<<"Error: "<<e.getValue()<<" is an invalid hour amount.\n";
        exit(1);
    }    
    catch(MilTime::BadSeconds(e)){
        cout<<"Error: "<<e.getValue()<<" is an invalid seconds amount.\n";        
        exit(2);
    }
    cout<<"\n"<<user.getTime()<<"\n"<<user.getHour();
    
    return 0;
}
