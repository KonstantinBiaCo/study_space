#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
    long int max =2000000000;
    int a = 0, b = 0, m;
    cin >> m;
    // if (m > max)
    // {
    //     cout << "error\n";
    //     return 0; 
    // }
    for(int i = 0; i < 700000000; i++)
    {
        for(int j = 0; j < 500000000; j++)
        {
            if ((3*i + 4*j) == m)
            {
                a = i;
                b = j;
                break;
            }
            else if ((3*i + 4*j) > m) break;
        }
        if ((3*a + 4*b) == m)break;
    }
    cout << a << "\n" << b << "\n";
    return 0;
}