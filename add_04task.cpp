#include <iostream>
#include <string>
using namespace std;

int main(){

double totalamount, finalamount, taxrate;
int location;
string region;
cout <<"Enter the total amount before tax: ";
cin >>totalamount;
cout <<"Enter your location (region number):";
cout <<"\n1. Region 1 (5% tax)";
cout <<"\n2. Region 2 (10% tax)";
cout <<"\n3. Region 3 (8% tax)";
cout <<"\nEnter choice (1 for region One, 2 for region Two, or 3 for region Three): ";
cin >>location;

if(location==1)
     region ="Region 1";
else if(location==2)
     region ="Region 2";
else if(location==3)
     region ="Region 3";
cout <<"The location (region number) you selected is: " <<region <<endl;

taxrate = (location == 1) ? 0.05 : (location == 2) ? 0.10 : (location == 3) ? 0.08 : 0.0;
finalamount = totalamount * (1 + taxrate);
cout <<"Final amount to be paid after tax: $" <<finalamount <<endl;

    return 0;
}