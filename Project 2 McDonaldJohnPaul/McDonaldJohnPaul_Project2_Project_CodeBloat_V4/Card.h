
#ifndef CARD_H
#define CARD_H

#include "AbstractCard.h"

#include <string>
using namespace std;

class Card : public AbstractCard{
private:
    unsigned char rawCardValue;
public:
    Card();
    Card(unsigned char);
    unsigned char newcard(unsigned char);
    unsigned char suit();
    unsigned char face();
    unsigned char value();
    Card operator+(const Card&);

};

#endif /* CARD_H */

