/*
 * file: McDonaldJohnPaul_Gaddis_9th_Ch14_Prblm2_DayoftheYear
 * Author: John-Paul McDonald
 * Date: 12/12/2021
 * Purpose: Modified the constructor of DayOfYear to take the parameters
 * string month, int day -- terminates if invalid ranges for month or days.
 * Overloaded the operators ++/-- prefix && postfix. Demonstrated their 
 * effectiveness by incrementing and decrementing past the pivotal Dec. 31/Jan. 1
 */

//System Libraries

#include <iostream>
#include <string>
#include "DayOfYear.h"
using namespace std;


int main(int argc, char** argv) {
    string month = "December";
    int days = 27;
    DayOfYear today(month,days);
    today.print();
    for(int i=0;i<10;i++){
        today=today++;
        today.print();    
    }
    for(int i=0;i<10;i++){
        --today;
        today.print();      
    }
    for(int i=0;i<10;i++){
        ++today;
        today.print();
    }
    for(int i=0;i<10;i++){
        today=today--;
        today.print();
    }
    return 0;
}
