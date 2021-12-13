/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GradedActivity.h
 * Author: jaymc
 *
 * Created on December 12, 2021, 8:39 PM
 */

#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

// GradedActivity class declaration

class GradedActivity
{
protected:
   double score;   // To hold the numeric score
public:
   // Default constructor
   GradedActivity()
      { score = 0.0; }

   // Constructor
   GradedActivity(double s)
      { score = s; }

   // Mutator function
   void setScore(double s) 
      { score = s; }
   
   // Accessor functions
   double getScore() const
      { return score; }
   
   char getLetterGrade() const;
};

#endif /* GRADEDACTIVITY_H */

