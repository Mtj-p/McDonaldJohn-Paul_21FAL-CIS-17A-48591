/* 
 * File:   Structure_Weather_Statistics
 * Author: John-Paul McDonald
 * Purpose:  Structure Weather Statistics
 */


#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>


using namespace std;

struct weatherData {
    char month[9];
    char totRain[9];
    char highTemp[9];
    char lowTemp[9];
    char avgTemp[9];
    char avgRain[9];
};

int main(){
	//your code here
    float x=0;
    int q=0;
	int y=0;
	int z=0;
	int count=0;
	weatherData year[12];
	for(int i=0;i<12;i++){
	    cin>>year[i].month;
	    cin>>year[i].totRain;
	    cin>>year[i].lowTemp;
	    cin>>year[i].highTemp;
	}
	for(int i=0;i<12;i++){
	    y = atoi (year[i].totRain);
	    x+=y;
	}
	cout<<"Average Rainfall "<<fixed<<setprecision(1)<<x/12<<" inches/month\n";
	x=0;
	for(int i=0;i<12;i++){
	    y = atoi (year[i].lowTemp);
	    if(x==0){
	        x=y;
	        count=i;
	    }
	    if(x>y){
	        x=y;
	        count=i;
	    }
	}
	cout<<"Lowest  Temperature "<<year[count].month<<"  "<<year[count].lowTemp<<" Degrees Fahrenheit\n";
	
	x=0;
	for(int i=0;i<12;i++){
	    y = atoi (year[i].highTemp);
	    if(x==0){
	        x=y;
	        count=i;
	    }
	    
	    if(x<y){
	        x=y;
	        count=i;
	    }
	}
	x=0;
	cout<<"Highest Temperature "<<year[count].month<<"  "<<year[count].highTemp<<" Degrees Fahrenheit\n";
	for(int i=0;i<12;i++){
	    y = atoi (year[i].highTemp);
	    z = atoi (year[i].lowTemp);
	    q+=y;
	    q+=z;
	}
	cout<<"Average Temperature for the year "<<(q/24)+1<<" Degrees Fahrenheit\n"; //rounding error
	
	return 0;
}