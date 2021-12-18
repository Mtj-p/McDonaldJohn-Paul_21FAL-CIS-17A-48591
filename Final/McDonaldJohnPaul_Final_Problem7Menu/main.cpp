/*
 * file: McDonaldJohnPaul_Final_Problem7Menu
 * Author: John-Paul McDonald
 * Date: 12/17/2021
 * Purpose: Menu with aggregate problems
 */


#include <iostream>
#include <iomanip>

#include "Prob1Random.h"
#include "SavingsAccount.h"
#include "Employee.h"

using namespace std;

void menu();
void prblm1();
void prblm4();
void prblm5();


int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    cout<<"I spent way too long on problem 2. In problem2_v2 Prob2Sort.h\n"
            "lines 53-64 I believe I understood the logic for implementing a bubble sort\n"
            "based on a specific column. My main issue was utilizing the index and\n"
            "returning a character pointer. I tried to recreate the file but\n"
            "any file with newlines was counting as 2 characters in the array.\n"
            "This was messing up the driver's 1-159 cout loop - so I ended up\n"
            "opting for a file with spaces instead of newlines so that they would\n"
            "be read in as a single character.\n";

    //Loop and Display menu
    do{
        menu();
        cin>>choice;

        //Process/Map inputs to outputs
        switch(choice){
            case '1':{prblm1();break;}
            case '2':break;
            case '3':break;
            case '4':{prblm4();break;}
            case '5':{prblm5();break;}
            default: cout<<"Exiting Menu"<<endl;
        }
    }while(choice>='1'&&choice<='5');
    
    //Exit stage right!
    return 0;
    
}

void menu(){
    //Display menu
    cout<<endl<<"Choose from the following Menu"<<endl;
    cout<<"Type 1 for Problem 1"<<endl;
    cout<<"Type 4 for Problem 4"<<endl;   
    cout<<"Type 5 for Problem 5"<<endl<<endl;
}

void prblm1(){
    cout<<"Problem 1"<<endl;
    
    srand(static_cast<unsigned int>(time(0))); //set time = 0 so that rand is pseudorandom
    char n=5;
    char rndseq[]={29,34,57,89,126};
    int ntimes=100000;
    Prob1Random a(n,rndseq);    
    for(int i=1;i<=ntimes;i++){
        a.randFromSet();
    }      
    int *x=a.getFreq();
    char *y=a.getSet();
    for(int i=0;i<n;i++){
        cout<<int(y[i])<<" occurred "<<x[i]<<" times"<<endl;
    }
    
    cout<<"The total number of random numbers is "<<a.getNumRand()<<endl;
    
    cout<<"End Problem 1"<<endl;
}

void prblm4(){
    cout<<"problem 4"<<endl;
    
    srand(static_cast<unsigned int>(time(0)));
    SavingsAccount mine(-300);
    for(int i=1;i<=10;i++){
        mine.Transaction((float)(rand()%500)*(rand()%3-1));
    }
    mine.toString();
    cout.precision(2);
    cout<<fixed<<"Balance after 7 years given 10% interest = "
        <<mine.Total((float)(0.10),7)<<endl;
    cout<<fixed<<"Balance after 7 years given 10% interest = "
        <<mine.TotalRecursive((float)(0.10),7)
        <<" Recursive Calculation "<<endl;
    
    cout<<"End Problem 4"<<endl;
}

void prblm5(){
    cout<<"problem 5"<<endl;
    
    Employee Mark("Mark","Boss",215.50);
    Mark.setHoursWorked(-3);
    Mark.toString();
    Mark.CalculatePay(Mark.setHourlyRate(20.0),Mark.setHoursWorked(25));
    Mark.toString();
    Mark.CalculatePay(Mark.setHourlyRate(40.0),Mark.setHoursWorked(25));
    Mark.toString();
    Mark.CalculatePay(Mark.setHourlyRate(60.0),Mark.setHoursWorked(25));
    Mark.toString();
    Employee Mary("Mary","VP",50.0);
    Mary.toString();
    Mary.CalculatePay(Mary.setHourlyRate(50.0),Mary.setHoursWorked(40));
    Mary.toString();
    Mary.CalculatePay(Mary.setHourlyRate(50.0),Mary.setHoursWorked(50));
    Mary.toString();
    Mary.CalculatePay(Mary.setHourlyRate(50.0),Mary.setHoursWorked(60));
    Mary.toString();
    
    cout<<"End Problem 5"<<endl;
}