/*
 * file: McDonaldJohnPaul_Gaddis_9th_Ch13_Prblm1_Date
 * Author: John-Paul McDonald
 * Date: 12/12/2021
 * Purpose: Demonstrate a date display class
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
    return 0;
}
