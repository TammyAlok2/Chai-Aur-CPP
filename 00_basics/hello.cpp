#include <iostream>
using namespace std;// type 1 of using namespace

using std::cin; // type 2 of using namespace
using std::endl;

namespace myChai{
    void display(){
        //comment
    }
}

int main (){
  //  myChai::display();
  //  std::cout<<"hello world "; // type 3 of using namespace
  cout<< "hello world";
  return 0 ;
}