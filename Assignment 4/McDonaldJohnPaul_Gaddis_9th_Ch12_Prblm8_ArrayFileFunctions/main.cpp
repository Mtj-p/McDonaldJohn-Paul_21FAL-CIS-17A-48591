/*
 * file: McDonaldJohnPaul_Gaddis_9th_Ch12_Prblm8_ArrayFileFunctions
 * Author: John-Paul McDonald
 * Date: 12/11/2021
 * Purpose: To display the functionality of reading and writing to a 
 *          binary file to and from an array of integers.
 */

//System Libraries
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


void arrayToFile(string,int *,int);
void fileToArray(string,int *,int);

int main(int argc, char** argv) {
    string filename = "arrBinFile";//binary file name
    int size=20;//size of my arrays
    int myArr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};//initial array
    int copyArr[20]={0};//blank array
    for(int i=0;i<20;i++){
        cout<<"myArr["<<myArr[i]<<"] copyArr["<<copyArr[i]<<"]"<<endl;
    }//displaying the original two arrays for the user
    
    arrayToFile(filename,myArr,size);//writes the original array to the binary file
    fileToArray(filename,copyArr,size);//writes the binary file to the copy array
    cout<<endl<<"MyArr is placed into the binary file then made negative\n"
            "to show distinction, copyArr is read from the file."<<endl<<endl;//explanation
    for(int i=0;i<20;i++){
        myArr[i]=myArr[i]*-1;
    }//I made the original array negative to display distinction between the two arrays.
    for(int i=0;i<20;i++){
        cout<<"myArr["<<myArr[i]<<"] copyArr["<<copyArr[i]<<"]"<<endl;
    }//Displaying both of the arrays.
    return 0;
}


void arrayToFile(string filename, int * myArr,int size){
    fstream dataS;//fstream creation
    dataS.open(filename,ios::out|ios::binary|ios::trunc);//opening and emptying the binary file for writing
    while(dataS.is_open()){//if the file was successfully opened
        for(int i=0;i<size;i++){
            dataS.put(myArr[i]);
        }//shoving the array into the file
      dataS.close();//closing the file
    }
}

void fileToArray(string filename, int * copyArr,int size){
    fstream dataS;//fstream creation
    dataS.open(filename,ios::in|ios::binary);//opening the file for reading
    while(dataS.is_open()){//if the file was successfully opened
        for(int i=0;i<size;i++){
            copyArr[i]=dataS.get();
        }//taking the contents of the binary file and placing it into the array
        dataS.close();//closing the file
    }
}