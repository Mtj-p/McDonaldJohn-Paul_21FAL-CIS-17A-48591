/*
 * file: McDonaldJohnPaul_CodeE_Q2_Median
 * Author: John-Paul McDonald
 * Date: 09/29/2021
 * Purpose: Find the Median
 */

#include <iostream>
#include <iomanip>

int *getData(int &);         //Return the array size and the array
void prntDat(int *,int);    //Print the integer array
float *median(int *,int);  //Fill the median Array with the Float array size, the median, and the integer array data
void prntMed(float *);     //Print the median Array
using namespace std;

int main(){
	//your code here
	int a=0;
	int *arr;
	float *acc;
	arr=getData(a);
	prntDat(arr,a);
	acc=median(arr,a);
	prntMed(acc);
	return 0;
}

int *getData(int &a){
    cin>>a;
    static int arr[100];
    int i=0;
    while(cin>>arr[i]){
        i++;
    }
    a=i;
    return arr;
}
void prntDat(int *a, int b){
    for(int i=0;i<b;i++){
        cout<<a[i];
        if(i!=b-1){
            cout<<" ";
        }
    }
    cout<<endl;
    
}
float *median(int *a,int b){
    int temp=b;
    b++;b++;
    float temp2=0;
    static float arr[100];
    for(int i=0;i<temp;i++){
        arr[i+2]=a[i];
    }
    
    if(temp%2==0){
        temp2=(temp)/2;
        temp2=temp2+.5;
        arr[1]=temp2;
    }
    if(temp%2==1){
        temp2=(temp-1)/2;
        temp2=temp2+1;
        arr[1]=temp2;
    }
    arr[0]=b;
    return arr;
    
}
void prntMed(float *a){
    int i=0;
    cout<<a[i];
    i++;
    while(a[i]!='\0'){
        cout<<fixed<<setprecision(2)<<" "<<a[i];
        i++;
    }
}
