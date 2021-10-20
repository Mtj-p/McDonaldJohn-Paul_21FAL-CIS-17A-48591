/* 
 * File:   main.cpp
 * Author: John-Paul McDonald
 * Created on DATE AND TIME HERE
 * Purpose:  Even, Odd Vectors and Array Columns Even, Odd
 * Note:  Check out content of Sample conditions in Hacker Rank
 * Input size of integer array, then array, output columns of Even, Odd
 * Vectors then Even, Odd 2-D Array
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <vector>  //vectors<>
#include <iomanip> //Format setw(),right
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=2;//Only 2 columns needed, even and odd

//Function Prototypes Here
void read(vector<int> &, vector<int> &);
void copy(vector<int>, vector<int>,int [][COLMAX]);
void prntVec(vector<int>, vector<int>,int);//int n is the format setw(n)
void prntAry(const int [][COLMAX],int,int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=80;           //No more than 80 rows
    int array[ROW][COLMAX];     //Really, just an 80x2 array, even vs. odd
    vector<int> even(0),odd(0); //Declare even,odd vectors
    
    //Input data and place even in one vector odd in the other
    read(even,odd);
    
    //Now output the content of the vectors
    //          setw(10)
    
    prntVec(even,odd,10);//Input even, odd vectors with setw(10);
    
    //Copy the vectors into the 2 dimensional array
    copy(even,odd,array);
    
    //Now output the content of the array
    //                              setw(10)
    prntAry(array,even.size(),odd.size(),10);//Same format as even/odd vectors
    
    //Exit
    return 0;
}

void read(vector<int> &a, vector<int> &b){
    int temp1=0;
    int arr1=0;
    cout<<"Input the number of integers to input."<<endl<<"Input each number."<<endl;
    cin>>temp1;
   // cout<<temp1<<endl;
    for(int j=0;j<temp1;j++){
        cin>>arr1;
        //cout<<arr1<<endl;
        if(arr1%2==0){
            a.push_back(arr1);
        }
        if(arr1%2!=0){
            b.push_back(arr1);
        }
    }
}
void copy(vector<int> a, vector<int> b,int c[][COLMAX]){
    int temp1=a.size();
    int temp2=b.size();
    for (int i=0;i<temp1;i++){
        c[i][0]=a[i];
    }
    for (int j=0;j<temp2;j++){
        c[j][1]=b[j];
    }
}
void prntVec(vector<int> a, vector<int> b,int c){
    int temp1=a.size();
    int temp2=b.size();
    cout<<"    "<<"Vector"<<"      "<<"Even"<<"       "<<"Odd"<<endl;
    if(temp1>temp2){
        for(int i=0;i<temp2;i++){
            cout<<setw(20)<<a[i]<<setw(10)<<b[i]<<endl;
        }
        for(int i=temp2;i<temp1;i++){
            cout<<setw(20)<<a[i]<<setw(10)<<"  "<<endl;
        }
    }
    if(temp2>temp1){
        for(int i=0;i<temp1;i++){
            cout<<setw(20)<<a[i]<<setw(10)<<b[i]<<endl;
        }
        for(int i=temp1;i<temp2;i++){
            cout<<setw(20)<<"  "<<setw(10)<<b[i]<<endl;
        }
    }
}//int n is the format setw(n)
void prntAry(const int a[][COLMAX],int b,int c,int d){
    cout<<"     "<<"Array"<<"      "<<"Even"<<"       "<<"Odd"<<endl;
    if(b>c){
        for(int i=0;i<c;i++){
            cout<<setw(20)<<a[i][0]<<setw(10)<<a[i][1]<<endl;
        }
        for(int i=c;i<b;i++){
            cout<<setw(20)<<a[i][0]<<setw(10)<<"  "<<endl;
        }
    }
    if(c>b){
        for(int i=0;i<b;i++){
            cout<<setw(20)<<a[i][0]<<setw(10)<<a[i][1]<<endl;
        }
        for(int i=b;i<c;i++){
            cout<<setw(20)<<"  "<<setw(10)<<a[i][1]<<endl;
        }
    }
    
    
}
