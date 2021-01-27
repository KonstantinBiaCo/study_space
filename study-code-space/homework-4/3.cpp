//Соломатин ИКБО-11-20
//Геометрические фигуры
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
//
void error()
{
    cout << "ошибка\nнекорректный ввод";
}
//площадь круга
float area_circle(float R)
{
    if (R < 0)
    {
        error();
        return 0;
    }
    else return R*R*M_PI;
}
//площадь триугольника (два варианта)
float area_triangle(float base, float h, float a, float b, float A, bool option = false)
{
    //проверка на отрицательные значения и на некорректный ввод
    if (a < 0 | b < 0 | h < 0 | A < 0 | base < 0 | (option != 0 && option != 1))
    {
        error();
        return 0;
    }
    //вариант первый (absinA/2)
    else if (option) return (sin((A * M_PI) / 180) * a * b)/2;
    //вариант второй (ah/2)
    else return (base * h)/2;
}
//площадь прямоугольника
float area_rectangle(float a, float b)
{
    if (a < 0 | b < 0)
    {
        error();
        return 0;
    }
    else return a*b;
}
void quiz()
{
    int choice, option;
    //стороны (a,b), высота, угол (в градусах), радиус окр.
    float a, b, h, A, R;
    //выбор соответсвующим числовым значением
    cout << "прямоугольник / окружность / триугольник \n[1/2/3] ";
    cin >> choice;
    switch(choice)
    {
        //прямоугольник
        case 1:
        cout << "введите \'a\' and \'b\'\n";
        cin >> a >> b;
        cout << area_rectangle(a,b) << "\n";    
        break;
        //окружность
        case 2:
        cout << "введите \'R\'\n";
        cin >> R;
        cout << area_circle(R) << "\n";    
        break;
        //триугольник
        case 3:
        cout << "ah/2 или (absinA)/2?\n[0/1] ";
        cin >> option;
        switch(option)
        {
            //считаем через угол
            case 1:
            cout << "введите \'a\', \'b\', \'A\'\n";
            cin >> a >> b >> A;
            cout << area_triangle(0, 0, a, b, A, option) << "\n";    
            break;
            //считаем через основание и высоту
            case 0:
            cout << "введите \'a\', \'h\'\n";
            cin >> a >> h;
            cout << area_triangle(a, h, 0, 0, 0) << "\n";
            break;
                
            default:
            cout << "завершение...\n";
            break;
        }
        break;
        
        default:
        cout << "завершение...\n";    
        break;
    }
}
int main()
{
    quiz();
    return 0;
}
