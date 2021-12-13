/*
 * file: McDonaldJohnPaul_Gaddis_9th_Ch16_Prblm4_AbsValueTemplate
 * Author: John-Paul McDonald
 * Date: 12/12/2021
 * Purpose: Create a function template that accepts an argument and returns
 *          it's absolute value (no sign).
 */

//System Libraries
#include <iostream>
using namespace std;

template <class T1>
T1 absValue(T1 number){
    if(number<0){
        return number*-1;
    }
    else{
        return number;
    }
}

int main(int argc, char** argv) {
    int temp = 0;
    for (int i = -5; i<5;i++){
        temp = absValue(i);
        cout<<"i "<<i<<" temp "<<temp<<endl;
    }
    cout<<endl;
    float temp2 = 0;
    for (float i = -5.1; i<5.1;i++){
        temp2 = absValue(i);
        cout<<"i "<<i<<" temp2 "<<temp2<<endl;
    }
    cout<<endl;
    double temp3 = 0;
    for (double i = -5.3432; i<5.3432;i++){
        temp3 = absValue(i);
        cout<<"i "<<i<<" temp3 "<<temp3<<endl;
    }
    cout<<endl;
    char temp4 = 0;
    for (char i = -5; i<5;i++){
        temp4 = absValue(i);
        cout<<"i "<<static_cast<char>(i+40)<<" temp4 "<<static_cast<char>(temp4+40)<<endl;
    }
    cout<<endl;
    
    return 0;
}
