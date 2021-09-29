/*
 * file: McDonaldJohnPaul_CodeE_Q7_2DAugment
 * Author: John-Paul McDonald
 * Date: 09/29/2021
 * Purpose: Create an array 1 row and 1 col larger then copy.
 */

#include <iostream>

using namespace std;

int **getData(int &,int &);//Get the Matrix Data
void printDat(const int * const *,int,int);//Print the Matrix
int **augment(const int * const *,int,int);//Augment the original array
void destroy(int **,int);//Destroy the Matrix, i.e., reallocate memory

int main(){
	//your code here
	int a=0;
	int b=0;
	int **arr;
	arr=getData(a,b);
    printDat(arr,a,b);
    cout<<endl;
    arr=augment(arr,a,b);
    a++;b++;
    printDat(arr,a,b);
    destroy(arr,a);
	return 0;
}


int **getData(int &a,int &b){
    cin>>a;
    cin>>b;
    int temp =0;
    int **arr = new int *[a];
    for(int i=0;i<a;i++){
        arr[i] = new int[b];   
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>temp;
            arr[i][j]=temp;
        }
    }
    return arr;
}

void printDat(const int * const *arr,int a,int b){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<arr[i][j];
            if(j!=b-1){
                cout<<" ";
            }
        }
        if(i!=a-1){cout<<endl;}
    }
}
int **augment(const int * const * arr1,int a,int b){
    int **arr = new int *[a+1];
    for(int i=0;i<a+1;i++){
        arr[i]=new int[b+1];
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            arr[i+1][j+1]=arr1[i][j];
        }
    }
    a++;b++;
    for(int i=0;i<a;i++){
        arr[i][0]=0;
    }
    for(int i=0;i<b;i++){
        arr[0][i]=0;
    }
    return arr;
}
void destroy(int ** arr,int a){
    for(int i=0;i<a;i++){
        delete []arr[i];
    }
    delete []arr;
}
