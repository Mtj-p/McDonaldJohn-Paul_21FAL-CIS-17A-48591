/* 
 * File:   McDonaldJohnPaul_CIS17A_48591_Midterm_Menu
 * Author: John-Paul McDonald
 * Purpose:  Midterm Menu
 */

//System Libraries
#include <iostream>
#include <string>
#include <ios>
#include <limits>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

//User Libraries
#include "Bank.h"
#include "GrossPay.h"
#include "Prime.h"
#include "Primes.h"
//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void menu();
void prblm1();
void prblm2();
void prblm3();
void prblm4();
void prblm5();
void prblm6();
void prblm7();

//problem 1
Bank *fillBank();
void destroy(Bank *);
void BPrnt(Bank *);
void recAdd(Bank *);
void recCheck(Bank *);
void recDeposit(Bank *);
bool isNumber1(const string&);
void bankmenu1();
void bankmenu2();
void bverify(Bank *);

//problem 2
GrossPay *fillCheck(int &);
void prntChecks(GrossPay *,int);
void finalPay(GrossPay *,int);
void destroyGP(GrossPay *);
void romanCalc(GrossPay *,int);

//problem 4
bool isNumber2(const string&);
string enCrypt(string);
string deCrypt(string);
string getNum();

//problem 7 *incomplete*
Primes *factor(int);//Input an integer, return all prime factors
void prntPrm(Primes *);//Output all prime factors
void destroy(Primes *);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    //Loop and Display menu
    do{
        menu();
        cin>>choice;

        //Process/Map inputs to outputs
        switch(choice){
            case '1':{cin.ignore();cin.clear();prblm1();break;}
            case '2':{cin.ignore();cin.clear();prblm2();break;}
            case '3':{cin.ignore();cin.clear();prblm3();break;}
            case '4':{cin.ignore();cin.clear();prblm4();break;}
            case '5':{cin.ignore();cin.clear();prblm5();break;}
            case '6':{cin.ignore();cin.clear();prblm6();break;}
            case '7':{cin.ignore();cin.clear();prblm7();break;}
            default: cout<<"Exiting Menu"<<endl;
        }
    }while(choice>='1'&&choice<='7');
    
    //Exit stage right!
    return 0;
}


void menu(){
    //Display menu
    cout<<endl<<"Choose from the following Menu"<<endl;
    cout<<"Type 1 for Problem 1"<<endl;
    cout<<"Type 2 for Problem 2"<<endl;
    cout<<"Type 3 for Problem 3"<<endl;   
    cout<<"Type 4 for Problem 4"<<endl;
    cout<<"Type 5 for Problem 5"<<endl;
    cout<<"Type 6 for Problem 6"<<endl;
    cout<<"Type 7 for Problem 7"<<endl<<endl;
}


void prblm1(){
    cout<<"Problem 1"<<endl;
    
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
}

void prblm2(){
    cout<<"Problem 2"<<endl;
    
    //Initialize Random Number Seed
    
    //Declare Variables
    
    GrossPay *empCheck;
    int nEmploy=2;
    //Initialize Variables
    empCheck=fillCheck(nEmploy);
    finalPay(empCheck,nEmploy);
    //Process the inputs -> outputs
    prntChecks(empCheck,nEmploy);
    //Display the results, verify inputs
    destroyGP(empCheck);
    //Clean up and exit
    
}

void prblm3(){
    cout<<"Problem 3"<<endl;
    cout<<"Problem 3 is in another project."<<endl;
}

void prblm4(){
    cout<<"problem 4"<<endl;
    int switcher=0;
    bool crypt=true;
    string num;
    string finish;
    while(crypt){
        cout<<"Would you like to encrypt or decrypt  a number?\n"
            "press 1 for encryption, press 2 for decryption: ";
        //cin.ignore();
        cin>>switcher;
        switch(switcher){
            case 1:{
                num=getNum();
                finish=enCrypt(num);
                cout<<"Entered Number:   "<<num<<endl;
                cout<<"Encrypted Number: ";
                for(int i=0;i<4;i++){
                    cout<<finish[i];
                }
                cout<<endl;
                break;
            }
            case 2:{
                num=getNum();
                finish=deCrypt(num);
                cout<<"Entered Number:   "<<num<<endl;
                cout<<"Decrypted Number: ";
                for(int i=0;i<4;i++){
                    cout<<finish[i];
                }
                cout<<endl;
                break;
            }
            default:crypt=false;
        }
    }
}

