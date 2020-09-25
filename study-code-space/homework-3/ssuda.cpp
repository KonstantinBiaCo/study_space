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
    float S, m, n;
    cin >> S;
    cin >> n;
    cin >> m;
    if (S < 0 || m < 0 || n < 0) cout << "error\n";
    else
    {
    	for (double p = 0; p > -1; p+=0.0001)
    	{   
        	if (func(S, n, p/100) > m)
        	{
            	cout << p - 0.0001  << endl;
            	break;
        	} 
    	}	
	}
    return 0;
}
