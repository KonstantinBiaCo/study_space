//��������� ����-11-20
//����. 25
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#define SYM "01234"
using namespace std;
//��������� � ��������� �������
string to_two(string num, long int n = 0, string new_s="", int m = 0, int k = 0, string ref = SYM)
{
    reverse(num.begin(), num.end()); //������ �������������
    //��������� � ����������
    for(int i = 0; i < num.length(); i++) n+= ref.find(num[i], 0) * pow(5, i);
    //��������� � ��������, �������� ����� ������ new_s
    while(1)
    {
        m = n%2;
        new_s += SYM[m]; //���������� ������� �� �������
        n = n/2;
        if(n < 2) 
        //���� ����� ����� ������� ������ ��������,
        //�� ���������� ���� �����
        {
           new_s+=SYM[n];
           break; 
        }
    }
    //� ����� "����������"
    reverse(new_s.begin(), new_s.end());
    return new_s;
}
int main()
{
    int n;
    cin >> n;
    string *F = new string[n](); //���. ������ � ����. � ���������� ������� (��������������� ������)
    string *T = new string[n](); //���. ������ � ����. � �������� ������� (��������������� ������)
    for(int i = 0; i < n; i++) 
    {
        cin >> F[i];
        T[i] = to_two(F[i]);
        cout << T[i] << "\n";
    } 
    delete[] F;
    delete[] T;
    return 0;
}