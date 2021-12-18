/*
 * file: McDonaldJohnPaul_Final_Problem4
 * Author: John-Paul McDonald
 * Date: 12/17/2021
 * Purpose: Problem 4 Balance and Interest
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include "SavingsAccount.h"
using namespace std;

//User Libraries
//Global Constants
//Universal Math, Physics, Conversions, Higher Dimensions
//Prototypes
//Execution Begins Here
int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    SavingsAccount mine(-300);
    for(int i=1;i<=10;i++){
        mine.Transaction((float)(rand()%500)*(rand()%3-1));
    }
    mine.toString();
    cout.precision(2);
    cout<<fixed<<"Balance after 7 years given 10% interest = "
        <<mine.Total((float)(0.10),7)<<endl;
    cout<<fixed<<"Balance after 7 years given 10% interest = "
        <<mine.TotalRecursive((float)(0.10),7)
        <<" Recursive Calculation "<<endl;
    return 0;
}
