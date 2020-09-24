#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
float func(float S, float n, float r)
{
    return (S*r*pow((1+r),n))/(12*(pow((1+r),n)-1));
}
int main()
{
    float S, m, n, r, res;
    cin >> S;
    cin >> n;
    cin >> m;
    for (float p = 0; p > -1; p+=0.1)
    {   
        res = func(S, n, p/100);
        if (res > m)
        {
            cout << p << endl;
            break;
        } 
    }
    return 0;
}