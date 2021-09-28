/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on September 22nd, 2021, 1:30 PM
 * Purpose:  Compare 1 and 2 Dimensional Dynamic Arrays
 * Edited by: John-Paul McDonald
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <vector>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions and Array Dimension


//Function Prototypes Here
//void prntAry(const int *,int,int);
void prntV1d(vector<int>,int,int); //print 1d array
//void prntAry(int **,int,int);
void prntV2d(vector<vector<int>>,int,int);//print 2d array
//int  *fillAry(int,int,int);
void fillVc1d(vector<int>&,int,int,int);//fill 1d array
//int  **fillAry(int,int);
void fillVc2d(vector<vector<int>>&,int,int);//fill 2d array 0s
//void fillAry(int **,int *,int,int);
void fillVcAr(vector<vector<int>>&,vector<int>&,int,int);//fill vector table
//void destroy(int **,int);
//no need to destroy vectors
//void swap(int &,int &);
void swap(vector<int>&,vector<int>&);//swap 2 vector variables
//void smlLst(int [],int,int);
void smlLst(vector<int>&,int, int);//small List 
//void mrkSort(int [],int);
void mrkSort(vector<int>&,int);//Mark Vector Sort






//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int rowsize=4;//Row size for both 1 and 2 D arrays
    int colsize=3;//The column size for a 2 dimensional Array
    
    vector <int> arr1;//int *array;
    vector <int> arr2;//int *brray;
    vector <int> arr3;//int *crray;
     
    vector<vector<int>> table;//int **table;
    
    int lowRng=100,highRng=999;
    int perLine=4;
        
    //Fill each parallel array
    fillVc1d(arr1,rowsize,highRng,lowRng);//array=fillAry(rowsize,highRng,lowRng);
    fillVc1d(arr2,rowsize,highRng/10,lowRng/10);//brray=fillAry(rowsize,highRng/10,lowRng/10);
    fillVc1d(arr3,rowsize,highRng/100,lowRng/100);//crray=fillAry(rowsize,highRng/100,lowRng/100);
       
    //Sort the array the for all positions
    mrkSort(arr1,rowsize);//mrkSort(array,rowsize);
    mrkSort(arr2,rowsize);//mrkSort(brray,rowsize);
    mrkSort(arr3,rowsize);//mrkSort(crray,rowsize);
    
    //Fill the 2-D array
    fillVc2d(table,rowsize,colsize);//table=fillAry(rowsize,colsize);
        
    fillVcAr(table,arr1,rowsize,0);//fillAry(table,array,rowsize,0);
    fillVcAr(table,arr2,rowsize,1);//fillAry(table,brray,rowsize,1);
    fillVcAr(table,arr3,rowsize,2);//fillAry(table,crray,rowsize,2);
    
    //Print the values in the array
    
    prntV1d(arr1,rowsize,perLine);//prntAry(array,rowsize,perLine);
    prntV1d(arr2,rowsize,perLine);//prntAry(brray,rowsize,perLine);
    prntV1d(arr3,rowsize,perLine);//prntAry(crray,rowsize,perLine);
    prntV2d(table,rowsize,colsize);//prntAry(table,rowsize,colsize);
    
    //No vector cleanup
    //Cleanup
    //delete []array;
    //delete []brray;
    //delete []crray;
    //destroy(table,rowsize);
    //Exit
    return 0;
}

/*
void destroy(int **a,int rows){
    for(int row=0;row<rows;row++){
        delete []a[row];
    }
    delete []a;
}
*/
void fillVcAr(vector<vector<int>> &a,vector<int> &b,int rowSize,int wchCol){
    for(int row=0;row<rowSize;row++){
        a[row][wchCol]=b[row];
    }
}
/*
void fillAry(int **a,int *c,int rowSize,int wchCol){
    for(int row=0;row<rowSize;row++){
        a[row][wchCol]=c[row];
    }
}
*/
void fillVc1d(vector<int> &arr1,int n,int hr,int lr){
    for(int indx=0;indx<n;indx++){
        arr1.push_back(rand()%(hr-lr+1)+lr);
    }
}
/*
int *fillAry(int n,int hr,int lr){
    n=n<2?2:n;
    int *a=new int[n];
    for(int indx=0;indx<n;indx++){
        a[indx]=rand()%(hr-lr+1)+lr;
    }
    return a;
}
*/
void fillVc2d(vector<vector<int>> &a,int rows,int cols){
    int begin=a.size();
    if(rows==0)begin=0;
    int end=a.size()+rows;
    for(int row=begin;row<end;row++){
        if(rows!=0)a.push_back(vector<int>());
        for(int col=0;col<cols;col++){
            a[row].push_back(0);
        }
    }
}

/*
int **fillAry(int rows,int cols){
    //Allocate Memory for 2-D Array
    rows=rows<2?2:rows;
    cols=cols<2?2:cols;
    int **a=new int*[rows];
    for(int row=0;row<rows;row++){
        a[row]=new int[cols];
    }
    //Fill it with 0's
    for(int row=0;row<rows;row++){
        for(int col=0;col<cols;col++){
            a[row][col]=0;
        }
    }
    return a;
}
*/
void prntV2d(vector<vector<int>> a,int rowsize,int colsize){
    cout<<endl<<"The Vector Values"<<endl;
    for(int row=0;row<rowsize;row++){
        for(int col=0;col<colsize;col++){
            cout<<setw(4)<<a[row][col];
        }
        cout<<endl;
    }
}
/*
void prntAry(int **a,int rowsize,int colsize){
     cout<<endl<<"The Array Values"<<endl;
    for(int row=0;row<rowsize;row++){
        for(int col=0;col<colsize;col++){
            cout<<setw(4)<<a[row][col];
        }
        cout<<endl;
    }
}
*/
void prntV1d(vector<int> a,int n,int perLine){
    //print the values in the vector
    cout<<endl<<"The Vector Values"<<endl;
    for(int indx=0;indx<n;indx++){
        cout<<a[indx]<<" ";
        if(indx%perLine==(perLine-1))cout<<endl;
    }
}
/*
void prntAry(const int *a,int n,int perLine){
    //Print the values in the array
    cout<<endl<<"The Array Values"<<endl;
    for(int indx=0;indx<n;indx++){
        cout<<a[indx]<<" ";
        if(indx%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
*/

void mrkSort(vector<int> &a,int n){
    for(int pos=0;pos<n-1;pos++){
        smlLst(a,n,pos);
    }
}

/*
void mrkSort(int a[],int n){
    for(int pos=0;pos<n-1;pos++){
        smlLst(a,n,pos);
    }
}
*/

void smlLst(vector<int> &a,int n, int pos){
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i]){
            swap(a[pos],a[i]);
        }
    }
}

/*
void smlLst(int a[],int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i]){
            swap(a[pos],a[i]);
        }
    }
}
*/

void swap(vector<int> &a,vector<int> &b){
    vector<int> c;
    c=a;
    a=b;
    b=c;
}

/*
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
*/