/* 
 * File:   main.cpp
 * Author: John-Paul McDonald
 * Created on DATE AND TIME HERE
 * Purpose:  Summing, Finding the Max and Min of an integer array
 * Note:  Look at the output for the format for print
 */

//System Libraries Here
#include <iostream>//cin,cout
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here
void read(int [],int);
int  stat(const int [],int,int &,int &);
void print(const int [],int,int,int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=80;
    int array[SIZE];
    int sizeIn,sum,min,max;
    
    //Input the size of the array you are sorting
    cout<<"Read in a 1 dimensional array of integers find sum/min/max"<<endl;
    cout<<"Input the array size where size <= 20"<<endl;
    cin>>sizeIn;
    
    //Now read in the array of integers
    cout<<"Now read the Array"<<endl;
    read(array,sizeIn);//Read in the array of integers
    
    //Find the sum, max, and min
    sum=stat(array,sizeIn,max,min);//Output the sum, max and min
    
    //Print the results
    print(array,sizeIn,sum,max,min);//print the array, sum, max and min

    //Exit
    return 0;
}


void read(int a[],int b){
    for(int i=0;i<20;i++){
        cin>>a[i];
    }
}
int  stat(const int a[],int b,int &c,int &d){
    for(int i=0;i<b;i++){
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }
    int temp1;
    int temp2=a[0];
    for(int i=0;i<b;i++){
        if(a[i]<a[i+1]){
            temp1=a[i];
            if(temp1<temp2){
                temp2=temp1;
            }
        }
    }
    cout<<"Min  = "<<temp2<<endl;
    temp2=a[0];
    for(int i=0;i<b;i++){
        if(a[i]>a[i+1]){
            temp1=a[i];
            if(temp2<=temp1){
                temp2=temp1;
            }
            
        }
    for(int i=0;i<b-1;i++)
        if(a[i]<a[i+1]){
            temp1=a[i+1];
            if(temp2<temp1){
                temp2=temp1;
            }
            
        }
    }
    cout<<"Max  = "<<temp2<<endl;
    temp1=0;
    for(int i=0;i<b;i++){
        temp1=temp1+a[i];
    }
    return temp1;
    
}
void print(const int a[],int b,int c,int d,int e){
    cout<<"Sum  = "<<c<<endl;
}