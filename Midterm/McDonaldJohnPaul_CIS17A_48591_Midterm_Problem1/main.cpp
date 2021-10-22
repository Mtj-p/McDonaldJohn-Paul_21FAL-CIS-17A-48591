/*
 * file: McDonaldJohnPaul_CIS17A_48591_Midterm_Problem1
 * Author: John-Paul McDonald
 * Date: 10/21/2021
 * Purpose: Checking Account Balance
 */

//System Libraries
#include <iostream>
#include <string>
#include <ios>
#include <limits>
#include <iomanip>
#include <cstdlib>
#include <algorithm>

using namespace std;

//User Libraries
#include "Bank.h"
//Global Constants
//Universal Math, Physics, Conversions, Higher Dimensions
//Prototypes
//Execution Begins Here

Bank *fillBank();
void destroy(Bank *);
void BPrnt(Bank *);
void recAdd(Bank *);
void recCheck(Bank *);
void recDeposit(Bank *);
bool isNumber(const string&);
void bankmenu1();
void bankmenu2();
void bverify(Bank *);
        
int main(int argc, char** argv) {
    //Initialize Random Number Seed
    
    //Declare Variables
    Bank *member;
    
    
    //Initialize Variables
    
    //Process the inputs -> outputs
    int counter=0;
    bool banker=true;
    int bankers = 0;
    
    while(banker){
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout<<"\nHello and welcome to the Bank.\n";
        cout<<"Would you like to register your balance?\n";
        cout<<"If yes press 1. If no press 2. ";
        //cin.ignore();
        cin>>bankers;
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        switch(bankers){
            case 1:{
                Bank *member;
                member = fillBank();
                BPrnt(member);
                recAdd(member);
                BPrnt(member);
                bverify(member);
                destroy(member);
                break;
            }
            default:cout<<"\nThank you for using this banking application. \n";
            cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Goodbye.~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
            banker=false;
        }
    }
    //Display the results, verify inputs
    
    //Clean up and exit
    return 0;
}

Bank *fillBank(){
    cin.ignore();
    string acc;
    string name1;
    string address1;
    float bal;
    bool flag = false;
    bool isnum = false;
    int count=0;
    while(!flag){
        cout<<"\nPlease enter your account number: ";
        if(!flag){
            getline(cin,acc);
            if(acc.length()!=5){
                cout<<"\nInvalid length\n";
                count++;
            }
            if(acc.length()==5){
                isnum=isNumber(acc);
                if(isnum==true){
                    flag=true;
                }
                else{
                    cout<<"\nInvalid numbers\n";
                    count++;
                }
            }
        }
        if(count==5){
            cout<<"Too many errors.";
            exit(1);
        }
    }
    
    Bank *a= new Bank;
    (*a).accnum=acc;
    cout<<"\nPlease enter your name: ";
    getline(cin,name1);
    cout<<"\nPlease enter your address: ";
    getline(cin,address1);
    cout<<"\nPlease enter your current balance: $";
    cin>>bal;
    (*a).name=name1;
    (*a).address=address1;
    (*a).balance=bal;
    (*a).numrec=0;
    (*a).numcheck=0;
    (*a).numdeposit=0;
    return a;
}


bool isNumber(const string& a){
    return a.find_first_not_of("0123456789") == string::npos;
}

void BPrnt(Bank *a){
    ostringstream bout;
    ostringstream newbout;
    int checknum=1;
    int deponum=1;
    bout<<"$"<<fixed<<setprecision(2)<<(*a).balance;
    cout<<"\n\nAccount Number: "<<setw(50)<<(*a).accnum<<"\nName: "<<setw(60)<<(*a).name<<"\nAddress: "<<setw(57)<<
            (*a).address;
    if((*a).numrec>0){
        cout<<"\nInitial Balance: "<<setw(49)<<bout.str()<<endl<<endl;
        for(int i=0;i<(*a).numrec;i++){
            if((*a).record[i]>0){
                ostringstream depos;
                depos<<"$"<<fixed<<setprecision(2)<<(*a).record[i];
                cout<<"Deposit #"<<deponum<<setw(56)<<depos.str()<<endl;
                (*a).balance+=(*a).record[i];
                deponum++;
            }
        }
        for(int i=0;i<(*a).numrec;i++){
            if((*a).record[i]<0){
                ostringstream chekos;
                chekos<<"$"<<fixed<<setprecision(2)<<(*a).record[i]*-1;
                cout<<"Check #"<<checknum<<setw(58)<<chekos.str()<<endl;
                (*a).balance+=(*a).record[i];
                checknum++;
            }
        }
        
        newbout<<"$"<<fixed<<setprecision(2)<<(*a).balance;
        cout<<"\nNew Balance: "<<setw(53)<<newbout.str()<<endl;
    }else{cout<<"\nCurrent Balance: "<<setw(49)<<bout.str()<<endl<<endl;};
}

void recAdd(Bank *a){
    char swi;
    do{
        bankmenu2();
        cin.clear();
        cin>>swi;
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        //Process/Map inputs to outputs
        switch(swi){
            case '1':{recCheck(a);break;}
            case '2':{recDeposit(a);break;}            
            default: cout<<"\t\t\t    Thank you"<<endl;
        }
    }while(swi>='1'&&swi<='2');
}

void recCheck(Bank *a){
    cout<<"Check amount:                       $";
    float check1;
    cin>>check1;
    check1*=-1;
    (*a).record.push_back(check1);
    (*a).numrec+=1;
    (*a).numcheck+=1;
    cout<<"\nCheck #"<<(*a).numcheck<<" will withdraw $"<<fixed<<setprecision(2)<<(*a).record.back()*-1<<endl;
}

void recDeposit(Bank *a){
    cout<<"Deposit amount:                     $";
    float check1;
    cin>>check1;
    (*a).record.push_back(check1);
    (*a).numrec+=1;
    (*a).numdeposit+=1;
    cout<<"\nYou have deposited $"<<fixed<<setprecision(2)<<(*a).record.back()<<"\nThis is deposit number "<<setprecision(0)<<(*a).numdeposit<<"."<<endl;
}

void bankmenu2(){
    //Display menu
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout<<endl<<"\nAre you withdrawing a check or depositing credits? "<<endl;
    cout<<"Press 1 to record a written check."<<endl;
    cout<<"Press 2 to record deposited credits."<<endl<<endl;
}
void bverify(Bank *a){
    if((*a).balance<0){
        ostringstream newbout;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout<<"                    Negative balance. $25 fee.                     \n";
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        (*a).balance-=25;
        newbout<<"$"<<fixed<<setprecision(2)<<(*a).balance;
        cout<<"\nFee Adjusted Balance: "<<setw(44)<<newbout.str()<<endl;
    }
}

void destroy(Bank *a){
    delete a;
}
