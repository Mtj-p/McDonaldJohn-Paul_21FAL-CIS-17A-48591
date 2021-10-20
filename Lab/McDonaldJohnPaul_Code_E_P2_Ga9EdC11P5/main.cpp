/* 
 * File:   Ga9EdC11P5
 * Author: John-Paul McDonald
 * Purpose: Weather Statistics
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    
    //Initialize Variables
    enum months {
        January, February, March, April, May, June, July, August, September, October, November, December
    };
    
    float weather[12][3];
    
    for (int i=0;i<12;i++){
        for (int j=0;j<3;j++){
           cin>>weather[i][j];
        }
    }    
    
    for (int i=0;i<6;i++){
        cout<<
        "Enter the total rainfall for the month:"<<endl<<
        "Enter the high temp:"<<endl<<
        "Enter the low temp:"<<endl;
    } 
    
    cout<<"Average monthly rainfall:";
    float avgMR=(weather[0][0]+weather[1][0]+weather[2][0]+weather[3][0]+weather[4][0]+weather[5][0])/6;
    cout<<fixed<<setprecision(2)<<avgMR<<endl;
    
    for(int i=0;i<6;i++){
        for(int j=0;j<3;j++){
            if(weather[i][1]>weather[j][1]){
                float temp=0;
                temp=weather[i][1];
                weather[i][1]=weather[j][1];
                weather[j][1]=temp;
            }
        }
    }
    cout<<"High Temp:"<<fixed<<setprecision(0)<<weather[0][1]<<endl;
    
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(weather[i][2]>weather[j][2]){
                float temp=0;
                temp=weather[i][2];
                weather[i][2]=weather[j][2];
                weather[j][2]=temp;
            }
        }
    }
    
    cout<<"Low Temp:"<<fixed<<setprecision(0)<<weather[5][2]<<endl;
    float avgTemp=0;
    int count=0;
    for(int i=0;i<6;i++){
        avgTemp+=weather[i][1];
        avgTemp+=weather[i][2];
        count+=2;
    }
    avgTemp=avgTemp/count;
    cout<<"Average Temp:"<<fixed<<setprecision(1)<<avgTemp;
    //Process or map Inputs to Outputs
    
    //Display Outputs

    //Exit stage right!
    return 0;
}