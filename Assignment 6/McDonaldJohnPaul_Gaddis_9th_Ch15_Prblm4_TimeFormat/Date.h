/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Date.h
 * Author: jaymc
 *
 * Created on December 12, 2021, 8:01 PM
 */

#ifndef DATE_H
#define DATE_H

class Date
{
protected:
   int day;
   int month;
   int year;
public:
   // Default constructor
   Date() 
      { day = 1; month = 1; year = 1900; }

   // Constructor 
   Date(int d, int m, int y) 
      { day = d; month = m; year = y; }

   // Accessors
   int getDay() const 
      { return day; }

   int getMonth() const
      { return month; }

   int getYear() const
      { return year; }
};

#endif /* DATE_H */

