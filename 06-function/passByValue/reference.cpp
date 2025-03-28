#include<iostream>
using namespace std; 

void pourChai(int cups){
    cups = cups +4;
    cout<<"Poured  "<<cups<<" cups of chai"<<endl;
}

int main(){
    int cups =2;
    pourChai(cups);
    cout<<"The number of cups after pouring is "<<cups<<endl;
    return 0;
}