/*
 * file: Chapter 12 Problem 7 Sentence Filler
 * Author: John-Paul McDonald
 * Purpose: in/out Binary file
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;


//User Libraries Here
//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    fstream inFile,outFile;
    inFile.open("import.bin",ios::in|ios::binary);
    char ch[100] = "this is a testing. test. test. test.";
    char dh[100];
    inFile.read(reinterpret_cast<char*>(&ch),sizeof(ch));
    outFile.open("import.bin",ios::out|ios::binary);
    outFile.write(reinterpret_cast<char*>(&ch),sizeof(ch));
    outFile.get(reinterpret_cast<char*>(&dh));
    cout<<dh;
    inFile.close();
    outFile.close();
    return 0;
}