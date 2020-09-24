#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
//Задача "Конус"
/*
int main()
{
    float h, R, r, l, V, S;
    cout << "Введите высоту h: ";
    cin >> h;
    cout << "Введите радиус R: ";
    cin >> R;
    cout << "Введите радиус r: ";
    cin >> r;
    cout << "Введите длину наклонной l: ";
    cin >> l;
    V = (M_PI * h * (R*R + R*r + r*r))/3;
    S = M_PI * (R*R + (R + r) * l + r*r);
    cout << "V = " << V << endl;
    cout << "S = " << S << endl;
    return 0;
}
*/
//Задача "Развлетвение"
/*
int main()
{    
    float x, a, w;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите a: ";
    cin >> a;
    if (abs(x) < 1)
    {
        w = a * log(abs(x));
        cout << w << endl;
    }
    else if (abs(x) >= 1)
    {
        float diff = a - x*x;
        if (diff >= 0) 
        {
            w = sqrt(diff);
            cout << "w = " << w << endl;
        }
        else cout << "Подкорневое выражение a - x^2 отрицательно! \nНевозможно извлечь корень!" << endl;
    }
    return 0;
}
*/
//Задача "Функция"
/*
int main()
{
    float z, x, y, b;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;
    cout << "Введите b: ";
    cin >> b;
    if ((b - y > 0) & (b - y != 1) & (b - x >=0))
    {
        z = log(b - y) * sqrt(b - x);
        cout << "z = " << z << endl;
    }
    else cout << "Введены некоретные данные!" << endl;
    return 0;
}
*/
//Задача "Порядок"
/*
int main()
{
    int N;
    cout << "Введите число N: ";
    cin >> N;
    for (int i = 0; i < 10; i++) cout << N++ << endl; 
    return 0;

}
*/
//Задача "Табуляция"
int main()
{
    float y, x = -4;
    string lines = "\n---------------\n";
    for (int i = 0; i < 17; i++)
    {
        cout << "x = " << x << endl;
        if (x == 1) cout << "Деление на ноль" << lines;
        else 
        {
            y = (x*x - 2*x + 2)/(x - 1);
            cout << "y = " << y << lines;
        }
        x += 0.5;
    }
    return 0;
}