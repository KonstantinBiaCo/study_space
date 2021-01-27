//Соломатин ИКБО-11-20
//Заем
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double S, n, p;
    cin >> S;
    cin >> n;
    cin >> p;
    double r = p/100;
    double m = (S * r * pow((1+r),n))/(12 * (pow((1+r),n) - 1));
    cout << m << endl;
    return 0;
}
