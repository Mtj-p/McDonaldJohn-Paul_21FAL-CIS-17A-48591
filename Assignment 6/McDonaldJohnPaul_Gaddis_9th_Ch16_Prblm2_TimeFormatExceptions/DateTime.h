/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DateTime.h
 * Author: jaymc
 *
 * Created on December 12, 2021, 8:01 PM
 */


#ifndef DATETIME_H
#define DATETIME_H
#include <string>
#include "Date.h"
#include "Time.h"
using namespace std;

class DateTime : public Date, public Time
{
public:
   // Default constructor
   DateTime();
   
   // Constructor
   DateTime(int, int, int, int, int, int);

   // The showDateTime function displays the
   // date and the time.
   void showDateTime() const;
};

#endif /* DATETIME_H */

