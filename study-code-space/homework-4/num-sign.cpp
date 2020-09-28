#include <cstdlib>
#include <iostream>
using namespace std;
void sign(float n)
{
    if (n > 0) cout << "+" << "\n";
    else if (n < 0) cout << "-" << "\n";
    else cout << "0" << "\n";
}
int main()
{
    float num;
    cin >> num;
    sign(num);
    return 0;
}