/*
 * file: Gaddis_9th_Chp8_7_BinaryStringSearch
 * Author: John-Paul McDonald
 * Date: 09/06/2021
 * Purpose: Demonstrate a Binary String Search
 */

//System Libraries
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//User Libraries
//Global Constants
//Universal Math, Physics, Conversions, Higher Dimensions
//Prototypes
bool bnStrSrch (string [],int,string);
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize Random Number Seed
    
    //Declare Variables
    const int num_names = 20;
    string names[num_names] = {"Collins, Bill","Smith, Bart","Allen, Jim",
                                "Griffin, Jim","Stamey, Marty","Rose, Geri",
                                "Taylor, Terri","Johnson, Jill",
                                "Allison, Jeff","Looney, Joe","Wolfe, Bill",
                                "James, Jean","Weaver, Jim","Pore, Bob",
                                "Rutherford, Greg","Javens, Renee",
                                "Harrison, Rose","Setzer, Cathy",
                                "Pike, Gordon","Holland, Beth"};
    string srchName;
    
    
    //Initialize Variables
    
    //Process the inputs -> outputs
    sort(begin(names),end(names));
    cout<<"Input a name from this list: "<<endl;
    for(int i=0;i<20;i++){
        cout<<i+1<<". "<<names[i]<<endl;
    }
    cout<<"\nName: ";
    getline(cin,srchName);
    cout<<"You input: "<<srchName<<endl;
    //Display the results, verify inputs
    if(bnStrSrch(names,num_names,srchName)){
        true;
    }
    //Clean up and exit
    return 0;
}


bool bnStrSrch(string array[], int numelems, string value){
    int first=0;
    int last=numelems-1;
    int middle;
    int position=-1;
    bool found = false;
    int count=0;
    do {
        middle = ((first + last)/2);
        
        if(array[middle]==value){
            cout<<value<<" was found at position: "<<middle+1;
            return true;
        }
        if(array[middle]>value){
            last = (middle-1);
        }
        else{
            first=(middle+1);
        }
        count++;
        if(count>20){
            cout<<"\nUnable to find name in list.";
            return true;
        }
    }while(!found);
    return found;
}
