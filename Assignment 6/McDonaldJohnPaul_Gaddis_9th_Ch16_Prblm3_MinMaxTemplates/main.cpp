/*
 * file: McDonaldJohnPaul_Gaddis_9th_Ch16_Prblm3_MinMaxTemplates
 * Author: John-Paul McDonald
 * Date: 12/12/2021
 * Purpose: To create function templates that display the min/max
 *          between arguments with various types.
 */

//System Libraries
#include <iostream>
using namespace std;

template <class T1,class T2>
T1 minimum(T1 &number1,T2 &number2){
    if(number1<number2){
        return number1;
    }
    else{
        return number2;
    }
}
template <class T3,class T4>
T3 maximum(T3 &number1,T4 &number2){
    if(number1>number2){
        return number1;
    }
    else{
        return number2;
    }
}

int main(int argc, char** argv) {
    double i = 20.2;
    double j = 30.5;
    double max = maximum(i,j);
    cout<<"Double max comparison: "<<max<<endl;
    char u = 'e';
    unsigned int p = 82;
    max = maximum<char,unsigned int>(u,p);
    cout<<"Char/Unsigned int max comparison: "<<max<<endl;
    double min = 0;
    int k=16;
    long l=45;
    min=minimum<int,long>(k,l);
    cout<<"Int/Long min comparison: "<<min<<endl;
    float m = 33.4;
    short z = 24;
    min=minimum<float,short>(m,z);
    cout<<"Float/short min comparison: "<<min<<endl;
    return 0;
}
