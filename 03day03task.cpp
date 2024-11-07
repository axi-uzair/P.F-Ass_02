#include <iostream>
using namespace std;

int main(){

double priceA = 10.0, priceB = 20.0, priceC = 30.0;
int quantityA, quantityB, quantityC;
double total, finaltotal, shipping;
cout <<"Enter the quantity of Product A: ";
cin >>quantityA;
cout <<"Enter the quantity of Product B: ";
cin >>quantityB;
cout <<"Enter the quantity of Product C: ";
cin >>quantityC;
total = (priceA * quantityA) + (priceB  *quantityB) + (priceC * quantityC);
finaltotal = (total > 200) ? (total * 0.9) : total;
shipping = (finaltotal < 150) ? 15.0 : 0.0;
cout <<"Total after discount and shipping: $" <<finaltotal + shipping <<endl;

    return 0;
}
