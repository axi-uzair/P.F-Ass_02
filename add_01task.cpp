#include <iostream>
#include <string>
using namespace std;

int main(){

double totalamount, finalamount;
int paymentmethod;
string methodname;
double feepercentage;
cout << "Enter the total amount: $";
cin >> totalamount;

cout <<"Select the payment method you want to use:" <<endl;
cout <<"1. Credit Card 2% transaction fee.";
cout <<"\n2. PayPal 3% transaction fee.";
cout <<"\n3. Cash No fee.";
cout <<"\nEnter 1 for Credit Card, 2 for Paypal, or 3 for Cash: ";
cin >>paymentmethod;

if(paymentmethod==1)
    methodname ="Credit Card";
else if(paymentmethod==2)
    methodname ="Paypal";
else if(paymentmethod==3)
    methodname ="Cash";
cout <<"The payment method you selected is: " <<methodname <<endl;

feepercentage = (paymentmethod == 1) ? 0.02 : (paymentmethod == 2) ? 0.03 : 0.0;
finalamount = totalamount * (1 + feepercentage);
cout <<"Final amount to be paid: $" <<finalamount <<endl;

    return 0;
}

