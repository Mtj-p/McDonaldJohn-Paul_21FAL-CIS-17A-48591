/* 
 * File:   main.cpp
 * Author: John-Paul McDonald
 * Created on DATE AND TIME HERE
 * Purpose:  Input something, output it reversed with some modifications
 * Note:Range should be 5 digits, 321 = 00321 reverse = 12300 before subtraction
 *      12300 - 999 = 11301 after subtraction
 *      12300 = 00321 = 321 after reversal and no subtraction
 */

//System Libraries Here
#include <iostream>//cin,cout,endl
#include <cstring> //strlen()
using namespace std;
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
bool  inRange(const char [],unsigned short &);//Output true,unsigned or false
bool  reverse(unsigned short,signed short &);//Output true,short or false
short subtrct(signed short,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=80;     //More than enough
    char  digits[SIZE];    //Character digits or not
    unsigned short unShort;//Unsigned short
    short snShort;         //Signed short
    
    //Input or initialize values Here
    cout<<"Reverse a number and subtract if possible."<<endl;
    cout<<"Input a number in the range of an unsigned short"<<endl;
    cin>>digits;
    
    //Test if it is in the Range of an unsigned short
    if(!inRange(digits,unShort)){
        cout<<"No Conversion Possible"<<endl;
        return 0;
    }
    
    //Reverse and see if it falls in the range of an signed short
    if(!reverse(unShort,snShort)){
        cout<<"No Conversion Possible"<<endl;
        return 0;
    }
    
    //Now subtract if the result is not negative else don't subtract
    snShort=subtrct(snShort,999);
    
    //Output the result
    cout<<snShort<<endl;
    
    //Exit
    return 0;
}


bool  inRange(const char a[],unsigned short &b){
    int temp1;
    
    if((a[0]-48)>0&&(a[0]-48)<=9){
        temp1=a[0]-48;
    
    }
    
    for(int i=1;i<5;i++){
        if(a[i]==0){
            break;
        }
        if(a[i]>=48||a[i]<58){
            temp1=temp1*10+(a[i]-48);
            //cout<<temp1<<endl;
            //cout<<temp1<<"  i "<<i<<endl;
        }
        if(a[i]!=0&&(a[i]<48||a[i]>58)){
            return false;
        }
    }
    if((a[0]-48)<0||(a[0]-48)>9){
        //cout<<"test1"<<endl;
        return false;
    }
    
    if(temp1<=65535&&temp1>=0){
        //cout<<temp1<<endl;
        b=temp1;return true;
        
    }
    if(temp1>65535||temp1<0){
        //cout<<temp1<<endl;
        return false;
    }
}//Output true,unsigned or false
bool  reverse(unsigned short a,signed short &b){
    int temp1=a;
    int temp2,temp3,temp4,temp5,temp6,temp7=0;
    temp7=temp1;
    if(temp1>10000){
    temp6=temp1/10000;
    temp2=(temp1%10000)/1000;
    temp3=(temp1%1000)/100;
    temp4=(temp1%100)/10;
    temp5=(temp1%10);
    temp6=temp6+(temp2*10)+(temp3*100)+(temp4*1000)+(temp5*10000);
   
    }
    
    if(temp1<=10000&&temp1>1000){
    temp2=(temp1%10000)/1000;
    temp3=(temp1%1000)/100;
    temp4=(temp1%100)/10;
    temp5=(temp1%10);
    temp6=((temp3*100)+(temp4*1000)+(temp5*10000));
    }
    if(temp1<=1000&&temp1>100){
    temp3=(temp1%1000)/100;
    temp4=(temp1%100)/10;
    temp5=(temp1%10);
    temp6=((temp3*100)+(temp4*1000)+(temp5*10000));
    }
    if(temp1<=100&&temp1>10){
    temp4=(temp1%100)/10;//cout<<temp4<<endl;
    temp5=(temp1%10);//cout<<temp5<<endl;
    temp6=((temp4*1000)+(temp5*10000));//cout<<temp6<<endl;
    }
    if(temp1<=10&&temp1>0){
    temp5=(temp1%10);
    temp6=(temp5*10000)*10000;
    }
    if(temp7==10000){
        temp6=1;
    }
    if(temp7==1000){
        temp6=10;
    
    }if(temp7==100){
        temp6=100;
    }
    if(temp7==10){
        temp6=1000;
    }
    if(temp7==1){
        temp6=10000;
    }
    if(temp7==0){
        temp6=0;
    }
    
    if(temp6>32767||temp6<(-32768)){
        return false;
    }else if(temp6>=0){
        b=temp6;
        return true;
    }
     
}//Output true,short or false
short subtrct(signed short a,int b){
    int temp1=0;
    if(a>=0){
        temp1=a-b;
        return temp1;
    }
    if(a<0){
        return a;
    }
    
}
