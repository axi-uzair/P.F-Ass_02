#include <iostream>
using namespace std;

int main() {

double priceA=10.0, priceB=20.0, priceC=30.0;
double total, finaltotal, shipping, totalshipping;
int quantityA, quantityB, quantityC;
int loyaltypoints;
cout <<"Enter the quantity of Product A: ";
cin >>quantityA;
cout <<"Enter the quantity of Product B: ";
cin >>quantityB;
cout <<"Enter the quantity of Product C: ";
cin >>quantityC;

total=(priceA*quantityA) + (priceB*quantityB) + (priceC*quantityC);
cout <<"Total cost: $" <<total <<endl;

finaltotal = (total > 200) ? (total*0.9) : total;
cout <<"Total after discount: $" <<finaltotal <<endl;

shipping = (finaltotal < 150) ? 15.0 : 0.0;
cout <<"Total after discount and shipping: $" <<finaltotal + shipping <<endl;

totalshipping = finaltotal + shipping;
loyaltypoints = (totalshipping > 300) ? 50 : 20;
cout <<"Loyalty points earned: " <<loyaltypoints <<endl;

    return 0;
}