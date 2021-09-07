/*
 * file: Gaddis_9th_Chp5_11_Population
 * Author: John-Paul McDonald
 * Date: 09/04/21
 * Purpose: Predict the size of a population of organisms.
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
    float organ = 0; //starting size of population x>2
    float dailypop = 0; //daily population increase (percentage) y>0
    int days = 0; //number of days they will multiply z>1
    int numdays = 0;
    int setsize = 0;
    int numdigs = 0;
    
    //Initialize Variables
    
    //Process the inputs -> outputs
    cout<<"This program predicts the size of a population of organisms.\n"
            "Please be ready to input:\n   The starting number of organisms (greater than 2)\n"
            "   The average daily population increase (non negative)\n"
            "   The number of observed days for the population to multiply (>1)\n";
    
    cout<<"Starting number of organisms(>2): ";
    cin>>organ;
    cout<<"Average daily population Increase(>0): ";
    cin>>dailypop;
    cout<<"Number of observed days for population multiplication(>1): ";
    cin>>days;
    
    //Display the results, verify inputs
    if(organ>2 && dailypop>0 && days>1){
        cout<<"\nPopulation of "<<organ<<" increasing by "<<dailypop<<"% for "<<days<<" days.\n\n";
        while(days>0){
            numdays++;
            cout<<fixed<<setprecision(0)<<"Day "<<setw(5)<<numdays<<setw(30)<<"Today's population: "<<setw(12)<<organ;
            organ=organ+organ*(dailypop/100);
            cout<<fixed<<setprecision(0)<<setw(40)<<"Population increases to: "<<organ<<endl;
            days--;
        }
    }
    else{
        cout<<"\nInput validation invalid. Cannot compute.\n";
    }
    
    //Clean up and exit
    return 0;
}
