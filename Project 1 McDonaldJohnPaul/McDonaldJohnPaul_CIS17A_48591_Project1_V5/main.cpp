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
#include <string>

using namespace std;

//User Libraries

//Global Constants
//Universal Math, Physics, Conversions, Higher Dimensions
//Prototypes
struct CardHolder{
    vector<int> thedeck;
};
struct CardSuits{
    int thesuit;
    int thevalue;
};
struct CardsPlayed {
    int specificcard;
    CardSuits specifics;
};

void addDecks(vector<int> &);
void Shuffle(vector<int> &);
bool Game(vector<int>&,vector<int>&);
void CardDisplay(int,int);
void Deal(vector<int>&,vector<int>&);
int Check(vector<int>);
void Hitme(vector<int>&,vector<int>&);
int *getPlays(int *);
CardsPlayed getCards(CardHolder);




enum Card {Ace,Two,Three,Four,Five,Six,Seven,Eight,Nine,Jack,Queen,King};
enum Suit {OfDiamonds,OfSpades,OfHearts,OfClubs};

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    
    //Initialize Variables
    
    
    vector<int> deck;
    vector<int> hand;
    bool playing = true;
    bool playerw = false;
    int plays=0;
    int *ptr = nullptr;
    int numgames=0;
    bool *wins = nullptr;
    wins = new bool[numgames]; 
    while(playing==true){
        ptr=getPlays(&plays);
        cin.clear();
        ptr = &plays;
        if(*ptr>=1){
            wins=(bool*) realloc (wins,numgames); //if you play too many games I think this steps on the toes of your memory
            if(deck.size()<100){
                addDecks(deck);
            }
            playerw=Game(deck,hand);
            wins[numgames]=playerw;
            playerw=false;
            numgames++;
            hand.clear();
        }
        if(plays<=0){
            playing=false;
        }
    }
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n~~~~~~~~~~~Game Results~~~~~~~~~~~\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    for(int i=0;i<numgames;i++){
        cout<<"Game "<<i+1<<" result:";
        wins[i]?cout<<" win" : cout<<" loss";
        cout<<endl;
    }
    if(numgames == 0){
        cout<<"No games to report.";
    }
    //Display the results, verify inputs
    
    //Clean up and exit
    delete [] wins;
    wins = nullptr;
    return 0;
}



CardsPlayed getCards(CardHolder i){
    CardsPlayed temp;
    temp.specificcard = i.thedeck[0];
    temp.specifics.thesuit = i.thedeck[0]%4;
    temp.specifics.thevalue = i.thedeck[0]%12;
    return  temp;
}

int *getPlays(int *plays){
    char greeting[22] = "Welcome to Blackjack.";
    string question = "\nDo you want to play a game?\n(1 yes | 0 no): ";
    cout<<"\n"<<greeting<<question;
    cin>> *plays;
    return plays;
}

bool Game(vector<int>& deck,vector<int>& hand){
    vector<int> dhand;
    bool dwinner = false;
    bool winner = false;
    bool ingame = true;
    bool bust = false;
    bool dbust = false;
    int hit = 1;
    int total=0;
    int dtotal=0;
    int newcard=0;
    int dnewcard=0;
    do{
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n~~~~~~~~Starting new game~~~~~~~~~\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        hand.clear();
        Deal(hand,deck);
        cout<<"Your hand: \n";
        CardDisplay(hand[0]%12,hand[0]%4);
        CardDisplay(hand[1]%12,hand[1]%4);
        total=Check(hand);
        if(total==21){
                ingame=false;
                winner=true;            
        }
        cout<<setw(22)<<"Total: "<<total<<endl;
        while(total<=20&&ingame==true){
            cout<<"Hit(1) or stand?(0) : ";
            cin>>hit;
            if(hit>0){
                Hitme(hand,deck);
            }
            if(hit==0){
                ingame=false;
            }
            newcard=hand.size();
            for(int i=0;i<newcard;i++){
                CardDisplay(hand[i]%12,hand[i]%4);
            }
            total=Check(hand);
            cout<<setw(22)<<"Total: "<<total<<endl;
            if(total==21){
                ingame=false;
                winner=true;            
            }
            if(total>21){
                ingame=false;
                bust=true;
            }
        }   
    }while(ingame==true);
    if(bust==true){
        cout<<"Busted!"<<endl;
    }
    if(winner==true){
        cout<<"Winner Winner Chicken Dinner! 21!\n";
    }
    if(bust!=true&&winner!=true){
        cout<<setw(22)<<"Standing at: "<<total<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n~~~~~~~~~~Dealer's Draw~~~~~~~~~~~\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        
        cout<<"Dealers hand: \n";
        Deal(dhand,deck);
        CardDisplay(dhand[0]%12,dhand[0]%4);
        CardDisplay(dhand[1]%12,dhand[1]%4);
        dtotal=Check(dhand);
        cout<<setw(22)<<"Dealer's total: "<<dtotal<<endl;
        while(dtotal<17){
            Hitme(dhand,deck);
            dtotal=Check(dhand);
            dnewcard=dhand.size();
            cout<<"dnewcard "<<dnewcard<<endl;
            cout<<"dtotal "<<dtotal<<endl;
            for(int i=0;i<dnewcard;i++){
                CardDisplay(dhand[i]%12,dhand[i]%4);
            }
            cout<<setw(22)<<"Dealer's Total: "<<dtotal<<endl;
        }
        if(dtotal==21||dtotal>total){
            dwinner=true;            
        }
        if(dtotal>21){
            dbust=true;
            dwinner=false;
        }
    }
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    if(dwinner==true){
        cout<<"~~~~~~~~~~~Dealer Wins~~~~~~~~~~~~\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout<<"      Your "<<total<<" vs Dealer's "<<dtotal;
    }
    if(dbust==true){
        cout<<"~~~~~~~~~~~Dealer Bust~~~~~~~~~~~~\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout<<"      Dealer's total "<<dtotal<<"."<<endl;
    }
    if(total==dtotal){
        cout<<"~~~~~~~~~~~~Draw game~~~~~~~~~~~~~\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout<<"      Your "<<total<<" = Dealer's "<<dtotal;
    }
    if(bust!=true&&total>dtotal){
        cout<<"~~~~~~~~~~Player wins!!~~~~~~~~~~~\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        if(dtotal!=0){cout<<"      Your "<<total<<" vs Dealer's "<<dtotal;}
    } 
    return winner;
}


