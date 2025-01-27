#include <iostream>
using namespace std;

int main()
{

    string teaType;
    float teaPrice;
    char teaRating;

    cout << "Enter the type of tea you want : ";
    getline(cin, teaType);

    cout << "Enter the price of tea : ";
    cin >> teaPrice;

    cout << "Enter the rating of tea : ";
    cin >> teaRating;

    cout << "The type of tea you want is : \"" << teaType << "\"" << endl;
    cout << "The price of tea is : \"" << teaPrice << "\"" << endl;
 cout <<"rating given is: \"" <<teaRating<< "\"" <<endl;
    return 0;
}