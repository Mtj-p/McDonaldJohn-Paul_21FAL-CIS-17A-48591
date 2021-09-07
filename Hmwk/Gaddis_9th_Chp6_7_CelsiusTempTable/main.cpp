/*
 * file: Gaddis_9th_Chp6_7_CelsiusTempTable
 * Author: John-Paul McDonald
 * Date: 09/06/2021
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
//Global Constants
//Universal Math, Physics, Conversions, Higher Dimensions
//Prototypes
float celsius(float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize Random Number Seed
    
    //Declare Variables
    float fahrenH = 0;
    float cels = 0;
    //Initialize Variables
    
    //Process the inputs -> outputs
    cout<<"Table demonstrating Fahrenheit Conversion: \n";
    for(int i=0; i<21;i++){
        cout<<"F: "<<fixed<<setprecision(2)<<setw(5)<<fahrenH<<setw(10)<<"C: ";
        cels = celsius(fahrenH);
        cout<<cels<<endl;
        fahrenH++;
    }
    //Display the results, verify inputs
    
    //Clean up and exit
    return 0;
}

float celsius(float fahren){
    float convert = 0;
    convert = ((fahren-32)*5)/9;
    return convert;
}
