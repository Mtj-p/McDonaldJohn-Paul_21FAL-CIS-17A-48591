/*
 * file: Gaddis_9thEd_Chap11_Prob9_SpeakersBureau
 * Author: McDonald, John-Paul
 * Date: 10/11/2020
 * Purpose: Speakers' Bureau
 */

//System Libraries
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Universal Math, Physics, Conversions, Higher Dimensions

//Prototypes
struct speaker{
    string name;
    unsigned short areanum;
    unsigned int telenum;
    string speaktop;
    float feereq;    
}speakers[100];

//Execution Begins Here
int main(int argc, char** argv) {
    bool exitprog=false;
    int swtchnum=0;
    int swtchnum2=0;
    int count=0;
    int speakselect=0;
    while(exitprog==false){
            cout<<"*********************************************"<<endl;
            cout<<"*                                           *"<<endl;
            cout<<"* Welcome to the Speakers' Bureau!          *"<<endl;
            cout<<"* Current Total Speakers Recorded:"<<count<<"         *"<<endl;
            cout<<"* Would you like to:                        *"<<endl;
            cout<<"* 1.Enter a New Speaker (up to 10)          *"<<endl;
            cout<<"* 2.Modify a Speaker's Information          *"<<endl;
            cout<<"* 3.Display Current Speakers                *"<<endl;
            cout<<"* 4.Exit Program                            *"<<endl;
            cout<<"*                                           *"<<endl;
            cout<<"*********************************************"<<endl;
            cout<<"current selection(1-4):";
            cin>>swtchnum;
            bool test1=false;

            switch(swtchnum){
                case 1:
                    while(test1==false){
                        cout<<"Speakers' Name: ";
                        getline(cin,speakers[count].name);
                        getline(cin,speakers[count].name);
                        cout<<"Area Code:";
                        cin>>speakers[count].areanum;
                        cout<<"Phone Number:";
                        cin>>speakers[count].telenum;
                        cout<<"Speakers' Topic:";
                        getline(cin,speakers[count].speaktop);
                        getline(cin,speakers[count].speaktop);
                        cout<<"Fee Required:";
                        cin>>speakers[count].feereq;
                        cout<<"Is this correct?"<<endl;
                        cout<<"Name: "<<speakers[count].name<<" \n#: ("<<speakers[count].areanum<<
                                ")"<<speakers[count].telenum<<" \nTopic: "<<speakers[count].speaktop<<
                                " \nFee Required: $"<<speakers[count].feereq<<endl;
                        cout<<"Yes || No (1 || 0):";
                        cin>>test1;                        
                    }
                    count++;
                    break;
                case 2: 
                    test1=false;
                    
                    while(test1==false){
                        if(count>0){
                            cout<<"Select a Speaker (1-"<<count<<"):";
                            cin>>speakselect;
                            if(speakselect<count){
                                test1=true;
                            }
                        }else{
                            cout<<"\n~~~~There are no entries to modify~~~~\n";
                            test1=true;
                            speakselect=(-1);
                            break;
                        }
                    }
                    if(speakselect>0){
                        cout<<"\nName: "<<speakers[speakselect].name<<" ("<<speakers[speakselect].areanum<<
                                    ")"<<speakers[speakselect].telenum<<" Topic: "<<speakers[speakselect].speaktop<<
                                    " Fee Required: $"<<speakers[speakselect].feereq<<endl;

                        cout<<"*********************************************"<<endl;
                        cout<<"*                                           *"<<endl;
                        cout<<"*   Would you like to Modify:               *"<<endl;
                        cout<<"*   1. Name                                 *"<<endl;
                        cout<<"*   2. Phone Number                         *"<<endl;
                        cout<<"*   3. Speakers' Topic                      *"<<endl;
                        cout<<"*   4. Fee                                  *"<<endl;
                        cout<<"*   5. Nothing                              *"<<endl;
                        cout<<"*                                           *"<<endl;
                        cout<<"*********************************************"<<endl;
                        cin>>swtchnum2;
                    }
                    switch(swtchnum2){
                        case 1:
                            test1=false;
                            while(test1==false){
                            cout<<"New Name:";
                            getline(cin,speakers[count].name);
                            getline(cin,speakers[count].name);
                            cout<<"\nIs "<<speakers[speakselect].name<<" correct?\n";
                            cout<<"Yes || No (1 || 0):";
                            cin>>test1;
                            }
                            break;
                        case 2:
                            test1=false;
                            while(test1==false){
                            cout<<"Area Code:";
                            cin>>speakers[count].areanum;
                            cout<<"Phone Number:";
                            cin>>speakers[count].telenum;
                            cout<<"\nIs ("<<speakers[speakselect].areanum<<
                                ")"<<speakers[speakselect].telenum<<" correct?\n";
                            cout<<"Yes || No (1 || 0):";
                            cin>>test1;
                            }
                            break;
                        case 3:
                            test1=false;
                            while(test1==false){
                            cout<<"Speakers' Topic:";
                            getline(cin,speakers[count].speaktop);
                            getline(cin,speakers[count].speaktop);
                            cout<<"\nIs "<<speakers[speakselect].speaktop<<" correct?\n";
                            cout<<"Yes || No (1 || 0):";
                            cin>>test1;
                            }
                            break;
                        case 4:
                            test1=false;
                            while(test1==false){
                            cout<<"Fee Required:";
                            cin>>speakers[count].feereq;
                            cout<<"\nIs "<<speakers[speakselect].feereq<<" correct?\n";
                            cout<<"Yes || No (1 || 0):";
                            cin>>test1;
                            }
                            break;
                        case 5:
                            break;
                        default:
                            break;
                    }
                    
                    
                    
                    
                    break;
                case 3:   
                    test1=false;
                    cout<<"\n\n\n";
                    while(test1==false){
                        for(int i=0;i<count;i++){
                        cout<<"Name: "<<speakers[i].name<<" \n#:("<<speakers[i].areanum<<
                                        ")"<<speakers[i].telenum<<" \nTopic: "<<speakers[i].speaktop<<
                                        " \nFee Required: $"<<speakers[i].feereq<<endl;
                        }
                        cout<<"Back to the main menu?";
                        cout<<"Yes || No (1 || 0):";
                        cin>>test1;
                    }
                    
                    break;
                case 4:
                    exitprog=true;
                    break;
                default:
                    cout<<"Invalid case"<<endl;       
                    break;
            }
            
    }
    cout<<"\nThank you"<<endl;
    return 0;
}
