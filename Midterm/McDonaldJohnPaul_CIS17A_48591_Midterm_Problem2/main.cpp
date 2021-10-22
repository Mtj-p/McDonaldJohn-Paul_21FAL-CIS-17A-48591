/*
 * file: McDonaldJohnPaul_CIS17A_48591_Midterm_Problem2
 * Author: John-Paul McDonald
 * Date: 10/22/2021
 * Purpose: Gross pay using Structs
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>

using namespace std;

//User Libraries
#include "GrossPay.h"
//Global Constants
//Universal Math, Physics, Conversions, Higher Dimensions
//Prototypes
GrossPay *fillCheck(int &);
void prntChecks(GrossPay *,int);
void finalPay(GrossPay *,int);
void destroyGP(GrossPay *);
void romanCalc(GrossPay *,int);

//Execution Begins Here
int main(int argc, char** argv) {
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
    return 0;
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