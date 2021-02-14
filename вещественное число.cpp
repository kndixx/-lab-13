#include <iostream>
using namespace std;
 
int main()
{
 
    int A, N;
    cin >> A >> N;
 
    int x = 1;
    int rez = 0;
    for (int i = 0; i <= N; ++i)
    {
        rez = rez + x;
        x = x * (-A);
    }
    cout << rez << endl;
    return 0;
 
}