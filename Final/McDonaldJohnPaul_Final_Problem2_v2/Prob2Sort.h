/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Prob2Sort.h
 * Author: jaymc
 *
 * Created on December 17, 2021, 7:13 AM
 */

#ifndef PROB2SORT_H
#define PROB2SORT_H

#include <cstddef>
#include <iostream>

template<class T>
class Prob2Sort{
private:
int *index; //Index that is utilized
//in the sort
public:
Prob2Sort(){index=NULL;}; //Constructor
~Prob2Sort(){delete []index;}; //Destructor
T * sortArray(const T*,int,bool); //Sorts a single column array
T * sortArray(const T*,int,int,int,bool);//Sorts a 2 dimensional array
//represented as a 1 dim array
};

template<class T>
T * Prob2Sort<T>::sortArray(const T* a,int b,bool c){
    T *f = a;
    return f;
} //Sorts a single column array

template<class T>
T * Prob2Sort<T>::sortArray(const T* a,int b,int c,int d,bool e){
    char * f;
    
    std::cout<<"Sort array \n";
    for(int i=0;i<10;i++){
        for(int j=0;j<16;j++){
            f[i*16+j]=a[i*16+j];//this is what is breaking but it's the character array[row*16 + the iterator] = passed array [row*16 + the iterator]
            if(j==15){
                f[i*c+j]='\n';
            }
        }
    }
    
    for(int i=0;i<b-1;i++){//for every row
        for(int j=0;j<b-i-1;j++){//every entry but the last
            int temp3 = j+1; //temp3 is the value of j+1
            char temp1 = f[i*j+d];//the array [the row * the row iterator + the specific distance to the column we're sorting on]
            char temp2 = f[i*temp3+d]; // the array [the row * (the row iterator+1) + the specific distance to the colum we're sorting on]
            
            
            //this is an attempt at a bubble sort based on the number located in array[i*j+d] vs array[i*(j+1)+d]
            if(temp1>temp2){//if row i*j column d > row i*j+1 column d
                for(int k=0;k<c;k++){//k will iterator through every column #
                    char temp4 = f[i*j+k];//temporary value of current row i*j + the column #
                    f[i*j+k]=f[i*temp3+k];//current row i*j + the column = the current row*j+1 + the column #
                    f[i*temp3+k]=temp4; // the current row*j+1 + the column# = the old value of the current row * j + the column
                }
            }
        }
    }
    return f;
}//Sorts a 2 dimensional array
//represented as a 1 dim array





#endif /* PROB2SORT_H */

