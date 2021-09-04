/*
 * file: Gaddis_9th_Chp4_10_DaysInAMonth
 * Author: John-Paul McDonald
 * Date: 09/03/21
 * Purpose: Intake a Month/Year and calculate the number of days in that month
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
    
    //Initialize Variables
    int month = 0;
    int year = 0;
    int array[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    //Process the inputs -> outputs
    cout<<"Enter a month (1-12): ";
    cin>>month;
    cout<<"Enter a year: ";
    cin>>year;
   
    //Display the results, verify inputs
    if(year%100==0 && year%400==0){
        if(month==2){
            cout<<array[month-1]+1<<" days"<<endl;
        }
        else{
            cout<<array[month-1]<<" days"<<endl;
        }
    }
    if(year%4==0 && year%100!=0){
        if(month==2){
            cout<<array[month-1]+1<<" days"<<endl;
        }
        else{
            cout<<array[month-1]<<" days"<<endl;
        }
    }
    if(year%4!=0){
        cout<<array[month-1]<<" test days"<<endl;
    }
    //Clean up and exit
    return 0;
}
