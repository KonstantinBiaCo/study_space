#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#define DIG "0123456789ABCDEFGHIGKLMNOPQRSTUVWXYZ"
using namespace std;
int get_coef(char c, int index = 0)
{
    for(int i = 0; i < 37; i++)
    {
        if(c == DIG[i]) 
        {
            index = i;
            break;
        }
    }
    return index;
}
double get_frac_10(string num, int d)
{
    int k = 0;
    float s_frac = 0;
    for(int i = 0; i < num.length(); i++)
    {
        k = -(1+i);
        s_frac += get_coef(num[i]) * pow(d, k);
    }
    return s_frac;
}

int get_full_10(string num, int d)
{
    int k = 0;
    int s_full = 0;
    for(int i = num.length() - 1; i != -1; i--)
    {
        s_full+= get_coef(num[i]) * pow(d, k);
        k++;
    }
    return s_full;
}

string full_new_base(string s, int d)
{
    int l = s.length();
    int ciph = stoi(s);
    int f = ciph, m;
    while(1)
    {
        m = f%d;
        f = f/d;
        if(f < d) 
    }
    return
}

int main()
{
    string full_old, frac_old, full_new, frac_new;
    int old_base, new_base;
    string num;
    cin >> num;
    for(int i = 0; i < num.length(); i++)
    {
        if (num[i] == '.')
        {
            for(int c = i+1; c < num.length(); c++) frac_old.resize(c-i, num[c]);
            break;
        }
        else full_old.resize(i+1, num[i]);
    }

    //cout << full_old << "\n";
    //cout << frac_old << "\n";
    cout << get_full_10(full_old, 16) << "\n";
    cout << get_frac_10(frac_old, 16) << "\n";
    return 0;
}