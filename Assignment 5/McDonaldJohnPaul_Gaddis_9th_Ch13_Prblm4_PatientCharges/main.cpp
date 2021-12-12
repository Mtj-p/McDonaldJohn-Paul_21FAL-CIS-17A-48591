/*
 * file: McDonaldJohnPaul_Gaddis_9th_Ch13_Prblm4_PatientCharges
 * Author: John-Paul McDonald
 * Date: 12/12/2021
 * Purpose: Displaying a patient and possible procedures classes
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include "Patient.h"
#include "Procedure.h"
using namespace std;


int main(int argc, char** argv) {
    Patient JaneDoe("Jane Doe","4800 Magnolia Avenue","951-222-8000","John Smith 800-273-8255");//declaring my patient
    Procedure procedures[3]={Procedure("Physical Exam","Today's Date","Dr. Irvine",250.00),
                             Procedure("X-ray","Today's Date","Dr. Jamison",500.00),
                             Procedure("Blood test","Today's Date","Dr. Smith",200.00)};//declaring an array of procedures
    
    //Displaying the patient
    cout<<"Patient #1: \nName: "<<JaneDoe.getName()<<endl;
    cout<<"Address: "<<JaneDoe.getAddress()<<"\nPhone: "<<JaneDoe.getPhone()<<"\nEmergency Contact Information: "<<JaneDoe.getEmergency()<<endl;
    
    cout<<"\n\n";//for clarity
    
    //Displaying the procedures
    string proc = "Procedure #";//for simplicity
    cout<<proc<<"1: "<<setw(30)<<proc<<"2: "<<setw(23)<<proc<<"#3:\n";
    string pname = "Procedure name: ";
    cout<<pname<<procedures[0].getName()<<setw(20)<<pname<<procedures[1].getName()<<setw(21)<<pname<<procedures[2].getName()<<endl;
    string pdate = "Date: ";
    cout<<pdate<<procedures[0].getDate()<<setw(21)<<pdate<<procedures[1].getDate()<<setw(14)<<pdate<<procedures[2].getDate()<<endl;
    string pprac = "Practitioner: ";
    cout<<pprac<<procedures[0].getPrac()<<setw(23)<<pprac<<procedures[1].getPrac()<<setw(15)<<pprac<<procedures[2].getPrac()<<endl;
    string pchar = "Charge: ";
    cout<<fixed<<setprecision(2)<<pchar<<procedures[0].getCharge()<<setw(27)<<pchar<<procedures[1].getCharge()<<setw(20)<<pchar<<procedures[2].getCharge()<<endl;
    return 0;
}
