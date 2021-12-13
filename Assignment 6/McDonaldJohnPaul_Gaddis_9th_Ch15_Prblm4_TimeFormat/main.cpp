/*
 * file: 
 * Author: John-Paul McDonald
 * Date: 
 * Purpose: 
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
    user.setTime(h,s);
    cout<<"\n"<<user.getTime()<<"\n"<<user.getHour();
    
    return 0;
}
