#include <iostream>
using namespace std;
 
int main (){
 int N, sum = 0;
 cin >> N;
 for (int i=1; i <= 2*N - 1; i+=2)
 { sum+=i; 
   cout << sum << endl;
 }
  return 0;
}
