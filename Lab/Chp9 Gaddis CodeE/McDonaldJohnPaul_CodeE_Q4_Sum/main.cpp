/*
 * file: McDonaldJohnPaul_CodeE_Q4_Sum
 * Author: John-Paul McDonald
 * Date: 09/29/2021
 * Purpose: Create a parallel array that represents the successive sum
 */

#include <iostream>

using namespace std;

int *getData(int &);             //Return the array size and the array from the inputs
int *sumAry(const int *,int);//Return the array with successive sums
void prntAry(const int *,int);//Print the array


int main(){
	//your code here
	
	int arrSize;
	int *arrMed=NULL;
	int *arrSum=NULL;
	arrMed=getData(arrSize);
	prntAry(arrMed,arrSize);
	cout<<endl;
	arrSum=sumAry(arrMed,arrSize);
	prntAry(arrSum,arrSize);
	
	
	delete [] arrMed;
	delete [] arrSum;
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

int *sumAry(const int * arrMed,int arrSize){
    static int arrMed1[1000];
    int temp1=0;
    for(int i=0;i<arrSize;i++){
        temp1+=arrMed[i];
        arrMed1[i]=temp1;
    }
    return arrMed1;
}

void prntAry(const int *arrMed,int arrSize){
    for(int i=0;i<arrSize;i++){
        cout<<arrMed[i];
        if(i<arrSize-1){
            cout<<" ";
        }
    }
}