void Hitme(vector<int>&hand,vector<int>&deck){
    int temp=deck[0]%52; 
    hand.push_back(temp);
    deck.erase(deck.begin());
}

int Check(vector<int> hand){
    int handsize = hand.size();
    int count=0;
    int countace=0;
    for(int i=0;i<handsize;i++){
        if(hand[i]%12==0){
            count+=1;
            countace+=11;
        }
        if(hand[i]%12>8){
            count+=10;
            countace+=10;
        }
        if(hand[i]%12<9&&hand[i]%12>0){
            count+=(hand[i]%12);
            countace+=(hand[i]%12);        
            count+=1;
            countace+=1;
        }
    }
    if(countace<22){
        return countace;
    }
    if(countace>=22){
        return count;
    }
}

void Deal(vector<int> &hand,vector<int> &deck){
    int temp=deck[0]%52; 
    hand.push_back(temp);
    deck.erase(deck.begin());
        
    temp=deck[0]%52;
    hand.push_back(temp);
    deck.erase(deck.begin());
}

void CardDisplay(int i,int j){
    Card cards;
    Suit suits;
    cards=static_cast<Card>(i);
    suits=static_cast<Suit>(j);
    switch(cards){
        case Ace:cout<<setw(21)<<"Ace ";break;
        case Two:cout<<setw(21)<<"Two ";break;
        case Three:cout<<setw(21)<<"Three ";break;
        case Four:cout<<setw(21)<<"Four ";break;
        case Five:cout<<setw(21)<<"Five ";break;
        case Six:cout<<setw(21)<<"Six ";break;
        case Seven:cout<<setw(21)<<"Seven ";break;
        case Eight:cout<<setw(21)<<"Eight ";break;
        case Nine:cout<<setw(21)<<"Nine ";break;
        case Jack:cout<<setw(21)<<"Jack ";break;
        case Queen:cout<<setw(21)<<"Queen ";break;
        case King:cout<<setw(21)<<"King ";break;
    }
    switch(suits){
        case OfDiamonds:cout<<"Of Diamonds";break;
        case   OfSpades:cout<<"Of Spades";break;
        case   OfHearts:cout<<"Of Hearts";break;
        case   OfClubs :cout<<"Of Clubs";break;
    }
     cout<<endl;
}

void addDecks(vector<int> &stack){
    vector<int> newdecks;
    int cut=0;
    int count1=1;
    int temp=0;
    for(int i=0;i<312;i++){
        newdecks.push_back(count1);
        count1++;        
    }
    Shuffle(newdecks);
    cout<<"\n6 new decks, shuffled together.\n";
    cout<<"Cut the deck (1-312):";
    cin>>cut;
    if(cut<0||cut>312){
        cut=156;
        cout<<"\nInvalid input. Cutting deck in half.\n";
    }
    for(int i=0;i<cut;i++){
        temp=newdecks[0];
        newdecks.push_back(temp);
        newdecks.erase(newdecks.begin());
    }
    cout<<"\nBurning the top card.";
        newdecks.erase(newdecks.begin());
    cout<<"\nAdding the new decks to the stack.\n";
    int vec=newdecks.size();
    for(int i=0;i<vec;i++){
        stack.push_back(newdecks[i]);
    }
    temp=stack.size();
    temp+=1;
    cout<<"Deck total: "<<temp<<endl;
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
