#include<iostream>
#include<string>
using namespace std;

int main(){

string userTea;

int teaQuantity;

cout<<"Enter the type of tea you want : ";
getline(cin,userTea); 

cout<<"Enter the quantity of tea you want : ";
 //getline(cin,teaQuantity); does not work on integer
 cin>>teaQuantity;


/*
GETLINE vs CIN
getline only works on strings cin >> information works all data types(except user defined data types unless >> is overloaded).

with getline you can specify the delimiter by default '\n' is used.
cin >> information uses any whitespace as a delimiter this includes spaces, newlines, tabs etc.

getline removes the delimiter from the input stream cin >> information does not.
*/

    return 0;
}