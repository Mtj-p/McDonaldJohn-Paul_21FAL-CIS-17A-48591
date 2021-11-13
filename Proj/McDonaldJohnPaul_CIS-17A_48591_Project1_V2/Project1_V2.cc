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
void Game(vector<int>&,vector<int>&);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    
    //Initialize Variables
    
    
    vector<int> test;
    vector<int> hand;
    if(test.size()<100){
       addDecks(test);
    }
    //Process the inputs -> outputs
    for(int i=0;i<104;i++){
        Game(test,hand);
    }
    //Display the results, verify inputs
    
    //Clean up and exit
    return 0;
}


void Game(vector<int>& deck,vector<int>& hand){
    deck.erase(deck.begin());
    int temp=deck[0]%52;
    hand.push_back(temp);
    deck.erase(deck.begin());
    temp=deck[0]%52;
    hand.push_back(temp);
    enum Card={ACE=1,JACK=11,QUEEN=12,KING=13};
    enum Suit={OFDIAMONDS=0,OFSPADES=1,OFHEARTS=2,OFCLUBS=3};
    cout<<"hand: ";
    int cards=hand[0]%4;
    int suits=hand[0]%13;
    cout<<Card[cards]<<" "<<Suit[suits];
    cout<<" ";
    int cards=hand[1]%4;
    int suits=hand[1]%13;
    cout<<Card[cards]<<" "<<Suit[suits];
    hand.clear();
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