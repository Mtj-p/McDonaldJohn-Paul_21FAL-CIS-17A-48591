/*
 * file: 
 * Author: John-Paul McDonald
 * Date: 
 * Purpose: 
 */

//System Libraries
#include "Patient.h"
#include "Procedure.h"
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
//Global Constants
//Universal Math, Physics, Conversions, Higher Dimensions
//Prototypes
//Execution Begins Here
int main(int argc, char** argv) {
    
    Patient Zero("First Middle Last","1111 Riverside Ln., Riverside CA, 92506","9519991111","Steve Jobs, 9099099099");
    Procedure x("Physical Exam","Today's Date","Dr. Irvine",250.00);
    Procedure y("X-ray","Today's Date","Dr. Jamison",500.00);
    Procedure z("Blood Test","Today's Date","Dr. Smith",200.00);
    cout<<Zero.getName()<<" "<<Zero.getAddress()<<" "<<Zero.getPhone()<<" "<<Zero.getEmergency()<<endl;
    string temp;
    float temp1;
    temp=x.getName();cout<<temp<<"\t\t";temp=y.getName();cout<<temp<<"\t\t\t";temp=z.getName();cout<<temp<<endl;
    temp=x.getDate();cout<<temp<<"\t\t";temp=y.getDate();cout<<temp<<"\t\t";temp=z.getDate();cout<<temp<<endl;
    temp=x.getDoc();cout<<temp<<"\t\t";temp=y.getDoc();cout<<temp<<"\t\t";temp=z.getDoc();cout<<temp<<endl;  cout<<fixed<<setprecision(2);  
    temp1=x.getCharge();cout<<temp1<<"\t\t\t";temp1=y.getCharge();cout<<temp1<<"\t\t\t";temp1=z.getCharge();cout<<temp1<<endl;
    float tcharge = x.getCharge()+y.getCharge()+z.getCharge();
    cout<<"Total charge: "<<tcharge<<endl;
    return 0;
}
