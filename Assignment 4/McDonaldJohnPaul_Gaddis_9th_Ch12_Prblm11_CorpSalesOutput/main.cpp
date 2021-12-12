/*
 * file: McDonaldJohnPaul_Gaddis_9th_Ch12_Prblm11_CorpSalesOutput
 * Author: John-Paul McDonald
 * Date: 12/12/2021
 * Purpose: Store user inputs in a struct and export to a file.
 */

//System Libraries
#include <iostream>
#include <fstream>
#include "CDOutput.h"

using namespace std;

CDataOut DataOutput();
void StoreData(CDataOut);

int main(int argc, char** argv) {
    
    CDataOut input; //creates instance of struct in main to pass from function to function
    bool user = true; //for user menu
    while(user){//while always start true
        int userin = 0; //sets to 0 at the start of every loop
        cout<<"Would you like to input a set of Company Data? 1 yes 2 no: ";//user menu
        cin>>userin;
        if(userin==1){
            input=DataOutput();//calls function that handles "output"
            StoreData(input);//pushes the data into the company file
        }//input validation
        if(userin==2){
            user=false;
        }//input validation        
    }
    cout<<"\nThank you.\n";
    return 0;
}


CDataOut DataOutput(){
    CDataOut input;//
    cout<<"Please input the company division: ";//question does not ask for validation of this
    cin.clear();
    cin.ignore();//was getting errors when the user inputted a series of junk before calling this function
    getline(cin,input.divname);//grabs the division name
    cout<<"Quarter #: ";//question does not ask for validation of this
    cin>>input.quarter;//grabs the quarter #
    float sales = -1;//input validation for the sales amount
    while(sales<0){
        cout<<"Quarterly Sales (must be positive) $: ";
        cin>>sales;
    }//this won't allow the program to continue without entering a positive number
    //this will break if someone inputs a quarterly sales # greater than a float
    //if they are inputting numbers bigger than a float they can afford a better program
    if(sales>=0){
        input.qsales=sales;
    }//second layer of validation
    return input;//returns the structure to main
}


void StoreData(CDataOut input){
    fstream DataFile;//fstream creation
    string file =  "CompanyFiles.txt";//standardized file for company sales data
    DataFile.open(file,ios::out|ios::app);//opening the file to append data, does not delete the data already in the file
    while(DataFile){
        DataFile<<"Division: "<<input.divname<<'\n'<<"Quarter: "<<input.quarter<<'\n'<<"Sales: $"<<input.qsales<<'\n'<<'\n';
        DataFile.close();
    }//Pushes the data into the file and makes it look readable for anyone who views it.
}