/*
 * file: McDonaldJohnPaul_Gaddis_9th_Ch13_Prblm7_TestScoresClass
 * Author: John-Paul McDonald
 * Date: 12/12/2021
 * Purpose: Display the average of test scores.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include "TestScores.h"
using namespace std;


int main(int argc, char** argv) {
    TestScores yt;
    float temp;
    cout<<"Please enter your test scores below (floats)\n";
    cout<<"Test 1: ";
    cin>>temp;
    yt.setT1(temp);
    cout<<"Test 2: ";
    cin>>temp;
    yt.setT2(temp);
    cout<<"Test 3: ";
    cin>>temp;
    yt.setT3(temp);
    cout<<"Average: "<<fixed<<setprecision(2)<<yt.getAvg();
      
    return 0;
}
