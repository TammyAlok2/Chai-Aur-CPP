#include <iostream>
using namespace std; 

// this contains default paramater 
void serveChai(string teaType = "masala"){
    int cups = 1; // formal parameter 
    cout<<"Serving "<<teaType<<" chai"<<endl;
}

void serveChai(int cups ){
    cout<<"Serving "<<cups<<" cups of chai"<<endl;
    // This function will not be called as the function with the same name and string parameter is called.
}

int main(){
    serveChai("Ginger"); // actual parameter or argument 
    serveChai(2);
    serveChai();

    return 0;
}