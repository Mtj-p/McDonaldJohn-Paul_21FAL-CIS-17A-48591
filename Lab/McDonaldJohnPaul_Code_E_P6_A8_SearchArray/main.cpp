/* 
 * Creator: John-Paul McDonald
 * Purpose:  Searching for multiple occurrence of patterns
 * Note:  cout proceeds to null terminator, cin reads to end of line
 *        for character arrays
 * 
 */

//System Libraries Here
#include <iostream>//cin,cout,getline()
#include <cstring> //strlen()
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//PI, e, Gravity, or conversions

//Function Prototypes Begins Here
//srch1 utility function Input->start position, Output->position found or not
//srch1 is a simple linear search function, repeat in srchAll till all found
//srch1 Input->sentence, pattern, start position Output-> position found
//Remember arrays start at index/position 0
//srchAll Input->sentence, pattern Output->position array
int  srch1(const char [],const char [],int);//Search for 1 occurrence
void srchAll(const char [],const char [],int []);//Search for all occurrences
void print(const char []);//Print the character arrays
void print(const int []); //Print the array of indexes where the pattern found

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int LINE=81;               //Size of sentence or pattern to find
    char sntnce[LINE],pattern[LINE]; //80 + null terminator
    int match[LINE];                 //Index array where pattern was found
    
    //Input a sentence and a pattern to match
    cout<<"Match a pattern in a sentence."<<endl;
    cout<<"Input a sentence"<<endl;
    cin.getline(sntnce,LINE);
    cout<<"Input a pattern."<<endl;
    cin.getline(pattern,LINE);
    
    //Search for the pattern
    //Input the sentence and pattern, Output the matching positions
    //Remember, indexing starts at 0 for arrays.
    srchAll(sntnce,pattern,match);
    
    //Display the inputs and the Outputs
    cout<<endl<<"The sentence and the pattern"<<endl;
    print(sntnce);
    print(pattern);
    cout<<"The positions where the pattern matched"<<endl;
    print(match);
    
    //Exit
    return 0;
}


int  srch1(const char a[],const char b[],int c){
    int temp1=strlen(b);
    int temp2=c;
    int temp4=strlen(a);
    bool temp3=false;
    //cout<<"b[0] "<<b[0]<<"a[c] "<<a[c]<<endl;
    //cout<<"temp4 "<<temp4<<"temp1 "<<temp1<<"c "<<c<<endl;
    if(b[0]==a[c]){
        if((temp4-temp1-c)>=0){
           for(int i=0;i<temp1;i++){
               //cout<<"b[i] "<<b[i]<<"a[c+i] "<<a[c+i]<<endl;
                if(b[i]==a[c+i]){
                    //cout<<"b[i] "<<b[i]<<"a[c+i"<<a[c+i]<<endl;
                    temp3=true;
                }/*
                if(b[i]!=a[c+i]){
                    temp3=false;
                }*/
            }        
        }
    }
    int count=-1;
    for(int i=0;i<=c;i++){
        if(a[i]==b[i]){
            count++;
        }
    }
    if(count==c&&c==0){
        return -1;
    }
    if(temp3==false){
        return 0;
    }
    if(temp3==true){
        if(c!=0){
        return c;
        }
    }
}//Search for 1 occurrence
void srchAll(const char a[],const char b[],int c[]){
    int temp1=strlen(a);
    int temp2=0;
    int temp3=0;
    for(int i=0;i<temp1;i++){
        temp2=srch1(a,b,i);
        if(temp2>0){
            temp3=temp3+1;
            c[temp3]=temp2;
        }
        if(temp2<0){
            c[15]=-1;
        }
    }
    c[0]=temp3;
    if(temp2<0){
        c[15]=-1;
    }
}//Search for all occurrences
void print(const char a[]){
    int temp1=strlen(a);
    for(int i=0;i<temp1;i++){
        cout<<a[i];
    }
    cout<<endl;
}//Print the character arrays
void print(const int a[]){
    int temp1=a[0];
    if(a[15]==-1){
        cout<<0<<endl;
    }
    if(temp1==0){
        cout<<"None"<<endl;
    }
    for(int i=1;i<temp1+1;i++){
        cout<<a[i]<<endl;
    }
    
}//Print the array of indexes where the pattern found
