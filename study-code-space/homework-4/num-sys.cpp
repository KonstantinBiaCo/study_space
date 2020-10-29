#include <cstdlib>
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#define DIG "0123456789ABCDEFGHIGKLMNOPQRSTUVWXYZ"
using namespace std;
double get_frac_10(string num, int d, string ref = DIG)
{
    int k = 0;
    float s_frac = 0;
    for(int i = 0; i < num.length(); i++)
    {
        k = -(1+i);
        s_frac += ref.find(num[i], 0) * pow(d, k);
    }
    return s_frac;
}

int get_full_10(string num, int d, string ref = DIG)
{
    int k = 0;
    int s_full = 0;
    for(int i = num.length() - 1; i != -1; i--)
    {
        s_full+= ref.find(num[i], 0) * pow(d, k);
        k++;
    }
    return s_full;
}

int accuracy(double frac)
{
    if (frac == 0.0) return 0;
    ostringstream ss;
    ss << frac;
    string num(ss.str());
    num = num.erase(0,2);
    int l = num.length();
    int L;
    L = -(log((pow(0.1, l)*(int)num[l - 1])/2)/log(10));
    return L;
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
string frac_new_base(double frac, int b, int acc)
{   
    string new_s;
    int n;
    double n_last;
    double d;
    for(int i = 0; i < acc; i++)
    {
        frac = frac*b;
        d = modf(frac, &n_last);
        n_last = int(n_last);
        if (i == acc)
        {
            if (b%2 == 0 && b/2 <= n_last) new_s[acc-1] = DIG[n+1];
            else if (b%2 != 0 && (b+1)/2 <= n_last) new_s[acc-1] = DIG[n+1];
        }
        else
        {
            new_s+=DIG[int(n_last)];
            frac = d;
            if(frac == 0.0) break;
            n = int(n_last); 
        }
    }
    return new_s;
}
int main()
{
    string full_old, frac_old, full_new, frac_new;
    double frac_10;
    int acc, full_10, old_base, new_base, sign = 0;
    string num;
    cout << "Введите число" << "\n";
    cin >> num;
    cout << "Введите первоначальное основание" << "\n";
    cin >> old_base;
    cout << "Введите новое основание" << "\n";
    cin >> new_base;
    for(int i = 0; i < num.length(); i++)
    {
        if (num[i] == '.')
        {
            for(int c = i+1; c < num.length(); c++) frac_old.resize(c-i, num[c]);
            break;
        }
        else if(num[i] == '-') sign=1;
        else full_old.resize(i+1, num[i]);
    }
    if (old_base == new_base) cout << num << "\n";
    else
    {
        full_10 = get_full_10(full_old, old_base);
        full_new = full_new_base(full_10, new_base);
        frac_10 = get_frac_10(frac_old, old_base);
        acc = accuracy(frac_10);
        frac_new = '.' + frac_new_base(frac_10, new_base, acc);
        if (full_10 == 0) full_new = "0";
        if (frac_10 == 0) frac_new = " ";
        if(sign) cout << '-' + full_new  + frac_new << "\n";
        else cout << full_new  + frac_new << "\n";
    } 
    return 0;
}