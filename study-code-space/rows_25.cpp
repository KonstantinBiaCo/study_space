//Соломатин ИКБО-11-20
//Ряды. 25
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#define SYM "01234"
using namespace std;
//переводим в двоичнуюю систему
string to_two(string num, long int n = 0, string new_s="", int m = 0, int k = 0, string ref = SYM)
{
    reverse(num.begin(), num.end()); //строку разворачиваем
    //переводим в десятичную
    for(int i = 0; i < num.length(); i++) n+= ref.find(num[i], 0) * pow(5, i);
    //переводим в двоичную, формируя новую строку new_s
    while(1)
    {
        m = n%2;
        new_s += SYM[m]; //прибавляем остатки от деления
        n = n/2;
        if(n < 2) 
        //если число после деления меньше делителя,
        //то прибавляем само число
        {
           new_s+=SYM[n];
           break; 
        }
    }
    //её нужно "развернуть"
    reverse(new_s.begin(), new_s.end());
    return new_s;
}
int main()
{
    int n;
    cin >> n;
    string *F = new string[n](); //дин. массив с знач. в пятеричной системе (инициализирован нулями)
    string *T = new string[n](); //дин. массив с знач. в двоичной системе (инициализирован нулями)
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