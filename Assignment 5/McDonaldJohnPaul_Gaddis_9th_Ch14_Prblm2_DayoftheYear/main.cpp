/*
 * file: McDonaldJohnPaul_Gaddis_9th_Ch14_Prblm2_DayoftheYear
 * Author: John-Paul McDonald
 * Date: 12/12/2021
 * Purpose: Display days of the year with the assist of a static string array
 */

//System Libraries

#include <iostream>
#include "DayOfYear.h"
using namespace std;


int main(int argc, char** argv) {
    
    for(int i=1;i<366;i++){
        DayOfYear today(i);
        today.print();
    }
    return 0;
}
