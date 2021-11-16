/*
 * file: 
 * Author: John-Paul McDonald
 * Date: 
 * Purpose: 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
#include "Date.h"
//Global Constants
//Universal Math, Physics, Conversions, Higher Dimensions
//Prototypes
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize Random Number Seed
    Date today;
    //Declare Variables
    for(int i=1;i<13;i++){
        for(int j=1;j<32;j++){
            today.setMonth(i);
            today.setDay(j);
            today.setYear(2021);
            today.prntNum();
            cout<<"  ";
            today.prntMnth();
            cout<<"  ";
            today.prntDay();
            cout<<endl;
            if(i==2&&j==28){
                j+=4;
            }
            if((i==4||i==6||i==9||i==11)&&j==30){
                j++;
            }
        }
    }
    //Initialize Variables
    
    //Process the inputs -> outputs
    
    //Display the results, verify inputs
    
    //Clean up and exit
    return 0;
}
