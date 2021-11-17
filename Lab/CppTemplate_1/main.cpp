/*
 * file: 
 * Author: John-Paul McDonald
 * Date: 
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include "Procedure.h"
#include "Patient.h"
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
    cout<<"test"<<endl;
    return 0;
}
