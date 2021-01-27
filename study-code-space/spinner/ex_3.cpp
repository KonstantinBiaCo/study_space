#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    long int sum = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum +=(m - i)*(n - j);
        }
    }
    cout << sum << "\n";
    return 0;
}