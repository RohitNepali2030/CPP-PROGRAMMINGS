#include <iostream>
using namespace std;

//define a class
class Test1{
   string str;
   public:
      //try-catch in the constructor
      Test1(string str){
         try{
            if (str == "Hello"){
               throw "Exception! String cannot be 'Hello'!";
            }
            this->str = str;   
         }
         catch(const char* s) {
            cout << s << endl;
         }
      }
};

int main() {
   Test1 t("Hello");
   return 0;
}