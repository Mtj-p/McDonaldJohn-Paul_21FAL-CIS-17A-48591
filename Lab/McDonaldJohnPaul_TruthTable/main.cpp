/* 
 * File:   main.cpp
 * Author: John-Paul McDonald  
 * Created on: 09/12/2021
 * Purpose:  To tell the Truth
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    bool x,y = 0;
    int arr[100] = {2,2,2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,2,2,
        2,2,2,2,2,2,2,2,2,2
    };
    //Display the Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^X X^Y^Y !(X&&Y) !X||!Y "<<
          " !(X||Y) !X&&!Y"<<endl;
    for(int j=0;j<99;j++){
        cin>>arr[j]>>arr[j+1];j++;
    }
    for(int i=0;i<99;i++){
        if(arr[i]<2&&arr[i+1]<2){
            x=arr[i];
            y=arr[i+1];
        
        i++;
        //cout<<"Test"<<endl;
        //First Row
        //cout<<x<<" "<<y<<endl;
           if(x==true&&y==true){
                cout<<(x?'T':'F')<<" "
                    <<(y?'T':'F')<<"  "
                    <<(!x?'T':'F')<<"  "
                    <<(!y?'T':'F')<<"   "
                    <<(x&&y?'T':'F')<<"    "
                    <<(x||y?'T':'F')<<"   "
                    <<(x^y?'T':'F')<<"    "
                    <<(x^y^x?'T':'F')<<"     "
                    <<(x^y^y?'T':'F')<<"       "
                    <<(!(x&&y)?'T':'F')<<"      "
                    <<(!x||!y?'T':'F')<<"        "
                    <<(!(x||y)?'T':'F')<<"      "
                    <<(!x&&!y?'T':'F')
                    <<endl;
            }
            //Second Row
            
            if(x==true&&y==false){
            cout<<(x?'T':'F')<<" "
                <<(y?'T':'F')<<"  "
                <<(!x?'T':'F')<<"  "
                <<(!y?'T':'F')<<"   "
                <<(x&&y?'T':'F')<<"    "
                <<(x||y?'T':'F')<<"   "
                <<(x^y?'T':'F')<<"    "
                <<(x^y^x?'T':'F')<<"     "
                <<(x^y^y?'T':'F')<<"       "
                <<(!(x&&y)?'T':'F')<<"      "
                <<(!x||!y?'T':'F')<<"        "
                <<(!(x||y)?'T':'F')<<"      "
                <<(!x&&!y?'T':'F')
                <<endl;
            }
            //Third Row
            if(x==false&&y==true){
            cout<<(x?'T':'F')<<" "
                <<(y?'T':'F')<<"  "
                <<(!x?'T':'F')<<"  "
                <<(!y?'T':'F')<<"   "
                <<(x&&y?'T':'F')<<"    "
                <<(x||y?'T':'F')<<"   "
                <<(x^y?'T':'F')<<"    "
                <<(x^y^x?'T':'F')<<"     "
                <<(x^y^y?'T':'F')<<"       "
                <<(!(x&&y)?'T':'F')<<"      "
                <<(!x||!y?'T':'F')<<"        "
                <<(!(x||y)?'T':'F')<<"      "
                <<(!x&&!y?'T':'F')
                <<endl;
            }
            //Fourth Row
            if(x==false&&y==false){
            cout<<(x?'T':'F')<<" "
                <<(y?'T':'F')<<"  "
                <<(!x?'T':'F')<<"  "
                <<(!y?'T':'F')<<"   "
                <<(x&&y?'T':'F')<<"    "
                <<(x||y?'T':'F')<<"   "
                <<(x^y?'T':'F')<<"    "
                <<(x^y^x?'T':'F')<<"     "
                <<(x^y^y?'T':'F')<<"       "
                <<(!(x&&y)?'T':'F')<<"      "
                <<(!x||!y?'T':'F')<<"        "
                <<(!(x||y)?'T':'F')<<"      "
                <<(!x&&!y?'T':'F')
                <<endl;
            }
        }
    //Exit
    }
    cout<<endl;
    return 0;
}