#include <iostream>
using namespace std;

//define a class
class Test{};

int main() {
   try{
      //throw object of that class
      throw Test();
   }
   catch(Test t) {
      cout << "Caught exception 'Test'!" << endl;
   }


   return 0;
}