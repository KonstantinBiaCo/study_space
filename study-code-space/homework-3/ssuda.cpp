#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double func(double S, double n, double r)
{
    return (S*r*pow((1+r),n))/(12*(pow((1+r),n)-1));
}
int main()
{
    double S, m, n, last = 0, step = 1; 
    cin >> S >> n >> m;
    if (S < 0 || m < 0 || n < 0) cout << "error\n";
    else
    {
		while (step > 0.0000001)
		{
			for (double p = last; p > -1; p+=step)
			{   
				if (func(S, n, p/100) > m)
				{
					p -= step;
					last = p;
					step *=0.1;
					break;
				} 
			}
		}
		cout << fixed << setprecision(7) << last <<  "\n";
	}
    return 0;
}
