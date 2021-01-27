//��������� ����-11-20
//������� ���������
#include <cstdlib>
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#define DIG "0123456789ABCDEFGHIGKLMNOPQRSTUVWXYZ"
using namespace std;
//��������� ����� � ����������
unsigned long long int get_10(string num, int d, string ref = DIG)
{
    //d - ������ ���������
    int n, k = 0; //n - �����-����. �� DIG; k - �������
    //����������� ��� ���. �����
    unsigned long long int s_full = 0;
    //������ ������ ��� �������� ����������� �� ���
    reverse(num.begin(), num.end());
    for(int i = 0; i < num.length(); i++)
    {
    	n = ref.find(num[i], 0);
        //�������� �� ������������ ��������� ���������
    	if (n >= d) return -1;
        s_full+= n * pow(d, k);
        k++;
    }
    return s_full;
}
//������� � ������ ���������
//(������� � �������)
string new_b(int num, int b)
{

    string new_s;
    int m, k = 0;
    while(1)
    {
        m = num%b;
        new_s += DIG[m]; //���������� ������� �� �������
        num = num/b;
        if(num < b) 
        //���� ����� ����� ������� ������ ��������,
        //�� ���������� ���� �����
        {
           new_s+=DIG[num];
           break; 
        }
    }
    //����� ������ ���������� "����������"
    reverse(new_s.begin(), new_s.end()); 
    return new_s;
}
int main()
{
	setlocale(LC_ALL, "Russian");
    //������, ����� ������
    string old_s, new_s;
    int old_base, new_base, sign = 0;
    unsigned long long full_10; //���������� ���
    string num;
    cout << "������� �����" << "\n"; //ACD12
    cin >> num;
    cout << "������� �������������� ���������" << "\n"; //16
    cin >> old_base;
    cout << "������� ����� ���������" << "\n"; //8
    cin >> new_base;
    if(num[0] == '-') //������� ����, �� ����������, ��� �� ���
	{
		sign=1;
		num = num.erase(0,1);
	}
    //�� 10 � 10?
    if (old_base == new_base) cout << num << "\n";
    else
    {
    	
        full_10 = get_10(num, old_base);
        if (full_10 == -1) //�� ��������� ��������� ����� � ��������
        {
        	cout << "����������� ����" << "\n";
        	return 0;
		}
		if(new_base == 10)
		{
			if(sign) cout << '-' << full_10 << "\n";
			else cout << full_10 << "\n";
		}
        else
        {
            new_s = new_b(full_10, new_base);
            if (full_10 == 0) new_s = "0";
            if(sign) cout << '-' + new_s << "\n";
            else cout << new_s << "\n"; //2546422
        }
    } 
    return 0;
}
