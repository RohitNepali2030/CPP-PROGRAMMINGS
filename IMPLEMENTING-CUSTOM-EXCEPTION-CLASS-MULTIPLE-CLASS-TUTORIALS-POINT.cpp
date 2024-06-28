#include <iostream>
using namespace std;

//define multiple classes
class Test1{};
class Test2{};

int main() {
   try{
      //throw objects of multiple classes
      throw Test1();
   }
   catch(Test1 t) {
      cout << "Caught exception 'Test1'!" << endl;
   }
   try{

      throw Test2();
   }
   catch(Test2 t) {
      cout << "Caught exception 'Test2'!" << endl;
   }

   return 0;
}