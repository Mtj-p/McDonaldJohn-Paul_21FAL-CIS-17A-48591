/*
 * file: McDonaldJohnPaul_CodeE_Q6_1DAugment
 * Author: John-Paul McDonald
 * Date: 09/29/2021
 * Purpose: Augment a 1-D Array
 */

#include <iostream>

using namespace std;

int *getData(int &);//Read the array 
int *augment(const int *,int);//Augment and copy the original array 
void prntAry(const int *,int);//Print the array


int main(){
	//your code here
	int *arr;
	int a=0;
	int *aug;
	arr=getData(a);
	prntAry(arr,a);
	cout<<endl;
	aug=augment(arr,a);
	a++;
	prntAry(aug,a);
	delete [] arr;
	delete [] aug;
	return 0;
}

int *getData(int &a){
    cin>>a;
    int b=0;
    static int arr[100];
    for(int i=0;i<a;i++){
        cin>>b;
        arr[i]=b;
    }
    return arr;
}

int *augment(const int *a, int b){
    int temp1=0;
    static int aug[100];
    aug[0]=0;
    for(int i=0;i<b;i++){
        aug[i+1]=a[i];
    }
    return aug;
}
void prntAry(const int *arr, int b){
    
    for(int i=0;i<b;i++){
        cout<<arr[i];
        if(i!=b-1){
            cout<<" ";
        }
    }
}