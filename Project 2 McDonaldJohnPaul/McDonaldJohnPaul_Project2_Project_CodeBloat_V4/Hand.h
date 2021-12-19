
#ifndef HAND_H
#define HAND_H

#include "Card.h"

class Hand {
protected:
    unsigned char handsize;
    unsigned char * myhand;
public:
    Hand(unsigned char*,unsigned char);
    ~Hand(){delete []myhand;}
    Hand(const Hand&);
    void clearhand(){delete []myhand;}
    unsigned char * getHand();
    unsigned char getHandsize();
    void display();
};

#endif /* HAND_H */

