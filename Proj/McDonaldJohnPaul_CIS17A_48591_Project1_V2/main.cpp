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
#include <iomanip>

using namespace std;

//User Libraries
//Global Constants
//Universal Math, Physics, Conversions, Higher Dimensions
//Prototypes
void addDecks(vector<int> &);
void Shuffle(vector<int> &);
void Game(vector<int>&,vector<int>&);
void CardDisplay(int,int);

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
    
    cout<<"hand: ";
    int suits=hand[0]%4;
    int cards=hand[0]%12;
    CardDisplay(cards,suits);
    cout<<" ";
    suits=hand[1]%4;
    cards=hand[1]%12;
    CardDisplay(cards,suits);
    hand.clear();
    cout<<endl;
}

void CardDisplay(int i,int j){
    enum Card {Ace,Two,Three,Four,Five,Six,Seven,Eight,Nine,Jack,Queen,King};
    enum Suit {OfDiamonds,OfSpades,OfHearts,OfClubs};
    Card cards;
    Suit suits;
    cards=static_cast<Card>(i);
    suits=static_cast<Suit>(j);
    switch(cards){
        case Ace:cout<<setw(7)<<"Ace ";break;
        case Two:cout<<setw(7)<<"Two ";break;
        case Three:cout<<setw(7)<<"Three ";break;
        case Four:cout<<setw(7)<<"Four ";break;
        case Five:cout<<setw(7)<<"Five ";break;
        case Six:cout<<setw(7)<<"Six ";break;
        case Seven:cout<<setw(7)<<"Seven ";break;
        case Eight:cout<<setw(7)<<"Eight ";break;
        case Nine:cout<<setw(7)<<"Nine ";break;
        case Jack:cout<<setw(7)<<"Jack ";break;
        case Queen:cout<<setw(7)<<"Queen ";break;
        case King:cout<<setw(7)<<"King ";break;
    }
    switch(suits){
        case OfDiamonds:cout<<"Of Diamonds    ";break;
        case   OfSpades:cout<<"Of Spades      ";break;
        case   OfHearts:cout<<"Of Hearts      ";break;
        case   OfClubs :cout<<"Of Clubs       ";break;
    }
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
