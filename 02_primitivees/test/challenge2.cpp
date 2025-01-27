#include<iostream>
using namespace std;

int main(){
 int basePrice = 108;
 float tax = 10;
 float total = basePrice + basePrice*tax/100;
 cout<<"The total price of tea is : "<<int(total)<<endl;
 
    return 0 ;
}
