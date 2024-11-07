#include <iostream>
#include <string>
using namespace std;

int main(){

double totalamount;
string couponcode;
const string validcoupon = "SAVE10"; 
const double coupondiscount = 10.0;   
cout <<"Enter the total amount: ";
cin >>totalamount;
cout <<"Enter coupon code (if any): ";
cin >>couponcode;

if (couponcode == validcoupon) {
    totalamount -= coupondiscount;
    cout <<"Coupon applied! You saved $" <<coupondiscount << endl;
} else {
    cout <<"Invalid or no coupon applied." <<endl;
}
cout <<"Final amount to be paid: $" <<totalamount <<endl;

    return 0;
}