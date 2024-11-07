#include <iostream>
#include <string>
using namespace std;

int main(){

    double totalamount,discount, discountedamount;
    int customertype;
    string method;

cout <<"Enter the total amount after any existing discounts: $";
cin >>totalamount;
cout <<"Enter customer type:";
cout <<"1. Regular: No additional discount.";
cout <<"2. VIP: Additional 5% discount on the total (after applying any existing discounts).";
cout <<"Enter your choice (1 for Regular or 2 for VIP): ";
cin >>customertype;

if(customertype==1)
    method ="Regular";
if(customertype==2)
    method ="VIP";
cout <<"The customer type you selected is: " <<method <<endl;

discount = (customertype == 2) ? 0.05 : 0.0;
discountedamount = totalamount * (1 - discount);
cout <<"Final amount to be paid: $" <<discountedamount <<endl;

    return 0;
}
