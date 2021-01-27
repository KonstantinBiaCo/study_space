#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
    int A, B, C, N = 1;
    cin >> A >> B >> C;
    // if(C > 2000000000)
    // {
    //     cout << "error\n";
    //     return 0;
    // }
    while (A + B*N < C) N++;
    N--;
    cout << N << endl;
    return 0;
}