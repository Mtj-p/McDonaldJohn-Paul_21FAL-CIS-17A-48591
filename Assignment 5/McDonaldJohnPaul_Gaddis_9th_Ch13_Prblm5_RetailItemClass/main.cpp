/*
 * file: McDonaldJohnPaul_Gaddis_9th_Ch13_Prblm5_RetailItemClass
 * Author: John-Paul McDonald
 * Date: 12/12/2021
 * Purpose: Display 3 items from a Retail Item Class
 */

//System Libraries
#include <iostream>
#include <iomanip>

#include "RetailItem.h"
using namespace std;


int main(int argc, char** argv) {
    RetailItem items[3]{RetailItem("Jacket",12,59.95),RetailItem("Designer Jeans",40,34.95),RetailItem("Shirt",20,24.95)};//3 objects
    cout<<"\t\t\t"<<"Description"<<"\t\t"<<"Units on Hand"<<"\t\t"<<"Price\n";
    string io="Item #";//for simplicity
    for(int i=0;i<3;i++){//loop to display objects
        cout<<io<<i+1<<"\t\t\t"<<items[i].getDesc()<<"\t\t";
        if(i!=1){
            cout<<"\t";//Designer Jeans is too long for \t formatting
        }
        cout<<items[i].getUOH()<<"\t\t\t"<<items[i].getPrice()<<endl;
    }
    return 0;
}
