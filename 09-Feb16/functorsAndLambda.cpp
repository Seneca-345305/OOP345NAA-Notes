#include <iostream>
#include <string>
using namespace std;

class Foo {
   char sep;
public:
   Foo(char s) :sep(s) {}
   int operator()(int num) {
      for (int i = 0; i < num; cout << i++ << sep); cout << endl;
   }
};



int main() {
   Foo f('+');
   f(5);
   auto loop = [&](int num) {
      for (int i = 0; i < num; cout << i++ << " "); 
      cout << endl; 
   };
   

   loop(5);
   
   
   return 0;
}