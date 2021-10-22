/*
 * file: 
 * Author: John-Paul McDonald
 * Date: 
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries
//Global Constants
//Universal Math, Physics, Conversions, Higher Dimensions
//Prototypes
bool isNumber(const string&);
string enCrypt(string);
string deCrypt(string);
string getNum();
//Execution Begins Here
int main(int argc, char** argv) {
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
    return 0;
}


bool isNumber(const string& a){
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
    return acc;
}