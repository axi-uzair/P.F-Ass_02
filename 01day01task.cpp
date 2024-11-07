#include <iostream>
using namespace std;

int main() {

double priceA=10.0, priceB=20.0, priceC=30.0;
double total;
int quantityA, quantityB, quantityC;
cout <<"Enter the quantity of First Product: ";
cin >>quantityA;
cout <<"Enter the quantity of Second Product: ";
cin >>quantityB;
cout <<"Enter the quantity of Third Product: ";
cin >>quantityC;
total=(priceA*quantityA) + (priceB*quantityB) + (priceC*quantityC);
cout <<"Total cost: $" <<total <<endl;

    return 0;
}
