//��������� ����-11-20
//���� �����
#include <cstdlib>
#include <iostream>
using namespace std;
void sign(double n)
{
    if (n > 0) cout << "+" << "\n";
    else if (n < 0) cout << "-" << "\n";
    else cout << "0" << "\n";
}
int main()
{
    double num;
    cin >> num;
    sign(num);
    return 0;
}
