/*
 * file: Gaddis_9th_Chp3_12_CelsiustoFahrenheit
 * Author: John-Paul McDonald
 * Date: 09/1/201
 * Purpose: Celsius to Fahrenheit
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
//Global Constants
//Universal Math, Physics, Conversions, Higher Dimensions
//Prototypes
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize Random Number Seed
    
    //Declare Variables
    float Cels = 0; //Celsius
    float Fahr = 0; //Fahrenheit
    //Initialize Variables
    cout<<"Please input a Celsius value: ";
    //Process the inputs -> outputs
    cin>>Cels;
    Fahr = ((Cels*9)/5)+32;
    cout<<endl<<Fahr<<" degrees Fahrenheit"<<endl;
    //Display the results, verify inputs
    
    //Clean up and exit
    return 0;
}