void prblm5(){
    cout<<"problem 5"<<endl;
    cout<<"5a) n=!5 \n"
            "5b) Primitive Data Types:\n"
            "Char"<<setw(40)<<"n=!5\n"
            "Unsigned Char"<<setw(27)<<" n=!5\n"
            "Short Int"<<setw(40)<<"n=!7\n"
            "Unsigned Short Int"<<setw(16)<<" n=!8\n"
            "Int"<<setw(41)<<" n=!12\n"
            "Unsigned Int"<<setw(24)<<" n=!12\n"
            "Long"<<setw(41)<<" n=!20\n"
            "Unsigned Long"<<setw(24)<<" n=!20\n"
            "Float"<<setw(33)<<" n=!19\n"
            "Double"<<setw(37)<<" n=!19\n"
            "Long Double"<<setw(21)<<" n=!19\n";
}
void prblm6(){
    cout<<"problem 6"<<endl;
    
    cout<<"6a) 49.1875 b10 == 0.110 0010 0110 0000 0000 0000 0110 b2 or 62600006 b16 (NASA)\n";
    cout<<"6a) 3.07421875 b10 == 0.110 0010 0110 0000 0000 0000 0000 0010 b2 or 62600002 b16 (NASA)\n";
    cout<<"6a) .2 b10 == 0.110 0110 0110 0110 0110 0110 1111 1110 b2 or 666666FE b16 (NASA)\n";
    cout<<"6b) -49.1875 b10 == 0.110 0111 0110 1000 0000 0000 0000 1000 b2 or 67680008 b16\n";
    cout<<"6b) -3.07421875 b10 == 0.110 0111 0110 1000 0000 0000 0000 0100 b2 or 67680004 b16\n";
    cout<<"6b) -.2 b10 == 0.111 1110 0110 0110 0110 1000 0000 0100 b2 or 7E666804 b16\n";
    cout<<"6c) 69999902 b16 == 3.412121212 b10\n";
    cout<<"6c) 699999903 b16 == 6.9 repeating b10\n";
    cout<<"6c) 966667FF b16 == 2.6999912 b10\n";
 }
