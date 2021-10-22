/*
 * file: 
 * Author: John-Paul McDonald
 * Date: 
 * Purpose: 
 */

//System Libraries
#include <iostream>
using namespace std;

struct Prime{
    unsigned short prime;
    unsigned char power;
};
struct Primes{
    unsigned char nPrimes;
    Prime *prime;
};
//User Libraries
//Global Constants
//Universal Math, Physics, Conversions, Higher Dimensions
//Prototypes
Primes *factor(int);//Input an integer, return all prime factors
void prntPrm(Primes *);//Output all prime factors
void destroy(Primes *);
//Execution Begins Here
int main(int argc, char** argv) {
    cout<<"Please enter any number between 2 and 65000: ";
    int a;
    cin>>a;
    if(a>1&&a<65001){
        Primes * b;
        b=factor(a);
        prntPrm(b);
        destroy(b);
    }
    
    
    
    cout<<"Test "<<endl;
    return 0;
}

Primes *factor(int a){
    bool solving=false;
    Primes *b = new Primes;
    int c=a;
    int i=2;
    int count=0;
    while(!solving){
        if(a%i==0){
            a=a/i;
            cout<<"a "<<a<<" i "<<i<<endl;
            i--;
            cout<<"Fail 1"<<endl;
            b->prime[count].prime=i;
            cout<<"Fail 2"<<endl;
            (*b).prime[count].power=1;
            cout<<"Fail 3"<<endl;
            count++;
        }
        i++;
        if(a==1){
            solving=true;
        }
    }
    b->nPrimes=count;
    for(int j=0;j<count;j++){
        for(int k=0;k<count;k++){
            if(k!=j&&(*b).prime[k].prime==(*b).prime[j].prime){
                (*b).prime[k].power++;
                (*b).prime[j].prime==0;
            }
        }
    }
    return b;
}

void prntPrm(Primes *a){
    for(int i=0;i<a->nPrimes;i++){
        if((*a).prime[i].prime!=0){
            cout<<(*a).prime->prime<<" ^ "<<(*a).prime[i].power<<endl;
        }
    }
}

void destroy(Primes *a){
    delete [] a->prime;
    delete a;
}