/* 
 * File:   main.cpp
 * Author: John-Paul McDonald
 * Created on DATE AND TIME HERE
 * Purpose:  Sorting a 2-D array of characters if row and columns match
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <cstring> //strlen(),strcmp(),strcpy()
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=80;//Only 20 required, and 1 for null terminator

//Function Prototypes Here
int  read(char [][COLMAX],int &);//Outputs row and columns detected from input
void sort(char [][COLMAX],int,int);//Sort by row
void print(const char [][COLMAX],int,int);//Print the sorted 2-D array

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=30;             //Only 20 required
    char array[ROW][COLMAX];      //Bigger than necessary 
    int colIn,colDet,rowIn,rowDet;//Row, Col input and detected
    
    //Input the size of the array you are sorting
    cout<<"Read in a 2 dimensional array of characters and sort by Row"<<endl;
    cout<<"Input the number of rows <= 20"<<endl;
    cin>>rowIn;
    cout<<"Input the maximum number of columns <=20"<<endl;
    cin>>colIn;
    //Now read in the array of characters and determine it's size
    rowDet=rowIn;
    cout<<"Now input the array."<<endl;
    colDet=read(array,rowDet);
    
    //Compare the size input vs. size detected and sort if same
    //Else output different size
    if(rowDet==rowIn&&colDet==colIn){
        sort(array,rowIn,colIn);
        cout<<"The Sorted Array"<<endl;
        print(array,rowIn,colIn);
    }else{
        if(rowDet!=rowIn)
        cout<<(rowDet<rowIn?"Row Input size less than specified.":
            "Row Input size greater than specified.")<<endl;
        if(colDet!=colIn)
        cout<<(colDet<colIn?"Column Input size less than specified.":
            "Column Input size greater than specified.")<<endl;
    }
    
    //Exit
    return 0;
}

int  read(char a[][COLMAX],int &b){
    int clCnt=0;
    char readIn[COLMAX];
    int count=0;
    while(cin>>readIn){
        strcpy(a[count],readIn);
        count++;
    }
    b=count;
    clCnt=strlen(a[0]);
    for(int j=0;j<b;j++){
        if(clCnt<strlen(a[j])){
            clCnt=strlen(a[j]);
        }
    }
    return clCnt;
}


void sort(char arrAy[][COLMAX],int rowS,int colS){
char *temp;
int i,j;
    for(i=0;i<rowS-1;i++){
        for(j=0;j<rowS-i-1;j++){
                int temp1;
                if((temp1=strcmp(arrAy[j],arrAy[j+1]))>0){
                    strcpy(temp,arrAy[j+1]);
                    strcpy(arrAy[j+1],arrAy[j]);
                    strcpy(arrAy[j],temp);
                }
                if((temp1=strcmp(arrAy[j],arrAy[j+1]))=0){
                    if(arrAy[j][1]>arrAy[j+1][1]){
                        strcpy(temp,arrAy[j+1]);
                        strcpy(arrAy[j+1],arrAy[j]);
                        strcpy(arrAy[j],temp);
                    }
                }
        }
    }
}

void print(const char arrPrnt[][COLMAX],int rowS,int colS){
int i,j;
    for(i=0;i<rowS;i++){
        cout<<arrPrnt[i]<<endl;
    } 
}





 