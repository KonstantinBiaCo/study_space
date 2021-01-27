//Соломатин ИКБО-11-20
//Системы счисления
#include <cstdlib>
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#define DIG "0123456789ABCDEFGHIGKLMNOPQRSTUVWXYZ"
using namespace std;
//переводим число в десятичную
unsigned long long int get_10(string num, int d, string ref = DIG)
{
    //d - старое основание
    int n, k = 0; //n - номер-коэф. из DIG; k - степень
    //переменнная для дес. числа
    unsigned long long int s_full = 0;
    //реверс строки для удобного прохождения по ней
    reverse(num.begin(), num.end());
    for(int i = 0; i < num.length(); i++)
    {
    	n = ref.find(num[i], 0);
        //проверка на правильность введённого основания
    	if (n >= d) return -1;
        s_full+= n * pow(d, k);
        k++;
    }
    return s_full;
}
//переход к новому основанию
//(деление и остаток)
string new_b(int num, int b)
{

    string new_s;
    int m, k = 0;
    while(1)
    {
        m = num%b;
        new_s += DIG[m]; //прибавляем остатки от деления
        num = num/b;
        if(num < b) 
        //если число полсе деления меньше делителя,
        //то прибавляем само число
        {
           new_s+=DIG[num];
           break; 
        }
    }
    //такую строку необходимо "развернуть"
    reverse(new_s.begin(), new_s.end()); 
    return new_s;
}
int main()
{
	setlocale(LC_ALL, "Russian");
    //старая, новая строка
    string old_s, new_s;
    int old_base, new_base, sign = 0;
    unsigned long long full_10; //десятичный вид
    string num;
    cout << "Введите число" << "\n"; //ACD12
    cin >> num;
    cout << "Введите первоначальное основание" << "\n"; //16
    cin >> old_base;
    cout << "Введите новое основание" << "\n"; //8
    cin >> new_base;
    if(num[0] == '-') //удаляем знак, но запоминаем, что он был
	{
		sign=1;
		num = num.erase(0,1);
	}
    //из 10 в 10?
    if (old_base == new_base) cout << num << "\n";
    else
    {
    	
        full_10 = get_10(num, old_base);
        if (full_10 == -1) //не совподает основание числа и введённое
        {
        	cout << "Некоректный ввод" << "\n";
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
