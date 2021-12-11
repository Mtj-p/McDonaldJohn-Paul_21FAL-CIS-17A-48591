/*
 * file: McDonaldJohnPaul_Gaddis_9th_Ch12_Prblm7_SentenceFiller
 * Author: John-Paul McDonald
 * Date: 12/09/2021
 * Purpose: Display input and output functionality
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;


int main(int argc, char** argv) {
    
    string file1;
    string file2;
    bool first = true;
    char contents;
    cout<<"name of file one: testing1 && name of file two: testing2\n";//instructions
    cout<<"Name of file one: ";//input file one name
    getline(cin,file1);
    cout<<"Name of file two: ";//input file two name
    getline(cin,file2);
    cout<<"file 1 "<<file1<<" file 2 "<<file2<<endl;//outputs the names of the files for verification
    ifstream inputFile(file1);//input stream
    ofstream outputFile(file2);//output stream
    while(inputFile){
        inputFile.get(contents);//gets the first character of input file
        while(inputFile){
            if(first==true&&contents!=' '){//if the boolean is true and it's not a space, it should be the first letter of the sentence
                outputFile.put(tolower(contents));//changes the character to a lowercase
                first=false;//sets the flag to false
            }else{
                outputFile.put(toupper(contents));//if the flag is false the rest of the sentence is made uppercase
            }
            if(contents=='.'){
                first=true;//if the character is a period, this indicates the end of the sentence and sets the flag back to true
            }
            inputFile.get(contents);//gets another character from the file
        }
        inputFile.close();//close input
        outputFile.close();//close output
    }
    //the problem did not mention displaying the contents of the second file within the output window. 
    return 0;
}
