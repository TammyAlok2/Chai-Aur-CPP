#include <iostream>
using namespace std;


// Declaration and definiton of the function 
int checkTemperature(int temperature){
    cout<<"The temperature is "<<temperature<<" degrees"<<endl;
    return temperature;
}
// Declaration of the function 
void serveChai(int cups);

// Definition of the function
void serveChai(int cups){
    cout<<"Serving "<<cups<<" cups of chai"<<endl;
}   

int main (){
// calling of the functiom 
serveChai(2);
checkTemperature(30);
    return 0;
}

// return Type functionName(parameters){
//     //function body}