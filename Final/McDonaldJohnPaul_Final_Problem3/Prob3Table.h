/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Prob3Table.h
 * Author: jaymc
 *
 * Created on December 17, 2021, 3:24 PM
 */

#ifndef PROB3TABLE_H
#define PROB3TABLE_H

template<class T>
class Prob3Table{
protected:
    int rows; //Number of rows in the table
    int cols; //Number of cols in the table
    T *rowSum; //RowSum array
    T *colSum; //ColSum array
    T *table; //Table array
    T grandTotal; //Grand total
    void calcTable(void); //Calculate all the sums
public:
    Prob3Table(char *,int,int); //Constructor then Destructor
    ~Prob3Table(){delete [] table;delete [] rowSum;delete [] colSum;};
    const T *getTable(void){return table;};
    const T *getRowSum(void){return rowSum;};
    const T *getColSum(void){return colSum;};
    T getGrandTotal(void){return grandTotal;};
};

template<class T>
class Prob3TableInherited:public Prob3Table<T>{
protected:
    T *augTable; //Augmented Table with sums
public:
    Prob3TableInherited(char *,int,int); //Constructor
    ~Prob3TableInherited(){delete [] augTable;}; //Destructor
    const T *getAugTable(void){return augTable;};
};

#endif /* PROB3TABLE_H */

