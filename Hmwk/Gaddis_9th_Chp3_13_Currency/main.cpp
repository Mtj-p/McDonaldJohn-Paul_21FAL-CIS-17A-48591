/*
 * file: Gaddis_9th_Ch3_13_Currency
 * Author: John-Paul McDonald
 * Date: 09/03/2021
 * Purpose: Convert USD to EUR and JPY
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
//Global Constants
//Universal Math, Physics, Conversions, Higher Dimensions
//Prototypes
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize Random Number Seed
    
    //Declare Variables
    const float YEN_PER_DOLLAR = 98.93;
    const float EUROS_PER_DOLLAR = .74;
    float convCur = 0;
    
    //Initialize Variables
    
    //Process the inputs -> outputs
    cout<<"US to Yen and Euro calculator. Please input a US dollar amount:";
    cin>>convCur;
    
    //Display the results, verify inputs
    cout<<endl;
    cout.precision(2);
    cout<<fixed<<setw(20)<<convCur*YEN_PER_DOLLAR<<" JPY \n"<<setw(20)<<convCur*EUROS_PER_DOLLAR<<" EUR"<<endl;
    //Clean up and exit
    return 0;
}
