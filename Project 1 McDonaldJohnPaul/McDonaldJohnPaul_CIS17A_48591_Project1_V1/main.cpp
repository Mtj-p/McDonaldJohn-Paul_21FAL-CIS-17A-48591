/*
 * file: 
 * Author: John-Paul McDonald
 * Date: 
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

//User Libraries
//Global Constants
//Universal Math, Physics, Conversions, Higher Dimensions
//Prototypes
void addDecks(vector<int> &);
void Shuffle(vector<int> &);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    
    //Initialize Variables
    
    
    vector<int> test = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int count2=0;
    int test1=test.size();
    Shuffle(test);
    //Process the inputs -> outputs
    for(int i=0;i<test1;i++){
        if(test[i]<10){cout<<" ";}
        cout<<test[i]<<" ";
        count2+=test[i];
    }
    cout<<endl<<endl;
    addDecks(test);
    test1=test.size();
    for(int i=0;i<test1;i++){
        if(test[i]<10){cout<<" ";}
        cout<<test[i]<<" ";
        count2+=test[i];
    }
    cout<<endl<<endl;
    addDecks(test);
    test1=test.size();
    for(int i=0;i<test1;i++){
        if(test[i]<10){cout<<" ";}
        cout<<test[i]<<" ";
        count2+=test[i];
    }
    cout<<endl;
    
    //Display the results, verify inputs
    
    //Clean up and exit
    return 0;
}

void addDecks(vector<int> &stack){
    vector<int> newdecks;
    int count1=1;
    for(int i=0;i<312;i++){
        newdecks.push_back(count1);
        count1++;        
    }
    Shuffle(newdecks);
    int vec=newdecks.size();
    for(int i=0;i<vec;i++){
        stack.push_back(newdecks[i]);
    }
}


void Shuffle(vector<int> &stack){
    int nShuffle = stack.size();
    for(int i=1;i<=nShuffle;i++){
        for(int j=0;j<nShuffle;j++){
        int temp=rand()%nShuffle;
        int card=stack[j];
        stack[j]=stack[temp];
        stack[temp]=card;
    }
  }
}

