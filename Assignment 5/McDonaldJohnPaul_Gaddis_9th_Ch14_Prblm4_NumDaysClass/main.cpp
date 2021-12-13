/*
 * file: McDonaldJohnPaul_Gaddis_9th_Ch14_Prblm4_NumDaysClass
 * Author: John-Paul McDonald
 * Date: 12/12/2021
 * Purpose: The purpose of this program is to demonstrate overloaded
 *          ++/-- prefix and suffix operators as well as +/- boolean 
 *          operators. 
 */

//System Libraries

#include <iostream>
#include "NumDays.h"
using namespace std;


int main(int argc, char** argv) {
    float myhours=35.0;
    NumDays week1(myhours);
    
    cout<<"week 1 base:\t";
    cout<<"Hours: "<<week1.retHours();
    cout<<"\tDays: "<<week1.retDays()<<endl;
    
    cout<<"week1++:\t";
    week1++;
    cout<<"Hours: "<<week1.retHours();
    cout<<"\tDays: "<<week1.retDays()<<endl;
    
    cout<<"++week1:\t";
    ++week1;
    cout<<"Hours: "<<week1.retHours();
    cout<<"\tDays: "<<week1.retDays()<<endl;
    
    cout<<"week1--:\t";
    week1--;
    cout<<"Hours: "<<week1.retHours();
    cout<<"\tDays: "<<week1.retDays()<<endl;
    
    cout<<"--week1:\t";
    --week1;
    cout<<"Hours: "<<week1.retHours();
    cout<<"\tDays: "<<week1.retDays()<<endl;
    
    float yourhours=15.0;
    NumDays week2(yourhours);
    
    cout<<"\nweek 1 base:\t";
    cout<<"Hours: "<<week1.retHours();
    cout<<"\tDays: "<<week1.retDays()<<endl;
    
    cout<<"week 2 base:\t";
    cout<<"Hours: "<<week2.retHours();
    cout<<"\tDays: "<<week2.retDays()<<endl;
      
    
    cout<<"week 3 base:\t";
    NumDays week3(0);
    cout<<"Hours: "<<week3.retHours();
    cout<<"\tDays: "<<week3.retDays()<<endl;
    
    cout<<"\nweek 3 = week2 + week1\t";
    week3 = week2 + week1;
    cout<<"Hours: "<<week3.retHours();
    cout<<"\tDays: "<<week3.retDays()<<endl;
    
    cout<<"week 3 = week1 + week2\t";
    week3 = week1 + week2;
    cout<<"Hours: "<<week3.retHours();
    cout<<"\tDays: "<<week3.retDays()<<endl;
    
    cout<<"week 3 = week2 - week1\t";
    week3 = week2 - week1;
    cout<<"Hours: "<<week3.retHours();
    cout<<"\tDays: "<<week3.retDays()<<endl;
    
    cout<<"week 3 = week1 - week2\t";
    week3 = week1 - week2;
    cout<<"Hours: "<<week3.retHours();
    cout<<"\tDays: "<<week3.retDays()<<endl;
    return 0;
}
