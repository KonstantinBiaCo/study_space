#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
void error()
{
    cout << "error\nuncorrect input";
}
float area_circle(float R)
{
    if (R < 0)
    {
        error();
        return 0;
    }
    else return R*R*M_PI;
}
float area_triangle(float base, float h, float a, float b, float A, bool option = false)
{
    if (a < 0 | b < 0 | h < 0 | A < 0 | base < 0 | (option != 0 && option != 1))
    {
        error();
        return 0;
    }
    else if (option) return (sin((A * M_PI) / 180) * a * b)/2;
    else return (base * h)/2;
}
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
    float a, b, h, A, R, base;
    cout << "rectangle/circle/triangle\n[1/2/3] ";
    cin >> choice;
    switch(choice)
    {
        case 1:
        cout << "enter \'a\' and \'b\'\n";
        cin >> a >> b;
        cout << area_rectangle(a,b) << "\n";    
        break;
            
        case 2:
        cout << "enter \'R\'\n";
        cin >> R;
        cout << area_circle(R) << "\n";    
        break;
            
        case 3:
        cout << "select an option: base * h/2 or (ab*sinA)/2\n[0/1] ";
        cin >> option;
        switch(option)
        {
            case 1:
            cout << "enter \'a\', \'b\', \'A\'\n";
            cin >> a >> b >> A;
            cout << area_triangle(0, 0, a, b, A, option) << "\n";    
            break;
                
            case 0:
            cout << "enter \'base\', \'h\'\n";
            cin >> base >> h;
            cout << area_triangle(base, h, 0, 0, 0) << "\n";
            break;
                
            default:
            cout << "quiting...\n";
            break
        }
        break;
        
        default:
        cout << "quiting...\n";    
        break;
    }
}
int main()
{
    quiz();
    return 0;
}
