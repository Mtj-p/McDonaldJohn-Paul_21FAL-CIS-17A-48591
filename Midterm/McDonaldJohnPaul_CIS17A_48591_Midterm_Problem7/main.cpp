/*
 * file: 
 * Author: John-Paul McDonald
 * Date: 
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <vector>
using namespace std;

#include "Prime.h"
#include "Primes.h"

//User Libraries
//Global Constants
//Universal Math, Physics, Conversions, Higher Dimensions
//Prototypes
Primes *factor(int);//Input an integer, return all prime factors
void prntPrm(Primes *);//Output all prime factors
void destroy(Primes *);
//Execution Begins Here
int main(int argc, char** argv) {
    Primes *stu;
    bool factoring=true;
    while(factoring){
            cout<<"Would you like to find the prime factors of a number? \n"
                    "1 for yes, or 2 for no: ";
            int b=0;
            cin>>b;
            switch(b){
                case 1:{cout<<"Please enter any number between 2 and 65000: ";
                            int a;
                            cin>>a;
                            if(a>1&&a<65001){
                                stu=factor(a);
                                prntPrm(stu);
                                destroy(stu);
                            }
                }
                default:{factoring=false;}
            }
    }    
    
    return 0;
}

Primes *factor(int a){
    
    cout<<endl<<a<<"=";
    unsigned char count=0;
    unsigned short int i=2;
    vector<unsigned short int> p;
    bool solving=false;
    while(!solving){
        if(a%i==0){
            a=a/i;
            p.push_back(i);
            i--;            
            count++;
        }
        i++;
        if(a==1){
            solving=true;
        }
    }
    Primes *raw = new Primes;
    
    raw->prime=new Prime [count];
    
    unsigned char count2 = 0;
    for(int i=0;i<count;i++){
        unsigned char pow=49;
        for(int j=0;j<count;j++){
            if(p[i]==p[j]&&i!=j){
                pow++;
                i++;
            }
        }
        raw->prime[count2].power=pow;
        raw->prime[count2].prime=p[i];
        count2++;
        raw->nPrimes=count2;
    }
    return raw;
}

void prntPrm(Primes *a){
    for(int i=0;i<a->nPrimes;i++){
        cout<<a->prime[i].prime<<"^"<<a->prime[i].power;
        if(i<a->nPrimes-1){
            cout<<" *";
        }
    }
 }

void destroy(Primes *a){
    delete a->prime;
    delete a;
}