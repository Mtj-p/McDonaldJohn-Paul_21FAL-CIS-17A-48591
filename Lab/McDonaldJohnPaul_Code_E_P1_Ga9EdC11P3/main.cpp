/* 
 * File:   Ga9EdC11P3
 * Author: John-Paul McDonald
 * Purpose:  Quarterly Sales
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

struct divisions {
    float fqSales;
    float sqSales;
    float tqSales;
    float frqSales;
};

//Execution Begins Here
int main(int argc, char** argv) {
    float taSales=0;
    float aqSales=0;
    cout<<"North"<<endl<<
    "Enter first-quarter sales:"<<endl<<
    "Enter second-quarter sales:"<<endl<<
    "Enter third-quarter sales:"<<endl<<
    "Enter fourth-quarter sales:"<<endl;
    divisions north;
    cin>>north.fqSales;
    cin>>north.sqSales;
    cin>>north.tqSales;
    cin>>north.frqSales;
    taSales=north.fqSales+north.sqSales+north.tqSales+north.frqSales;
    aqSales=taSales/4;
    cout<<"Total Annual sales:$"<<fixed<<setprecision(2)<<taSales<<endl;
    cout<<"Average Quarterly Sales:$"<<fixed<<setprecision(2)<<aqSales<<endl;
    taSales=0;
    aqSales=0;
    cout<<"West"<<endl<<
    "Enter first-quarter sales:"<<endl<<
    "Enter second-quarter sales:"<<endl<<
    "Enter third-quarter sales:"<<endl<<
    "Enter fourth-quarter sales:"<<endl;
    divisions west;
    cin>>west.fqSales;
    cin>>west.sqSales;
    cin>>west.tqSales;
    cin>>west.frqSales;
    taSales=west.fqSales+west.sqSales+west.tqSales+west.frqSales;
    aqSales=taSales/4;
    cout<<"Total Annual sales:$"<<fixed<<setprecision(2)<<taSales<<endl;
    cout<<"Average Quarterly Sales:$"<<fixed<<setprecision(2)<<aqSales<<endl;
    taSales=0;
    aqSales=0;cout<<"East"<<endl<<
    "Enter first-quarter sales:"<<endl<<
    "Enter second-quarter sales:"<<endl<<
    "Enter third-quarter sales:"<<endl<<
    "Enter fourth-quarter sales:"<<endl;
    divisions east;
    cin>>east.fqSales;
    cin>>east.sqSales;
    cin>>east.tqSales;
    cin>>east.frqSales;
    taSales=east.fqSales+east.sqSales+east.tqSales+east.frqSales;
    aqSales=taSales/4;
    cout<<"Total Annual sales:$"<<fixed<<setprecision(2)<<taSales<<endl;
    cout<<"Average Quarterly Sales:$"<<fixed<<setprecision(2)<<aqSales<<endl;
    taSales=0;
    aqSales=0;cout<<"South"<<endl<<
    "Enter first-quarter sales:"<<endl<<
    "Enter second-quarter sales:"<<endl<<
    "Enter third-quarter sales:"<<endl<<
    "Enter fourth-quarter sales:"<<endl;
    divisions south;
    cin>>south.fqSales;
    cin>>south.sqSales;
    cin>>south.tqSales;
    cin>>south.frqSales;
    taSales=south.fqSales+south.sqSales+south.tqSales+south.frqSales;
    aqSales=taSales/4;
    cout<<"Total Annual sales:$"<<fixed<<setprecision(2)<<taSales<<endl;
    cout<<"Average Quarterly Sales:$"<<fixed<<setprecision(2)<<aqSales;
    taSales=0;
    aqSales=0;
    return 0;
}