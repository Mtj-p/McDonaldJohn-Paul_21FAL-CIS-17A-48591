
#include "Deck.h"
#include <ctime>
#include <iostream>
using namespace std;


Deck::Deck(){
    
    nCards=nCards>156?nCards:156;
    nShuffle=10;
    index = new unsigned char[nCards];
    card = new Card*[nCards];
    for(unsigned char crd=0;crd<nCards;crd++){
        card[crd]=new Card(crd);
        index[crd]=crd;
    }
    shuffle();
    cout<<"\nNew Deck ready to go!\n";
}

Deck::~Deck(){
    for(unsigned char crd=0;crd<nCards;crd++){
        delete card[crd];
    }
    delete []index;
    delete []card;
}


void Deck::shuffle(){
    for(int i=0;i<=nShuffle;i++){
        for(int j=0;j<nShuffle;j++){
            unsigned char temp1=rand()%nCards;
            unsigned char temp2=index[j];
            index[j]=index[temp1];
            index[temp1]=temp2;
        }
    }
    
}

Deck Deck::operator ++ (){
    if(nCards<156){
        nCards+=52;
    }
    if(nCards>=156){
        cout<<"You cannot add more decks at this time.";
    }
    shuffle();
    return *this;
}
Deck Deck::operator ++ (int){
    Deck temp;
    if(nCards<156){
        nCards+=52;
    }
    if(nCards>=156){
        cout<<"You cannot add more decks at this time.";
    }
    shuffle();
    return temp;
}   

void Deck::display(){
    for(unsigned char crd=0;crd<nCards;crd++){
        cout<<static_cast<int>(index[crd])<<" "<<card[index[crd]]->face()<<
                card[index[crd]]->suit()<<" "<<
                static_cast<int>(card[index[crd]]->value())<<endl;
    }
}

unsigned char Deck::getnCards(){
    return nCards;
}

