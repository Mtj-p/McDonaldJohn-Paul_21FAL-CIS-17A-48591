/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Prob1Random.h"
#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;



Prob1Random::Prob1Random(const char a,const char * b){
              
    nset = a;
    set = new char[a];//new char array for the set of numbers to draw random numbers from
    freq = new int[a];//new int array for the frequency
    for(int i=0;i<a;i++){
        set[i]=b[i]; //setting the new char array to the array passed in the constructor's parameters.
        freq[i]=0; //initializing the freq array to 0
    }          
    numRand=0;  //used as a counter for the number of times called
}

Prob1Random::~Prob1Random(void){
    delete [] set; //deletes new set
    delete [] freq; //deletes new freq
};

char Prob1Random::randFromSet(void){
    int num=rand()%nset; // generates a random number [0,nset]
    freq[num]+=1; //increments the position of the random number
    numRand++; //increments the counter
    return set[num]; //returns the number from the set
}

int * Prob1Random::getFreq(void) const{
    return freq;
}

char * Prob1Random::getSet(void) const {
    return set;
}

int Prob1Random::getNumRand(void) const {
    return numRand;
}