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
    cout<<"Enter housing cost for the month:$";
    cout<<"\nEnter utilities cost for the month:$";
    cout<<"\nEnter household expenses cost for the month:$";
    cout<<"\nEnter transportation cost for the month:$";
    cout<<"\nEnter food cost for the month:$";
    cout<<"\nEnter medical cost for the month:$";
    cout<<"\nEnter insurance cost for the month:$";
    cout<<"\nEnter entertainment cost for the month:$";
    cout<<"\nEnter clothing cost for the month:$";
    cout<<"\nEnter miscellaneous cost for the month:$";
    cin>>a->Housing;
    cin>>a->Utilities;
    cin>>a->Hhexpenses;
    cin>>a->Transport;
    cin>>a->Food;
    cin>>a->Medical;
    cin>>a->Insurance;
    cin>>a->Entertain;
    cin>>a->Clothing;
    cin>>a->Misc;
    cout<<endl;
}

void rprtStruct(MonthlyBudget a,MonthlyBudget b){
    float total=0;
    float temp=0;
    if(a.Housing==b.Housing){
        cout<<"Housing Even"<<endl;
    }
    if(a.Housing>b.Housing){
        temp=0;
        temp=a.Housing-b.Housing;
        cout<<"Housing Under"<<endl;
        total+=temp;
    }
    if(b.Housing>a.Housing){
        temp=0;
        temp=b.Housing-a.Housing;
        cout<<"Housing Over"<<endl;
        total-=temp;
    }
    if(a.Utilities==b.Utilities){
        cout<<"Utilities Even"<<endl;
    }
    if(a.Utilities>b.Utilities){
        temp=0;
        temp=a.Utilities-b.Utilities;
        cout<<"Utilities Under"<<endl;
        total+=temp;
    }
    if(b.Utilities>a.Utilities){
        temp=0;
        temp=b.Utilities-a.Utilities;
        cout<<"Utilities Over"<<endl;
        total-=temp;
    }
    if(a.Hhexpenses==b.Hhexpenses){
        cout<<"Household Expenses Even"<<endl;
    }
    if(a.Hhexpenses>b.Hhexpenses){
        temp=0;
        temp=a.Hhexpenses-b.Hhexpenses;
        cout<<"Household Expenses Under"<<endl;
        total+=temp;
    }
    if(b.Hhexpenses>a.Hhexpenses){
        temp=0;
        temp=b.Hhexpenses-a.Hhexpenses;
        cout<<"Household Expenses Over"<<endl;
        total-=temp;
    }
    if(a.Transport==b.Transport){
        cout<<"Transportation Even"<<endl;
    }
    if(a.Transport>b.Transport){
        temp=0;
        temp=a.Transport-b.Transport;
        cout<<"Transportation Under"<<endl;
        total+=temp;
    }
    if(b.Transport>a.Transport){
        temp=0;
        temp=b.Transport-a.Transport;
        cout<<"Transportation Over"<<endl;
        total-=temp;
    }
    if(a.Food==b.Food){
        cout<<"Food Even"<<endl;
    }
    if(a.Food>b.Food){
        temp=0;
        temp=a.Food-b.Food;
        cout<<"Food Under"<<endl;
        total+=temp;
    }
    if(b.Food>a.Food){
        temp=0;
        temp=b.Food-a.Food;
        cout<<"Food Over"<<endl;
        total-=temp;
    }
    if(a.Medical==b.Medical){
        cout<<"Medical Even"<<endl;
    }
    if(a.Medical>b.Medical){
        temp=0;
        temp=a.Medical-b.Medical;  
        cout<<"Medical Under"<<endl;
        total+=temp;
    }
    if(b.Medical>a.Medical){
        temp=0;
        temp=b.Medical-a.Medical;
        cout<<"Medical Over"<<endl;
        total-=temp;
    }
    if(a.Insurance==b.Insurance){
        cout<<"Insurance Even"<<endl;
    }
    if(a.Insurance>b.Insurance){
        temp=0;
        temp=a.Insurance-b.Insurance;
        cout<<"Insurance Under"<<endl;
        total+=temp;
    }
    if(b.Insurance>a.Insurance){
        temp=0;
        temp=b.Insurance-a.Insurance;
        cout<<"Insurance Over"<<endl;
        total-=temp;
    }
    if(a.Entertain==b.Entertain){
        cout<<"Entertainment Even"<<endl;
    }
    if(a.Entertain>b.Entertain){
        temp=0;
        temp=a.Entertain-b.Entertain;
        cout<<"Entertainment Under"<<endl;
        total+=temp;
    }
    if(b.Entertain>a.Entertain){
        temp=0;
        temp=b.Entertain-a.Entertain;
        cout<<"Entertainment Over"<<endl;
        total-=temp;
    }
    if(a.Clothing==b.Clothing){
        cout<<"Clothing Even"<<endl;
    }
    if(a.Clothing>b.Clothing){
        temp=0;
        temp=a.Clothing-b.Clothing;
        cout<<"Clothing Under"<<endl;
        total+=temp;
    }
    if(b.Clothing>a.Clothing){
        temp=0;
        temp=b.Clothing-a.Clothing;
        cout<<"Clothing Over"<<endl;
        total-=temp;
    }
    if(a.Misc==b.Misc){
        cout<<"Miscellaneous Even"<<endl;
    }
    if(a.Misc>b.Misc){
        temp=0;
        temp=a.Misc-b.Misc;
        cout<<"Miscellaneous Under"<<endl;
        total+=temp;
    }
    if(b.Misc>a.Misc){
        temp=0;
        temp=b.Misc-a.Misc;
        cout<<"Miscellaneous Over"<<endl;
        total-=temp;
    }
    if(total<0){
        total=total*(-1);
        cout<<fixed<<setprecision(2)<<"You were $"<<total<<" over budget";
        total=total*(-1);
    }
    if(total>0){
        total;
        cout<<fixed<<setprecision(2)<<"You were $"<<total<<" under budget";
    }
}