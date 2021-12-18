/*
 * file: McDonaldJohnPaul_Project2_Project_CodeBloat_V1
 * Author: John-Paul McDonald
 * Date: 12/18/2021
 * Purpose: Version 2 Starting point: Card.h and Card.cpp work, going to have
 *          Deck have Card as a base class.
 */

//System Libraries


#include <iostream>
#include "Deck.h"
using namespace std;


int main(int argc, char** argv) {
    Deck h;
    cout<<h.getnCards()+0<<endl;
    h.display();
    h++;
    cout<<h.getnCards()+0<<endl;
    return 0;
}
