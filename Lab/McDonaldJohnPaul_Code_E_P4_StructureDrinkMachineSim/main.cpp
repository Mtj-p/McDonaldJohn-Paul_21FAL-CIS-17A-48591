/* 
 * File:   Structure_Drink_ Machine_Simulator
 * Author: John-Paul McDonald
 * Purpose: Structure Drink Machine Simulator
 */



#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct sfMachine{
    string dname;
    float dcost;
    int drinknum;
};

void sodaMch (sfMachine *a);

int main(){
	//your code here
	sfMachine drinks[5];
	drinks[0].dname="Cola";
	drinks[0].dcost=75;
	drinks[0].drinknum=20;
	
	drinks[1].dname="Root Beer";
	drinks[1].dcost=75;
	drinks[1].drinknum=20;
	
	drinks[2].dname="Lemon-Lime";
	drinks[2].dcost=75;
	drinks[2].drinknum=20;
	
	drinks[3].dname="Grape Soda";
	drinks[3].dcost=80;
	drinks[3].drinknum=20;
	
	drinks[4].dname="Cream Soda";
	drinks[4].dcost=80;
	drinks[4].drinknum=20;
	
	bool quit=false;
	string choice;
	int coins;
	int coinChk;
	int profit=0;
	int count=1;
	while(quit==false){
	    if(count%2!=0){
        	for(int i=0;i<5;i++){
        	    cout.width(11);
        	    cout<<left<<drinks[i].dname<<drinks[i].dcost<<"  "<<drinks[i].drinknum<<'\n';
        	}
        	cout<<"Quit\n";
	    }
	    count++;
    	
    	getline(cin,choice);
    	for(int i=0;i<5;i++){
    	    if(drinks[i].dname==choice){
    	        coinChk=0;
    	        cin>>coins;
    	        if(coins<0){
    	            cout<<"Invalid currency\n";
    	        }
    	        coinChk=coins-drinks[i].dcost;
    	        if(coinChk<0){
    	            cout<<"Invalid currency\n";
    	        }
    	        if(coinChk>0){
    	            cout<<coinChk<<'\n';
    	        }
    	        drinks[i].drinknum--;
    	        profit+=drinks[i].dcost;
    	    }
    	}
    	
    	if(choice=="Quit"){
    	    quit=true;
    	}
	}
	cout<<profit<<'\n';
	
	
	return 0;
}

