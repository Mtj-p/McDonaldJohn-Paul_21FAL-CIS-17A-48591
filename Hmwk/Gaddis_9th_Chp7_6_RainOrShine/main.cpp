/*
 * file: Gaddis_9th_Chp7_6_RainOrShine
 * Author: John-Paul McDonald
 * Date: 09/06/2021
 * Purpose: Read weather data from a file, report the weather. 
 */

//System Libraries
#include <iostream> // I/O Library
#include <fstream>  // File I/O
#include <cstdlib>  // Random Number seed and generator
#include <ctime>    // Time for random number seed
#include <iomanip>  // Formatting output
using namespace std;

//User Libraries
//Global Constants
//Universal Math, Physics, Conversions, Higher Dimensions
//Prototypes
void wrtFile(fstream &,char[]);                 //writing data
void rdFile(fstream &,string,char[][30]);     //reading data
void prntData(char [][30]);                   //printing data
string stats(char[][30],char[][3]);                //examining statistics
void prntStat(char[][3]);                        //printing statistics

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const unsigned char days=30;
    const unsigned char month=3;
    char data[month][days];
    char stat[month][month];
    fstream fileIO;
    char cnmFile[]="RainOrShine.txt";
    string snmFile=cnmFile;
    string rnMonth;
    //Initialize Variables
    wrtFile(fileIO,cnmFile);
    rdFile(fileIO,snmFile,data);
    rnMonth=stats(data,stat);
    //Process the inputs -> outputs
    
    //Display the results, verify inputs
    prntData(data);
    prntStat(stat);
    cout<<rnMonth<<" had the most rain."<<endl;
    //Clean up and exit
    return 0;
}

void prntStat(char stat[][3]){
    string months[3]={"JUNE  ","JULY  ","AUGUST"};
    char weather[3+1]="SCR";
    cout<<endl<<"Weather Statistics Data for the Summer Months"<<endl;
    cout<<"        ";
    for(int col=0;col<3;col++){
            cout<<setw(2)<<weather[col]<<" ";
    }
    cout<<endl;
    for(int row=0;row<3;row++){
        cout<<months[row]<<"  ";
        for(int col=0;col<3;col++){
            cout<<setw(2)<<static_cast<unsigned int>(stat[row][col])<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

string stats(char data[][30],char stat[][3]){
    //Initialize stat
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            stat[row][col]=0;
        }
    }
    //Quantify the data
    for(int month=0;month<3;month++){
        for(int day=0;day<30;day++){
            switch(data[month][day]){
                case 'S':stat[month][0]++;break;
                case 'C':stat[month][1]++;break;
                default:stat[month][2]++;
            }
        }
    }
    //Which month had the most rain
    string wchMnth="JUNE";
    if(stat[1][2]>stat[0][2]&&stat[1][2]>stat[2][2])wchMnth="JULY";
    if(stat[2][2]>stat[1][2]&&stat[2][2]>stat[0][2])wchMnth="AUGUST";
    if(stat[1][2]==stat[0][2]&&stat[1][2]==stat[2][2])wchMnth="JUNE, JULY, & AUGUST";
    if(stat[1][2]==stat[0][2]&&stat[1][2]>stat[2][2])wchMnth="JUNE & JULY";
    if(stat[2][2]>stat[1][2]&&stat[2][2]==stat[0][2])wchMnth="JUNE & AUGUST";
    if(stat[1][2]>stat[0][2]&&stat[1][2]==stat[2][2])wchMnth="JULY & AUGUST";
    return wchMnth;
}

void prntData(char data[3][30]){
    string months[]={"JUNE  ","JULY  ","AUGUST"};
    cout<<"Weather Data for the Summer Months"<<endl;
    cout<<"        ";
    for(int day=0;day<30;day++){
            cout<<setw(2)<<day+1<<" ";
    }
    cout<<endl;
    for(int month=0;month<3;month++){
        cout<<months[month]<<"  ";
        for(int day=0;day<30;day++){
            cout<<setw(2)<<data[month][day]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void rdFile(fstream &in,string fn,char data[][30]){
    in.open(fn,ios::in);
    for(int month=0;month<3;month++){
        for(int day=0;day<30;day++){
            in>>data[month][day];
        }
    }
    in.close();
}


void wrtFile(fstream &out,char fn[]){
    const int SIZE=10;
    char weather[SIZE+1]="SSSSSSCCCR";
    out.open(fn,ios::out);
    for(int month=0;month<3;month++){
        for(int day=0;day<30;day++){
            out<<weather[rand()%SIZE]<<" ";
        }
        out<<endl;
    }
    out<<endl;
    out.close();
}