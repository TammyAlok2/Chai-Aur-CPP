#include<iostream>
using namespace std;

int main(){

float teaPrice = 100.990;
double teaPriceInt = (short)teaPrice;
cout<<teaPriceInt<<endl;

int teaQuantity = 10;
double totalTeaPrice = teaPrice * teaQuantity;
cout<<totalTeaPrice<<endl;

    return 0;
}