/*
 * file: 
 * Author: John-Paul McDonald
 * Date: 
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include "Essay.h"
using namespace std;

//User Libraries
//Global Constants
//Universal Math, Physics, Conversions, Higher Dimensions
//Prototypes
//Execution Begins Here
int main(int argc, char** argv) {
    Essay myessay(0.0);
    Essay friendssay(0.0);
    friendssay.setEssay(15,16.4,19.4,20.2);
    myessay.setEssay(29.9,20,18.5,30);
    cout<<"My score on the essay is a "<<myessay.getScore()<<".\n";
    cout<<"My friend's score was only a "<<friendssay.getScore()<<".\n";
    cout<<"At least they passed?\n";
    return 0;
}