void prblm7(){
    cout<<"problem 7"<<endl;
    Primes *stu;
    bool factoring=true;
    while(factoring){
            cout<<"Would you like to find the prime factors of a number? \n"
                    "1 for yes, or 2 for no: ";
            int b=0;
            cin>>b;
            switch(b){
                case 1:{cout<<"Please enter any number between 2 and 65000: ";
                            int a;
                            cin>>a;
                            if(a>1&&a<65001){
                                stu=factor(a);
                                prntPrm(stu);
                                destroy(stu);
                            }
                }
                default:{factoring=false;}
            }
    }   
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
                isnum=isNumber1(acc);
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


bool isNumber1(const string& a){
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

GrossPay *fillCheck(int &nEmploy){
    cout<<"\nThis program will calculate gross pay and\n"
            "print checks for your company. Lets start with some\n"
            "basic information.\n"
            "What is the name of your company?: ";
    string comp;
    string caddy;
    string cwriter;
    cin.clear();
    getline(cin,comp);
    cout<<"What is the address of your company?: ";
    getline(cin,caddy);
    cout<<"What is your check writer's name?: ";
    getline(cin,cwriter);
            
    cout<<"How many employees do you have?: ";
    cin>>nEmploy;
    
    GrossPay *payChecks=new GrossPay[nEmploy];
    for(int i=0;i<nEmploy;i++){
        payChecks[i].company=comp;
        payChecks[i].addy=caddy;
        payChecks[i].boss=cwriter;
        cin.ignore();
        cout<<"\nEmployee #"<<i+1<<".\nName: ";
        getline(cin,payChecks[i].employname);
        cout<<"Hours worked: ";
        cin>>payChecks[i].hours;
        if(payChecks[i].hours<0){
            cout<<"\n\nInvalid entry. Exiting input phase.";break;
        }
        cout<<"Pay per hour: $";
        cin>>payChecks[i].payrate;
        if(payChecks[i].payrate<0){
            cout<<"\n\nInvalid entry. Exiting input phase.";break;
        }
    }
    return payChecks;
}

void prntChecks(GrossPay *a,int b){
    for(int i=0;i<b;i++){
        ostringstream newbout;
       
        
        cout<<endl<<"Check #"<<i+1<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        newbout<<"$"<<fixed<<setprecision(2)<<a[i].finalpay;
        cout<<a[i].company<<endl;
        cout<<a[i].addy<<endl;
        cout<<"Pay to the order of: "<<setw(35)<<a[i].employname<<setw(20)<<newbout.str()<<endl;
        romanCalc(a,i);
        cout<<endl;
        cout<<setw(76)<<a[i].boss<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    }
}

void finalPay(GrossPay *a,int b){
    for(int i=0;i<b;i++){
        if(a[i].hours<=40){
            a[i].finalpay=(a[i].hours*a[i].payrate);
        }
        if(a[i].hours>40&&a[i].hours<=60){
            a[i].finalpay=((40*a[i].payrate)+((a[i].hours-40)*a[i].payrate*2));
        }
        if(a[i].hours>60){
            a[i].finalpay=((40*a[i].payrate)+(20*a[i].payrate*2)+((a[i].hours-60)*a[i].payrate*3));
        }
    }
}

void romanCalc(GrossPay *a,int b){
    
    unsigned char n10000000s,n1000000s,n100000s,n10000s,n1000s,n100s,n10s,n1s;
    float np1s,np01s,np001s=0;
        if(n10000000s=(fmod(a[b].finalpay,100000000)==0)){
            cout<<"Check larger than 10 million dollars."<<endl;
        } 
        n1000000s=      fmod(a[b].finalpay,10000000)       /1000000;
        n100000s=       fmod(a[b].finalpay,1000000)        /100000;
        n10000s=        fmod(a[b].finalpay,100000)         /10000;
        n1000s=         fmod(a[b].finalpay,10000)          /1000;    
        n100s=          fmod(a[b].finalpay,1000)           /100;           
        n10s=           fmod(a[b].finalpay,100)            /10;             
        n1s=            fmod(a[b].finalpay,10);
        np1s=           fmod(a[b].finalpay,1.0);
        float f3;
        float f2 = modf(a[b].finalpay,&f3);
        f2=f2*100;
        
        float f4;
        float f5;
        f4 = modf(f2,&f5);
        float n2Decimal = f5;
               
        if(n10000s==9&&n1000s==0)cout<<"Ninety thousand ";
        if(n10000s==8&&n1000s==0)cout<<"Eighty thousand ";
        if(n10000s==7&&n1000s==0)cout<<"Seventy thousand ";
        if(n10000s==6&&n1000s==0)cout<<"Sixty thousand ";
        if(n10000s==5&&n1000s==0)cout<<"Fifty thousand ";
        if(n10000s==4&&n1000s==0)cout<<"Forty thousand ";
        if(n10000s==3&&n1000s==0)cout<<"Thirty thousand ";
        if(n10000s==2&&n1000s==0)cout<<"Twenty thousand ";
        if(n10000s==9&&n1000s!=0)cout<<"Ninety-";
        if(n10000s==8&&n1000s!=0)cout<<"Eighty-";
        if(n10000s==7&&n1000s!=0)cout<<"Seventy-";
        if(n10000s==6&&n1000s!=0)cout<<"Sixty-";
        if(n10000s==5&&n1000s!=0)cout<<"Fifty-";
        if(n10000s==4&&n1000s!=0)cout<<"Forty-";
        if(n10000s==3&&n1000s!=0)cout<<"Thirty-";
        if(n10000s==2&&n1000s!=0)cout<<"Twenty-";
        if(n10000s==1){       
            if(n1000s==9)cout<<"Nineteen thousand ";
            else if(n1000s==8)cout<<"Eighteen thousand ";
            else if(n1000s==7)cout<<"Seventeen thousand ";
            else if(n1000s==6)cout<<"Sixteen thousand ";
            else if(n1000s==5)cout<<"Fifteen thousand ";
            else if(n1000s==4)cout<<"Fourteen thousand ";
            else if(n1000s==3)cout<<"Thirteen thousand ";
            else if(n1000s==2)cout<<"Twelve thousand ";
            else if(n1000s==1)cout<<"Eleven thousand ";
            else if(n1000s==0)cout<<"Ten thousand ";
        }  
    
    if(n1000s==9)cout<<"Nine thousand ";
    if(n1000s==8)cout<<"Eight thousand ";
    if(n1000s==7)cout<<"Seven thousand ";
    if(n1000s==6)cout<<"Six thousand ";
    if(n1000s==5)cout<<"Five thousand ";
    if(n1000s==4)cout<<"Four thousand ";
    if(n1000s==3)cout<<"Three thousand ";
    if(n1000s==2)cout<<"Two thousand ";
    if(n1000s==1)cout<<"One thousand ";
    
     cout<<(n100s==9?"Nine Hundred ":
               n100s==8?"Eight Hundred ":
               n100s==7?"Seven Hundred ":
               n100s==6?"Six Hundred ":
               n100s==5?"Five Hundred ":
               n100s==4?"Four Hundred ":
               n100s==3?"Three Hundred ":
               n100s==2?"Two Hundred ":
               n100s==1?"One Hundred ":" ");
        if(n10s==9&&n1s==0)cout<<"Ninety ";
        if(n10s==8&&n1s==0)cout<<"Eighty ";
        if(n10s==7&&n1s==0)cout<<"Seventy ";
        if(n10s==6&&n1s==0)cout<<"Sixty ";
        if(n10s==5&&n1s==0)cout<<"Fifty ";
        if(n10s==4&&n1s==0)cout<<"Forty ";
        if(n10s==3&&n1s==0)cout<<"Thirty ";
        if(n10s==2&&n1s==0)cout<<"Twenty ";
        if(n10s==9&&n1s!=0)cout<<"Ninety-";
        if(n10s==8&&n1s!=0)cout<<"Eighty-";
        if(n10s==7&&n1s!=0)cout<<"Seventy-";
        if(n10s==6&&n1s!=0)cout<<"Sixty-";
        if(n10s==5&&n1s!=0)cout<<"Fifty-";
        if(n10s==4&&n1s!=0)cout<<"Forty-";
        if(n10s==3&&n1s!=0)cout<<"Thirty-";
        if(n10s==2&&n1s!=0)cout<<"Twenty-";
        if(n10s==1){       
            if(n1s==9)cout<<"Nineteen ";
            else if(n1s==8)cout<<"Eighteen ";
            else if(n1s==7)cout<<"Seventeen ";
            else if(n1s==6)cout<<"Sixteen ";
            else if(n1s==5)cout<<"Fifteen ";
            else if(n1s==4)cout<<"Fourteen ";
            else if(n1s==3)cout<<"Thirteen ";
            else if(n1s==2)cout<<"Twelve ";
            else if(n1s==1)cout<<"Eleven ";
            else if(n1s==0)cout<<"Ten ";
        }
        if(n10s!=1){
            if(n1s==9)cout<<"Nine ";
            if(n1s==8)cout<<"Eight ";
            if(n1s==7)cout<<"Seven ";
            if(n1s==6)cout<<"Six ";
            if(n1s==5)cout<<"Five ";
            if(n1s==4)cout<<"Four ";
            if(n1s==3)cout<<"Three ";
            if(n1s==2)cout<<"Two ";
            if(n1s==1)cout<<"One ";
        }
     if(n10000s==0&&n1000s==0&&n100s==0&&n10s==0&&n1s==0){
         cout<<"Zero ";
     }
     cout<<"Dollars ";
     if(n2Decimal==99)cout<<"and Ninety-Nine cents";
     if(n2Decimal==98)cout<<"and Ninety-Eight cents";
     if(n2Decimal==97)cout<<"and Ninety-Seven cents";
     if(n2Decimal==96)cout<<"and Ninety-Six cents";
     if(n2Decimal==95)cout<<"and Ninety-Five cents";
     if(n2Decimal==94)cout<<"and Ninety-Four cents";
     if(n2Decimal==93)cout<<"and Ninety-Three cents";
     if(n2Decimal==92)cout<<"and Ninety-Two cents";
     if(n2Decimal==91)cout<<"and Ninety-One cents";
     if(n2Decimal==90)cout<<"and Ninety cents";
     if(n2Decimal==89)cout<<"and Eighty-Nine cents";
     if(n2Decimal==88)cout<<"and Eighty-Eight cents";
     if(n2Decimal==87)cout<<"and Eighty-Seven cents";
     if(n2Decimal==86)cout<<"and Eighty-Six cents";
     if(n2Decimal==85)cout<<"and Eighty-Five cents";
     if(n2Decimal==84)cout<<"and Eighty-Four cents";
     if(n2Decimal==83)cout<<"and Eighty-Three cents";
     if(n2Decimal==82)cout<<"and Eighty-Two cents";
     if(n2Decimal==81)cout<<"and Eighty-One cents";
     if(n2Decimal==80)cout<<"and Eighty cents";
     if(n2Decimal==79)cout<<"and Seventy-Nine cents";
     if(n2Decimal==78)cout<<"and Seventy-Eight cents";
     if(n2Decimal==77)cout<<"and Seventy-Seven cents";
     if(n2Decimal==76)cout<<"and Seventy-Six cents";
     if(n2Decimal==75)cout<<"and Seventy-Five cents";
     if(n2Decimal==74)cout<<"and Seventy-Four cents";
     if(n2Decimal==73)cout<<"and Seventy-Three cents";
     if(n2Decimal==72)cout<<"and Seventy-Two cents";
     if(n2Decimal==71)cout<<"and Seventy-One cents";
     if(n2Decimal==70)cout<<"and Seventy cents";
     if(n2Decimal==69)cout<<"and Sixty-Nine cents";
     if(n2Decimal==68)cout<<"and Sixty-Eight cents";
     if(n2Decimal==67)cout<<"and Sixty-Seven cents";
     if(n2Decimal==66)cout<<"and Sixty-Six cents";
     if(n2Decimal==65)cout<<"and Sixty-Five cents";
     if(n2Decimal==64)cout<<"and Sixty-Four cents";
     if(n2Decimal==63)cout<<"and Sixty-Three cents";
     if(n2Decimal==62)cout<<"and Sixty-Two cents";
     if(n2Decimal==61)cout<<"and Sixty-One cents";
     if(n2Decimal==60)cout<<"and Sixty cents";
     if(n2Decimal==59)cout<<"and Fifty-Nine cents";
     if(n2Decimal==58)cout<<"and Fifty-Eight cents";
     if(n2Decimal==57)cout<<"and Fifty-Seven cents";
     if(n2Decimal==56)cout<<"and Fifty-Six cents";
     if(n2Decimal==55)cout<<"and Fifty-Five cents";
     if(n2Decimal==54)cout<<"and Fifty-Four cents";
     if(n2Decimal==53)cout<<"and Fifty-Three cents";
     if(n2Decimal==52)cout<<"and Fifty-Two cents";
     if(n2Decimal==51)cout<<"and Fifty-One cents";
     if(n2Decimal==50)cout<<"and Fifty cents";
     if(n2Decimal==49)cout<<"and Forty-Nine cents";
     if(n2Decimal==48)cout<<"and Forty-Eight cents";
     if(n2Decimal==47)cout<<"and Forty-Seven cents";
     if(n2Decimal==46)cout<<"and Forty-Six cents";
     if(n2Decimal==45)cout<<"and Forty-Five cents";
     if(n2Decimal==44)cout<<"and Forty-Four cents";
     if(n2Decimal==43)cout<<"and Forty-Three cents";
     if(n2Decimal==42)cout<<"and Forty-Two cents";
     if(n2Decimal==41)cout<<"and Forty-One cents";
     if(n2Decimal==40)cout<<"and Forty cents";
     if(n2Decimal==39)cout<<"and Thirty-Nine cents";
     if(n2Decimal==38)cout<<"and Thirty-Eight cents";
     if(n2Decimal==37)cout<<"and Thirty-Seven cents";
     if(n2Decimal==36)cout<<"and Thirty-Six cents";
     if(n2Decimal==35)cout<<"and Thirty-Five cents";
     if(n2Decimal==34)cout<<"and Thirty-Four cents";
     if(n2Decimal==33)cout<<"and Thirty-Three cents";
     if(n2Decimal==32)cout<<"and Thirty-Two cents";
     if(n2Decimal==31)cout<<"and Thirty-One cents";
     if(n2Decimal==30)cout<<"and Thirty cents";
     if(n2Decimal==29)cout<<"and Twenty-Nine cents";
     if(n2Decimal==28)cout<<"and Twenty-Eight cents";
     if(n2Decimal==27)cout<<"and Twenty-Seven cents";
     if(n2Decimal==26)cout<<"and Twenty-Six cents";
     if(n2Decimal==25)cout<<"and Twenty-Five cents";
     if(n2Decimal==24)cout<<"and Twenty-Four cents";
     if(n2Decimal==23)cout<<"and Twenty-Three cents";
     if(n2Decimal==22)cout<<"and Twenty-Two cents";
     if(n2Decimal==21)cout<<"and Twenty-One cents";
     if(n2Decimal==20)cout<<"and Twenty cents";
     if(n2Decimal==19)cout<<"and Nineteen cents";
     if(n2Decimal==18)cout<<"and Eighteen cents";
     if(n2Decimal==17)cout<<"and Seventeen cents";
     if(n2Decimal==16)cout<<"and Sixteen cents";
     if(n2Decimal==15)cout<<"and Fifteen cents";
     if(n2Decimal==14)cout<<"and Fourteen cents";
     if(n2Decimal==13)cout<<"and Thirteen cents";
     if(n2Decimal==12)cout<<"and Twelve cents";
     if(n2Decimal==11)cout<<"and Eleven cents";
     if(n2Decimal==10)cout<<"and Ten cents";
     if(n2Decimal==9)cout<<"and Nine cents";
     if(n2Decimal==8)cout<<"and Eight cents";
     if(n2Decimal==7)cout<<"and Seven cents";
     if(n2Decimal==6)cout<<"and Six cents";
     if(n2Decimal==5)cout<<"and Five cents";
     if(n2Decimal==4)cout<<"and Four cents";
     if(n2Decimal==3)cout<<"and Three cents";
     if(n2Decimal==2)cout<<"and Two cents";
     if(n2Decimal==1)cout<<"and One cent";
     if(n2Decimal==0)cout<<"and Zero cents";

}
void destroyGP(GrossPay *a){
    delete[] a;
}

bool isNumber2(const string& a){
    return a.find_first_not_of("01234567") == string::npos;
}

string enCrypt(string a){
    string finish;
    for(int i=0;i<4;i++){
        a[i]+=3;
        a[i]=((a[i]-48)%8)+48;
    }
    int temp;
    temp=a[0];
    a[0]=a[2];
    a[2]=temp;
    temp=a[1];
    a[1]=a[3];
    a[3]=temp;
    
    //a[5]=a[0];a[6]=a[1];a[7]=a[2];a[8]=a[3];
    //a[0]=a[7];a[1]=a[8];a[2]=a[5];a[3]=a[6];
    
    for(int i=0;i<4;i++){
        finish[i]=a[i];
    }
    return finish;
}

string deCrypt(string a){
    string finish;
    for(int i=0;i<4;i++){
        a[i]=a[i]-48;
        if(a[i]>2){
            a[i]=a[i]-3;
        }else if(a[i]<3){
            a[i]=a[i]+5;
        }
        a[i]=a[i]+48;
    }
    int temp;
    temp=a[0];
    a[0]=a[2];
    a[2]=temp;
    temp=a[1];
    a[1]=a[3];
    a[3]=temp;
    for(int i=0;i<4;i++){
        finish[i]=a[i];
    }
    return finish;
}

string getNum(){
    string acc;
    bool isnum=false;
    bool flag=false;
    int count=0;
    cin.ignore();
    while(!flag){
        cout<<"\nPlease enter a four digit octal number (0-7): ";
        if(!flag){
            
            getline(cin,acc);
            if(acc.length()!=4){
                cout<<"\nInvalid length\n";
                count++;
                
            }
            if(acc.length()==4){
                isnum=isNumber2(acc);
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
    return acc;
}


Primes *factor(int a){
    
    cout<<endl<<a<<"=";
    unsigned char count=0;
    unsigned short int i=2;
    vector<unsigned short int> p;
    bool solving=false;
    while(!solving){
        if(a%i==0){
            a=a/i;
            p.push_back(i);
            i--;            
            count++;
        }
        i++;
        if(a==1){
            solving=true;
        }
    }
    Primes *raw = new Primes;
    
    raw->prime=new Prime [count];
    
    unsigned char count2 = 0;
    for(int i=0;i<count;i++){
        unsigned char pow=49;
        for(int j=0;j<count;j++){
            if(p[i]==p[j]&&i!=j){
                pow++;
                i++;
            }
        }
        raw->prime[count2].power=pow;
        raw->prime[count2].prime=p[i];
        count2++;
        raw->nPrimes=count2;
    }
    return raw;
}

void prntPrm(Primes *a){
    for(int i=0;i<a->nPrimes;i++){
        cout<<a->prime[i].prime<<"^"<<a->prime[i].power;
        if(i<a->nPrimes-1){
            cout<<" *";
        }
    }
 }

void destroy(Primes *a){
    delete a->prime;
    delete a;
}