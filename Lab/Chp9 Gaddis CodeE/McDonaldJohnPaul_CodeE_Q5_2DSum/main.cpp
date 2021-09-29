/*
 * file: McDonaldJohnPaul_CodeE_Q5_2DSum
 * Author: John-Paul McDonald
 * Date: 09/29/2021
 * Purpose: Calculate the Grand Sum of a 2D array
 */

#include <iostream>

using namespace std;

int **getData(int &,int &);        //Return the 2-D array and its size.
void prntDat(const int* const *,int,int);//Print the 2-D Array
void destroy(int **,int,int);       //Deallocate memory
int sum(const int * const *, int,int);    //Return the Sum

int main(){
	//your code here
	int row=0;
	int col=0;
	int **arrMed=NULL;
	int sum1=0;
	arrMed=getData(row,col);
	prntDat(arrMed,row,col);
	sum1=sum(arrMed,row,col);
	cout<<sum1;
	destroy(arrMed,row,col);
	return 0;
}

int **getData(int &row,int &col){
    cin>>row;
    cin>>col;
    int temp=0;
    int **arrMed1 = new int*[row];
    for(int i=0;i<row;i++){
        arrMed1[i] = new int[col];
    }
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>temp;
            arrMed1[i][j]=temp;
        }
    }
    
    return arrMed1;
}        //Return the 2-D array and its size.
void prntDat(const int* const * arrMed,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arrMed[i][j];
                if(j<col-1){
                  cout<<" ";
                }
            }
            cout<<endl;
    }
}//Print the 2-D Array
void destroy(int **arrMed,int row,int col){
    for(int i=0;i<row;i++){
        delete [] arrMed[i];
    }
    delete [] arrMed;
}     //Deallocate memory
int sum(const int * const * arrMed, int row,int col){
    int sum1=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum1+=arrMed[i][j];
        }
    }
    return sum1;
}  //Return the Sum
