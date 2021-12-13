/*
 * file: McDonaldJohnPaul_Gaddis_9th_Ch16_Prblm1_DateExceptions
 * Author: John-Paul McDonald
 * Date: 12/12/2021
 * Purpose: To throw exceptions for invalid month/date inputs.
 */

//System Libraries
#include <iostream>
#include "Date.h"
using namespace std;

//User Libraries
//Global Constants
//Universal Math, Physics, Conversions, Higher Dimensions
//Prototypes
//Execution Begins Here
int main(int argc, char** argv) {
    try{
    int m,d,y;//inputs for Month, Date, and Year
    cout<<"Month: ";
    cin>>m;
    cout<<"Day: ";
    cin>>d;
    cout<<"Year: ";
    cin>>y;
    cout<<endl;
    Date today(m,d,y);//constructor
    today.pdnum();//display functions for each type of date display
    today.pdmf();
    today.pddf();
    }
    
    catch(Date::NegativeMonth e){
        cout<<"Error: "<<e.getValue()<<" is invalid for month."<<endl;
    }
    catch(Date::NegativeDay e){
        cout<<"Error: "<<e.getValue()<<" is invalid for day."<<endl;
    }
    return 0;
}
