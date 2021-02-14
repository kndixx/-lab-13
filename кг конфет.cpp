#include <iostream>
using namespace std;
int main()
{
   double x;
   cin >> x;
   for (double i = 0.1; i <= 1; i+=0.1)
   {
      cout << x*i << endl;
   }
   return 0;
}