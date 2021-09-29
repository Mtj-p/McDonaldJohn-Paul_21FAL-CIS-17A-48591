/*
 * file: McDonaldJohnPaul_CodeE_Q3_Reverse
 * Author: John-Paul McDonald
 * Date: 09/29/2021
 * Purpose: Reverse a sorted Dynamic Array
 */

#include <iostream>

int *getData(int &);               //Fill the array
int *sort(const int *,int);       //Sort smallest to largest
int *reverse(const int *,int);  //Sort in reverse order
void prntDat(const int *,int); //Print the array

using namespace std;

int main(){
	//your code here
	int arrSize;
	int *arrMed=NULL;
	arrMed=getData(arrSize);
	arrMed=sort(arrMed,arrSize);
	prntDat(arrMed,arrSize);
	cout<<endl;
	arrMed=reverse(arrMed,arrSize);
	prntDat(arrMed,arrSize);
	delete [] arrMed;
	return 0;
}
int *getData(int &arrSize){
    
    cin>>arrSize;
    static int arrMed[1000];
    for(int i=0;i<arrSize;i++){
	    cin>>arrMed[i];
	   
	}
	return arrMed;
}
            //Fill the array

int *sort(const int *arrMed,int arrSize){
    static int arrMed1[1000];
    for(int i=0;i<arrSize;i++){
        arrMed1[i]=arrMed[i];
    }
    
    for(int i=0;i<arrSize;i++){
	    for(int j=0;j<arrSize-1;j++){
	        if(arrMed1[i]<arrMed1[j]){
	            int temp=0;
	            temp=arrMed1[i];
	            arrMed1[i]=arrMed1[j];
	            arrMed1[j]=temp;
	        }
	    }
	}
	return arrMed1;
}       //Sort smallest to largest

int *reverse(const int *arrMed,int arrSize){
    static int arrMed1[1000];
    for(int i=0;i<arrSize;i++){
        arrMed1[i]=arrMed[i];
    }
    for(int i=0;i<arrSize;i++){
	    for(int j=i;j<arrSize;j++){
	            int temp=0;
	            temp=arrMed1[i];
	            arrMed1[i]=arrMed1[j];
	            arrMed1[j]=temp;
	    }
	}
	return arrMed1;
} //Sort in reverse order

void prntDat(const int *arrMed,int arrSize){
    for(int i=0;i<arrSize;i++){
        cout<<arrMed[i];
        if(i<arrSize-1){
            cout<<" ";
        }
    }
}
