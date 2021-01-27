#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int biggest = 2000000000;
    unsigned int a = 0, b = 0, m;
    cin >> m;
    if (m > biggest) return 0; 
    for(int i = 0; i < biggest/3; i++)
    {
        for(int j = 0; j < biggest/4; j++)
        {
            if ((3*i + 4*j) == m)
            {
                a = i;
                b = j;
                break;
            }
            else if ((3*i + 4*j) > m) break;
        }
        if ((3*a + 4*b) == m) break;
    }
    cout << a << "\n" << b << "\n";
    return 0;
}