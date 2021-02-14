#include <iostream>
using namespace std;
 
int main (){
 int  N, sum = 1;
 double A, A1;
 cin >> N >> A;
 A1 = A;
 for (int i=1; i <= N; i++)
 { sum = sum + A1; 
   A1 = A1 * A;
 }
 cout << sum;
  return 0;
}

