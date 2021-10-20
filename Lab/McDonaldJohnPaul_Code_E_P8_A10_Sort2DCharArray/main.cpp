/* 
 * Creator: John-Paul McDonald
 * Note:  This time you create the strcmp() function that takes into
 * account the new sort order.
 * *this code does not work*
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <cstring> //strlen(),strcmp(),strcpy()
using namespace std;

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=80;//Only 20 required, and 1 for null terminator

//Function Prototypes Here
int  read(char [][COLMAX],int &);//Outputs row and columns detected from input
void sort(char [][COLMAX],int,int,const char[],const char[]);//Sort by row using strcmp();
void print(const char [][COLMAX],int,int);//Print the sorted 2-D array
//int strcmp(char a[],char b[],const char replace[],const char with[]){
int strcmp(char [],char [],const char [],const char []);//Replace sort order

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    cout<<"This code doesn't work."<<endl;
    const int ROW=30;             //Only 20 required
    char array[ROW][COLMAX];      //Bigger than necessary 
    int colIn,colDet,rowIn,rowDet;//Row, Col input and detected
    char replace[COLMAX],with[COLMAX];//New sort order
    
    //Input the new sort order then sort
    cout<<"Modify the sort order by swapping these characters."<<endl;
    cin>>replace;
    cout<<"With the following characters"<<endl;
    cin>>with;
    cout<<"Read in a 2 dimensional array of characters and sort by Row"<<endl;
    cout<<"Input the number of rows <= 20"<<endl;
    cin>>rowIn;
    cout<<"Input the maximum number of columns <=20"<<endl;
    cin>>colIn;
    
    //Now read in the array of characters and determine it's size
    rowDet=rowIn;
    cout<<"Now input the array."<<endl;
    colDet=read(array,rowDet);
    
    //Compare the size input vs. size detected and sort if same
    //Else output different size
    if(rowDet==rowIn&&colDet==colIn){
        sort(array,rowIn,colIn,replace,with);
        cout<<"The Sorted Array"<<endl;
        print(array,rowIn,colIn);
    }
    
    //Exit
    return 0;
}

int  read(char a[][COLMAX],int &b){
   char temp[COLMAX];
    int temp2=0;
    int temp3=0;
    for(int c=0;c<b;c++){
        cin>>temp;
        temp2=strlen(temp);
        for(int i=0;i<temp2;i++){
            a[c][i]=temp[i];
        }
        temp3=temp2;
    }
    return temp3;
}

void sort(char arr[][COLMAX],int rowIn,int colIn,const char replace[],const char with[]){
    
    char a[100];
    char b[100];
    a[100]=colIn;
    int temp=0;
    int temp2=0;
    int count=0;
    for(int i=0;i<rowIn-1;i++){
        for(int j=0;j<colIn;j++){
            if(arr[i][j]>arr[i+1][j]){
                temp=arr[i][j];
                arr[i][j]=arr[i+1][j];
                arr[i+1][j]=temp;
            }
        }
    }
    for(int i=0;i<rowIn;i++){//loop through rows
        for(int d=0;rowIn;d++){
            for(int j=0;j<colIn;j++){
                a[j]=arr[i][j];
                b[j]=arr[d][j];
            }
            
            
            if(temp>0){
                for(int l=0;l<colIn;l++){
                    temp2=arr[i][l];
                    arr[i][l]=arr[d][l];
                    arr[d][l]=temp2;
                }
            }
            if(temp>0){
                for(int l=0;l<colIn;l++){
                    temp2=a[l];
                    a[l]=b[l];
                    b[l]=temp2;
                }
            }if(temp<0){
                for(int l=0;l<colIn;l++){
                    temp2=arr[i][l];
                    arr[i][l]=arr[d][l];
                    arr[d][l]=temp2;
                }
            }
            if(temp<0){
                for(int l=0;l<colIn;l++){
                    temp2=a[l];
                    a[l]=b[l];
                    b[l]=temp2;
                }
            }
        }
        
    }
    
    
    
    for(int i=0;i<rowIn;i++){
        for(int j=0;j<rowIn;j++){
            for(int z=0;z<colIn;z++){
                
                
            }
        }
    }
}

void print(const char a[][COLMAX],int b,int c){
    
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j];
        }
        cout<<endl;
        
    }
}

int strcmp(char a[],char b[],const char replace[],const char with[]){
   char arr[94];
   char fill = ' ';
   for(int i=0;i<94;i++){
       arr[i]=fill;
       fill++;
   }
   bool leave=false;
   int temp=0;
   int temp2=0;
   int temp3=0;
   int final=0;
   temp=strlen(replace);
   
   for(int j=0;j<temp;j++){
       for(int i=0;i<94;i++){
           if(arr[i]==replace[j]){
               temp2=i;
               temp3=temp2;
               for(int k=0;k<94;k++){
                   if(arr[k]==with[j]){
                       temp3=k;
                   }
               }
           }
       }
       if(arr[temp2]==replace[j]){
           arr[temp2]=with[j];
           arr[temp3]=replace[j];
       }
   }
   
   
   return 0;//final;
}