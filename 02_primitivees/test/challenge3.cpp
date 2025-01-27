#include <iostream>
#include <string>
using namespace std;

int main()
{
    string favouriteTea;
    int mugOfTea;
    cout << "Enter your favourite tea : ";
    getline(cin, favouriteTea);

    cout << "How many cups of tea do you drink in a day : ";
    cin >> mugOfTea;

    cout << "Your favourite tea  is : " << favouriteTea << mugOfTea << "you drink in a day" << endl;
    return 0;
}