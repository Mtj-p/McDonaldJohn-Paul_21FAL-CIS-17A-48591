/*
 * file: McDonaldJohnPaul_Gaddis_9th_Ch14_Prblm1_NumbersClass
 * Author: John-Paul McDonald
 * Date: 12/12/2021
 * Purpose: Display numbers using a numbers class and a static string array
 * 
 * note: I had trouble with lines 27 and 28 of my Numbers.h class - I kept getting
 * an error that the array could not be initialized within the class, and then 
 * when I moved it outside of the class into the constructor I was getting a
 * "qualified-id in declaration before '[' token" error. As of now, the program is running
 * after I changed the declaration to static const string array[size] = {initialization};
 * Any advice on why I was receiving these errors would be appreciated.
 */

//System Libraries
#include <iostream>
#include "Numbers.h"
using namespace std;


int main(int argc, char** argv) {
    
    cout<<"While you input an integer from 1-9999 the program will continue to run. \nInput a number outside the range to end.";
    int number=1;
    while(number>0&&number<10000){
        cout<<"\nNumber to print: ";
        cin>>number;
        if(number>0&&number<10000){
            Numbers num(number);
            num.print();
        }   
    }
    cout<<"\nThank you"<<endl;
    return 0;
}
