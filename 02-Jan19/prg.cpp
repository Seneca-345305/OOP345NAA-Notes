#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
struct foo1 {
   double i;
   int j;
   char ch;
};
struct foo2 {
   double k;
   char ch;
   int i;
};
int main() {
   cout << sizeof(foo1) << endl;
   cout << sizeof(foo2) << endl;
   std::cout << alignof(int) << std::endl;
   std::cout << alignof(double) << std::endl;
   return 0;
}
