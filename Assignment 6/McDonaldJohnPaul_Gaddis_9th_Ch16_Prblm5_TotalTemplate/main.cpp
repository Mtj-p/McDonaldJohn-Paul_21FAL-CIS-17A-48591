/*
 * file: McDonaldJohnPaul_Gaddis_9th_Ch16_Prblm5_TotalTemplate
 * Author: John-Paul McDonald
 * Date: 12/12/2021
 * Purpose: Create a template that keeps a running total despite what
 *          types are passed entered by the user. This template breaks if you
 *          try to input a character and I am unsure why.
 */

//System Libraries
#include <iostream>
using namespace std;

template <class T>
T runTotal(T number){
    float arr1[10]{1.0,2.4,3.6,9.8,15.2,100.25,24.1,44.4,42};
    double arr2[10]{1.2342,24.333,25.242,626.66,2100,2342.2,252.2,1,231,2435.6};
    int arr3[10]{22,25,29,27,20,14,6,5,8,100};
    char arr4[10]{'q','w','e','r','t','y','u','i','o','p'};
    for(int i=0;i<10;i++){
        number+=(arr1[i]);
        number+=(arr2[i]);
        number+=(arr3[i]);
        number+=(arr4[i]);      
    }
    return number;
    
};

template <class U>
U userTotal(U number){
    U temp=0;
    U total=0;
    for(int i=0;i<number;i++){
        cin.ignore();
        cout<<"Number: ";
        cin>>temp;
        total+=temp;
    }
    return total;
}
int main(int argc, char** argv) {
    double total=0;
    total = runTotal(total);    
    cout<<"Total : "<<total<<endl;
    int values=0;
    cout<<"Input the number of values you wish to enter: ";
    cin>>values;
    total = userTotal(values);
    cout<<"User Total: "<<total<<endl;
    return 0;
}
