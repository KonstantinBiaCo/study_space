#include <cstdlib>
#include <iostream>
using namespace std;
string p1 = "* * * * * *-----------------------------\n";
string p2 = " * * * * * -----------------------------\n";
string line = "----------------------------------------\n";
int main()
{
    for (int i = 0; i < 13; i++)
    {
        if (i < 9 && i%2 == 0) cout << p1; 
        else if (i < 9 && i%2 != 0) cout << p2;
        else cout << line;
    }
    return 0;
}