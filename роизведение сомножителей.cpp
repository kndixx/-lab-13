#include <iostream>
using namespace std;
 
int main (){
  int N;
  double rez = 1;
  cin >> N;
  for (int i = 1; i<=N; i++) {
    rez = rez*(1+0.1*i);
  }
  cout << rez;
  return 0;
}