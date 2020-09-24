#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float S, n, p;
    cin >> S;
    cin >> n;
    cin >> p;
    float r = p/100;
    float m = (S * r * pow((1+r),n))/(12 * (pow((1+r),n) - 1));
    cout << m << endl;
    return 0;
}