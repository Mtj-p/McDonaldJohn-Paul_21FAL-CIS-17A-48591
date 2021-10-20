/* 
 * File:   Structures_Movie_Data
 * Author: John-Paul McDonald
 * Purpose: Structures Movie Data
 */


#include <iostream>
#include <string>

using namespace std;

struct MovieData{
    string Title;
    string Director;
    int yearRel;
    int runTime;
};

int main(){
	//your code here
	int movies=0;
	cin>>movies;
	MovieData lmovies[100];
	for(int i=0;i<movies;i++){
	    getline(cin,lmovies[i].Title);
	    getline(cin,lmovies[i].Title);
	    getline(cin,lmovies[i].Director);
	    cin>>lmovies[i].yearRel;
	    cin>>lmovies[i].runTime;
	}
	
	cout<<"This program reviews structures\nInput how many movies, the Title of the Movie, Director, Year Released, and the Running Time in (minutes).\n";
	for(int i=0;i<movies;i++){
	    cout<<"\nTitle:     "<<lmovies[i].Title;
	    cout<<"\nDirector:  "<<lmovies[i].Director;
	    cout<<"\nYear:      "<<lmovies[i].yearRel;
	    cout<<"\nLength:    "<<lmovies[i].runTime;
	    cout<<"\n";
	}
	return 0;
}
