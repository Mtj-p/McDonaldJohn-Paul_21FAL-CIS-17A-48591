/*
 * file: McDonaldJohnPaul_Gaddis_9th_Ch15_Prblm1_EmployeeAndProductionWorkerClasses
 * Author: John-Paul McDonald
 * Date: 12/12/2021
 * Purpose: Create a ProductionWorker class that is derived from Employee class and
 *          demonstrate it's functionality.
 */

//System Libraries
#include <iostream>
#include "ProductionWorker.h"
using namespace std;

int main(int argc, char** argv) {
   
    ProductionWorker steve("Steve","1234","12/12/2021");
    steve.setboth(2,24.50);

    cout<<"Our worker: "<<steve.getName()<<"(employee #"<<steve.getNum()
            <<") was hired on "<<steve.getHD()<<". \nHe primarily works the "
            <<steve.shiftname(steve.getshift())<<" shift.";
    cout<<"\n"<<steve.getName()<<" was hired at $"<<steve.getrate()<<" per hour."<<endl;
    return 0;
}
