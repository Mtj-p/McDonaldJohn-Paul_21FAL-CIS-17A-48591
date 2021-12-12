/*
 * file: McDonaldJohnPaul_Gaddis_9th_Ch13_Prblm6_InventoryClass
 * Author: John-Paul McDonald
 * Date: 12/12/2021
 * Purpose: Calculate the total cost of an inventory item
 * 
 * Note: This program breaks if you do not input the correct data type. 
 *       The problem did not mention type input validation.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include "Inventory.h"
using namespace std;

void Display(Inventory);

int main(int argc, char** argv) {
    int item,quantity;
    float cost;
    cout<<"Item Number (int): ";
    cin>>item;
    cout<<"Quantity (int): ";
    cin>>quantity;
    cout<<"Cost (float): ";
    cin>>cost;
    Inventory YourItem(item,quantity,cost);
    Display(YourItem);
    bool menu = true;
    while(menu){
        int user=0;
        cout<<"\nWould you like the change a variable? \n1 Item Number, 2 Quantity, 3 Cost, 4 to Exit (int): ";
        cin.clear();
        cin.ignore();
        cin>>user;
        switch(user){
            case 1:cout<<"Item Number (int): ";cin>>item;YourItem.setItemNumber(item);Display(YourItem);break;
            case 2:cout<<"Quantity (int): ";cin>>quantity;YourItem.setItemNumber(quantity);Display(YourItem);break;
            case 3:cout<<"Cost (float): ";cin>>cost;YourItem.setItemNumber(cost);Display(YourItem);break;
            case 4:menu=false;break;
        }
    }
    
    return 0;
}

void Display(Inventory YourItem){
    cout<<"\n\nYour item number: "<<setw(20)<<YourItem.getItemNumber()<<"\nQuantity: "<<setw(28)<<YourItem.getQuantity();
    cout<<fixed<<setprecision(2)<<"\nCost: "<<setw(32)<<YourItem.getCost()<<"\nTotal Cost: "<<setw(26)<<YourItem.getTotalCost()<<endl;
}
