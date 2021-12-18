/*
 * file: McDonaldJohnPaul_Final_Problem1
 * Author: John-Paul McDonald
 * Date: 12/17/2021
 * Purpose: Create a class that returns a random number from the following set
 */

//System Libraries


#include <iostream>
#include "Prob1Random.h"

using namespace std;


int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0))); //set time = 0 so that rand is pseudorandom
    char n=5;
    char rndseq[]={29,34,57,89,126};
    int ntimes=100000;
    Prob1Random a(n,rndseq);    
    for(int i=1;i<=ntimes;i++){
        a.randFromSet();
    }      
    int *x=a.getFreq();
    char *y=a.getSet();
    for(int i=0;i<n;i++){
        cout<<int(y[i])<<" occurred "<<x[i]<<" times"<<endl;
    }
    
    cout<<"The total number of random numbers is "<<a.getNumRand()<<endl;
    return 0;
}
