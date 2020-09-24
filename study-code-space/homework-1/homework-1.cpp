#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    //setlocale(LC_ALL,"Russian");
    string name;
    cin >> name;
    cout << name << endl;
    return 0;
}
/*
int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b, sum, diff, prod, div;
    cout << "Введите два числа" << endl;
    cin >> a;
    cin >> b;
    diff = a - b;
    sum = a + b;
    div = a / b;
    prod = a * b;
    cout << "Сумма " << sum << endl;
    cout << "Разница " << diff << endl;
    cout << "Произведение " << prod << endl;
    if (b == 0){
        cout << "Деление на ноль невозможно" << endl;
    }
    else
    {
        cout << "Частное от деления " << div << endl;
    }
    return 0;
}
*/
/*
int main()
{
    setlocale(LC_ALL, "Russian");
    float b, c, x;
    cout << "Введите b и c" << endl;
    cin >> b;
    cin >> c;
    if (b == 0){
        cout << "Деление на ноль невозможно" << endl;
    }
    else
    {
        x = (-1.0 * c) / b;
        cout << "Ответ " << x << endl;
    }
    return 0;
}
*/
//кв. уравнение
/*
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    float D, a, b, c, x1, x2;
    cout << "Введите a, b, c" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    D = b*b - 4 * a * c;
    if (a == 0 && b != 0)
    {
        cout << "Деление на ноль не возможно, ед. корень " << (-1 * c)/b <<endl;
    }
    else if (D > 0 )
    {
        x1 = (-1 * b + sqrt(D)) / (2 * a);
        x2 = (-1 * b - sqrt(D)) / (2 * a);
        cout << "Корень уравнения 1 " << x1 << endl;
        cout << "Корень уравнения 2 " << x2 << endl;
    }
    else if (D == 0)
    {
        x1 = (-1 * b) / (2 * a);
        cout << "Корень уравнения " << x1 << endl;
    }
    else
    {
        cout << "Нет корней" << endl;
    }
    return 0;
}
*/
/*
int main()
{
    bool day_t, lamp, blind;
    setlocale(LC_ALL, "Russian");
    cout << "На улице день? 1/0" << endl;
    cin >> day_t;
    cout << "Шторы не зановешанны? 1/0" << endl;
    cin >> lamp;
    cout << "Лампа включена? 1/0" << endl;
    cin >> blind;
    if ((day_t & blind) | lamp)
    {
        cout << "В комнате светло" << endl;
    }
    else
    {
        cout << "В комнате темно" << endl;
    }
    return 0;
}
*/
