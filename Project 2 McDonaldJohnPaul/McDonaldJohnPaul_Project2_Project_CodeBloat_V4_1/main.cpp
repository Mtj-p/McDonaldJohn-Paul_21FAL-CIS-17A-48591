/*
 * file: McDonaldJohnPaul_Project2_Project_CodeBloat_V1
 * Author: John-Paul McDonald
 * Date: 12/18/2021
 * Purpose: Version 4.1 Starting point: Still need concrete game mechanics and
 *          a dealer that can deal cards, but showed that the Dealer can
 *          generate a new deck at the start of every round. This will ensure
 *          The deck does not deplete. Each deck refresher starts with 3 decks.
 */

//System Libraries


#include <iostream>
#include "Deck.h"
#include "Dealer.h"
#include "ActiveGame.h"

using namespace std;


int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    
    
    Dealer John("John");
    Player Suzzy("Suzzy");
    Suzzy.setHand(John.deal(4));  
    ActiveGame a(1);
    a.setActiveHand(Suzzy.getHand());
    return 0;
}
