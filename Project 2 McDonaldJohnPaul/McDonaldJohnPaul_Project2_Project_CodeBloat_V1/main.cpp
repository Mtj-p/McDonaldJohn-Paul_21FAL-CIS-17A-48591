/*
 * file: McDonaldJohnPaul_Project2_Project_CodeBloat_V1
 * Author: John-Paul McDonald
 * Date: 12/18/2021
 * Purpose: Version 1 is to create a basis for a game of BlackJack converted
 *          and recycled from Project 1
 */

//System Libraries


#include <iostream>
#include "Card.h"
using namespace std;


int main(int argc, char** argv) {
    Card here;
    
    for(unsigned char i=0;i<104;i++){
        here.newcard(i);
        cout<<here.face()<<"  ";
        cout<<here.suit()<<"  ";
        cout<<here.value()+0;
        cout<<" | ";
        if(i%13==12){
            cout<<endl;
        }
        else{
            cout<<" ";
        }
        
    }
    return 0;
}
