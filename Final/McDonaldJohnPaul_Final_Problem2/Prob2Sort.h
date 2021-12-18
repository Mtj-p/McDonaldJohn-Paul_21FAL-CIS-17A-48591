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
            f[i*c+j]=a[i*c+j];
            if(j==15){
                f[i*c+j]='\n';
            }
            std::cout<<f[i*c+j];
        }
    }
    std::cout<<"\nLeaving sort array\n";
    return f;
}//Sorts a 2 dimensional array
//represented as a 1 dim array





#endif /* PROB2SORT_H */

