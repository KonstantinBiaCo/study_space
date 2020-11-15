#include <cstdlib>
#include <iostream>
using namespace std;
int diff(int *mas)
{
    if (mas[0] > mas[1]) return mas[0];
    return mas[1];
}
int main()
{
    int N, k;
    cin >> N >> k;
    int *K = new int(k);
    int parts[*K][2];
    for (int i = 0; i < k; i++) 
    {
        parts[i][0] = 0;
        parts[i][1] = 0;
    }
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++) if (diff(parts[j]) > N) 
        {
            N = diff(parts[j]);
            if (parts[j][0] == N) parts[j][0] = 0;
            else parts[j][1] = 0;
        }
        if(N % 2 == 0)
        {
            parts[i][0] = N/2 - 1;
            parts[i][1] = N/2;
        }
        else 
        {
            parts[i][0] = (N-1)/2;
            parts[i][1] = (N-1)/2;
        }
        N = 0;
    }
    cout << parts[k - 1][0] << endl << parts[k - 1][1] << endl;
    return 0;
}