/*
 * file: McDonaldJohnPaul_Gaddis_9th_Ch14_Prblm9_FeetInchesMod
 * Author: John-Paul McDonald
 * Date: 12/12/2021
 * Purpose: The purpose of this program was to take the book's version
 *          of the FeetInches program and implement overloaded operators
 *          <= >= and !=.
 */

//System Libraries
// This program demonstrates the the FeetInches class's
// conversion functions.
#include <iostream>
#include "FeetInchesCopy.h"
using namespace std;

int main()
{
   double d;  // To hold double input
   int i;     // To hold int input

   // Define a FeetInches object.
   FeetInches distance;
   FeetInches distance2; // my work

   // Get a distance from the user.
   cout << "Enter a distance in feet and inches:\n";
   cin >> distance;

   
   //my work
   // Get a distance from the user.
   cout << "Enter a distance in feet and inches:\n";
   cin >> distance2;

   // Display the values.
   cout << "The value " << distance <<endl;
  
   cout << "The value " << distance2 <<endl;
   
   if(distance>=distance2){
       cout<<distance<<" is larger or equal to "<<distance2<<".\n";
   }
   if(distance<=distance2){
       cout<<distance<<" is smaller or equal to "<<distance2<<".\n";
   }
   if(distance!=distance2){
       cout<<distance<<" is not equal to "<<distance2<<endl;
   }
   
   //not my work
   if(distance==distance2){
       cout<<distance<<" is equal to "<<distance2<<endl;
   }
  
   return 0;
}