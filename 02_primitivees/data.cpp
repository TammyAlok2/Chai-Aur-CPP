#include <iostream>
using namespace std;

int main(){

int teaLeaves = 50;
float waterTemperature = 85.5;
double priceOfTea = 100.50;

//bool isTeaReady = 'false'; gives 1 
//bool isTeaReady = undefined : not work
//bool isTeaReady = null;  not work
// bool isTeaReady = ""; // not work
// bool isTeaReady = " "; //  return 1 
bool isTeaReady = false; // 0
cout<<isTeaReady;

//char teaGrade = 'AB'; // gives last charcter i.e . B  
char teaGrade='1'; // gives 1 
cout<<teaGrade; 



    return 0 ;
}