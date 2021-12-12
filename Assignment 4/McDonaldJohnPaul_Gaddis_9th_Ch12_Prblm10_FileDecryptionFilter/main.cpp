/*
 * file: McDonaldJohnPaul_Gaddis_9th_Ch12_Prblm10_FileDecryptionFilter
 * Author: John-Paul McDonald
 * Date: 12/12/2021
 * Purpose: Reverses the previous problem.
 */

//System Libraries
#include <iostream>
#include <fstream>
using namespace std;


int main(int argc, char** argv) {
    fstream FileO;//I need two fstreams for two different files
    fstream FileX;
    string file = "encryptedfile.txt";//input file from previous problem
    string xfile = "newtestfile.txt";//new output file
    char temp;//will hold the value of the input file temporarily
    FileO.open(file,ios::in);//opens the preexisting file
    FileX.open(xfile,ios::out|ios::trunc);//opens a new output file and deletes the contents
    while(FileX){
        FileO.get(temp);//grabs the first character from the input file
        while(FileO){
            temp-=10;//subtracts 10 from the character
            FileX.put(temp);//pushes the "decrypted" character into the new file
            FileO.get(temp);//tries to grab another character from the input file
        }
        FileO.close();//when I can't grab any more characters I close both files
        FileX.close();
    }
    return 0;
}
