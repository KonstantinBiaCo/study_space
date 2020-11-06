#include <cstdlib>
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#define DIG "0123456789ABCDEFGHIGKLMNOPQRSTUVWXYZ"
using namespace std;
unsigned long long int get_full_10(string num, int d, string ref = DIG)
{
    int k = 0;
    int n;
    unsigned long long int s_full = 0;
    for(int i = num.length() - 1; i != -1; i--)
    {
    	n = ref.find(num[i], 0);
    	if (n > d) return -1;
        s_full+= ref.find(num[i], 0) * pow(d, k);
        k++;
    }
    return s_full;
}
string full_new_base(int num, int b)
{
    string new_s;
    int m, k = 0;
    while(1)
    {
        m = num%b;
        new_s += DIG[m];
        num = num/b;
        if(num < b) 
        {
           new_s+=DIG[num];
           break; 
        }
    }
    reverse(new_s.begin(), new_s.end());
    return new_s;
}
int main()
{
	setlocale(LC_ALL, "Russian");
    string full_old, frac_old, full_new, frac_new;
    int old_base, new_base, sign = 0;
    unsigned long long full_10;
    string num;
    cout << "Введите число" << "\n";
    cin >> num;
    cout << "Введите первоначальное основание" << "\n";
    cin >> old_base;
    cout << "Введите новое основание" << "\n";
    cin >> new_base;
    if(num[0] == '-') 
	{
		sign=1;
		num = num.erase(0,1);
	}
    
    if (old_base == new_base) cout << num << "\n";
    else
    {
    	
        full_10 = get_full_10(num, old_base);
        if (full_10 == -1)
        {
        	cout << "Некоректный ввод" << "\n";
        	return 0;
		}
		if(new_base == 10)
		{
			if(sign) cout << '-' << full_10 << "\n";
			else cout << full_10 << "\n";
			return 0;
		}
        full_new = full_new_base(full_10, new_base);
        if (full_10 == 0) full_new = "0";
        if(sign) cout << '-' + full_new << "\n";
        else cout << full_new << "\n";
    } 
    return 0;
}
