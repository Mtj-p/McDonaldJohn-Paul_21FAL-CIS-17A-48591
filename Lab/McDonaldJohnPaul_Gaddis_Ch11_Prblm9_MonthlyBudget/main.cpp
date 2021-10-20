/*
 * file: 
 * Author: John-Paul McDonald
 * Date: 
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
#include <valarray>
using namespace std;

struct MonthlyBudget{
    float Housing;
    float Utilities;
    float Hhexpenses;
    float Transport;
    float Food;
    float Medical;
    float Insurance;
    float Entertain;
    float Clothing;
    float Misc;
};

void fillStruct(MonthlyBudget *);
void askStruct(MonthlyBudget *);
void rprtStruct(MonthlyBudget, MonthlyBudget);

//User Libraries
//Global Constants
//Universal Math, Physics, Conversions, Higher Dimensions
//Prototypes
//Execution Begins Here
int main(int argc, char** argv) {
    
    MonthlyBudget base;
    MonthlyBudget *based;
    based = &base;
    fillStruct(based);
    MonthlyBudget user;
    MonthlyBudget *used;
    used = &user;
    askStruct(used);
    rprtStruct(base,user);
    cout<<"test"<<endl;
    //Clean up and exit
    return 0;
}


void fillStruct (MonthlyBudget *a){
    a->Housing=500.00;
    a->Utilities=150.00;
    a->Hhexpenses=65.00;
    a->Transport=50.00;
    a->Food=250.00;
    a->Medical=30.00;
    a->Insurance=100.00;
    a->Entertain=150.00;
    a->Clothing=75.00;
    a->Misc=50.00;
}


void askStruct(MonthlyBudget *a){
    cout<<"Please enter how much you've spent this month in each category.\n";
    cout<<"Housing:";
    cin>>a->Housing;
    cout<<"Utilities:";
    cin>>a->Utilities;
    cout<<"Household Expenses:";
    cin>>a->Hhexpenses;
    cout<<"Transportation:";
    cin>>a->Transport;
    cout<<"Food:";
    cin>>a->Food;
    cout<<"Medical:";
    cin>>a->Medical;
    cout<<"Insurance:";
    cin>>a->Insurance;
    cout<<"Entertainment:";
    cin>>a->Entertain;
    cout<<"Clothing:";
    cin>>a->Clothing;
    cout<<"Miscellaneous purchases:";
    cin>>a->Misc;
}

void rprtStruct(MonthlyBudget a,MonthlyBudget b){
    float total=0;
    float temp=0;
    cout<<"Here's how you did compared to your budget.\n";
    if(a.Housing>b.Housing){
        temp=0;
        temp=a.Housing-b.Housing;
        cout<<fixed<<setprecision(2)<<"Housing:                      Under budget by $ "<<temp<<endl;
        total+=temp;
    }
    if(b.Housing>a.Housing){
        temp=0;
        temp=b.Housing-a.Housing;
        cout<<fixed<<setprecision(2)<<"Housing:                      Over  budget by $ "<<temp<<endl;
        total-=temp;
    }
    if(a.Utilities>b.Utilities){
        temp=0;
        temp=a.Utilities-b.Utilities;
        cout<<fixed<<setprecision(2)<<"Utilities:                    Under budget by $ "<<temp<<endl;
        total+=temp;
    }
    if(b.Utilities>a.Utilities){
        temp=0;
        temp=b.Utilities-a.Utilities;
        cout<<fixed<<setprecision(2)<<"Utilities:                    Over  budget by $ "<<temp<<endl;
        total-=temp;
    }
    if(a.Hhexpenses>b.Hhexpenses){
        temp=0;
        temp=a.Hhexpenses-b.Hhexpenses;
        cout<<fixed<<setprecision(2)<<"Household Expenses:           Under budget by $ "<<temp<<endl;
        total+=temp;
    }
    if(b.Hhexpenses>a.Hhexpenses){
        temp=0;
        temp=b.Hhexpenses-a.Hhexpenses;
        cout<<fixed<<setprecision(2)<<"Household Expenses:           Over  budget by $ "<<temp<<endl;
        total-=temp;
    }
    if(a.Transport>b.Transport){
        temp=0;
        temp=a.Transport-b.Transport;
        cout<<fixed<<setprecision(2)<<"Transportation:               Under budget by $ "<<temp<<endl;
        total+=temp;
    }
    if(b.Transport>a.Transport){
        temp=0;
        temp=b.Transport-a.Transport;
        cout<<fixed<<setprecision(2)<<"Transportation:               Over  budget by $ "<<temp<<endl;
        total-=temp;
    }
    if(a.Food>b.Food){
        temp=0;
        temp=a.Food-b.Food;
        cout<<fixed<<setprecision(2)<<"Food:                         Under budget by $ "<<temp<<endl;
        total+=temp;
    }
    if(b.Food>a.Food){
        temp=0;
        temp=b.Food-a.Food;
        cout<<fixed<<setprecision(2)<<"Food:                         Over  budget by $ "<<temp<<endl;
        total-=temp;
    }
    if(a.Medical>b.Medical){
        temp=0;
        temp=a.Medical-b.Medical;  
        cout<<fixed<<setprecision(2)<<"Medical:                      Under budget by $ "<<temp<<endl;
        total+=temp;
    }
    if(b.Medical>a.Medical){
        temp=0;
        temp=b.Medical-a.Medical;
        cout<<fixed<<setprecision(2)<<"Medical:                      Over  budget by $ "<<temp<<endl;
        total-=temp;
    }
    if(a.Insurance>b.Insurance){
        temp=0;
        temp=a.Insurance-b.Insurance;
        cout<<fixed<<setprecision(2)<<"Insurance:                    Under budget by $ "<<temp<<endl;
        total+=temp;
    }
    if(b.Insurance>a.Insurance){
        temp=0;
        temp=b.Insurance-a.Insurance;
        cout<<fixed<<setprecision(2)<<"Insurance:                    Over  budget by $ "<<temp<<endl;
        total-=temp;
    }
    if(a.Entertain>b.Entertain){
        temp=0;
        temp=a.Entertain-b.Entertain;
        cout<<fixed<<setprecision(2)<<"Entertainment:                Under budget by $ "<<temp<<endl;
        total+=temp;
    }
    if(b.Entertain>a.Entertain){
        temp=0;
        temp=b.Entertain-a.Entertain;
        cout<<fixed<<setprecision(2)<<"Entertainment:                Over  budget by $ "<<temp<<endl;
        total-=temp;
    }
    if(a.Clothing>b.Clothing){
        temp=0;
        temp=a.Clothing-b.Clothing;
        cout<<fixed<<setprecision(2)<<"Clothing:                     Under budget by $ "<<temp<<endl;
        total+=temp;
    }
    if(b.Clothing>a.Clothing){
        temp=0;
        temp=b.Clothing-a.Clothing;
        cout<<fixed<<setprecision(2)<<"Clothing:                     Over  budget by $ "<<temp<<endl;
        total-=temp;
    }
    if(a.Misc>b.Misc){
        temp=0;
        temp=a.Misc-b.Misc;
        cout<<fixed<<setprecision(2)<<"Miscellaneous purchases:      Under budget by $ "<<temp<<endl;
        total+=temp;
    }
    if(b.Misc>a.Misc){
        temp=0;
        temp=b.Misc-a.Misc;
        cout<<fixed<<setprecision(2)<<"Miscellaneous purchases:      Over  budget by $ "<<temp<<endl;
        total-=temp;
    }
    if(total<0){
        total=total*(-1);
        cout<<fixed<<setprecision(2)<<"\n\nYour total budget was exceeded by $ "<<total<<endl;
        total=total*(-1);
    }
    if(total>0){
        total;
        cout<<fixed<<setprecision(2)<<"\n\nThis month you have a surplus of $ "<<total<<endl;
    }
    if(total==0){
        cout<<"\n\nThis month you were on budget."<<endl;
    }
}