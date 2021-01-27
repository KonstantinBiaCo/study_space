//Соломатин ИКБО-11-20
//Генератор случайных чисел
#include <iostream>
#include <ctime>
using namespace std;
int ran(int m, int i, int c, int s )
{
    s = (m * s + i);
    return s % c;
}
 
int main()
{
    int m, c, in, s;
    time_t seconds = time(NULL);
    tm* timeinfo = localtime(&seconds);
    char str[2]; strftime(str, 80, "%S", timeinfo);
    s = atoi(str);
    cin >> m >> in >> c;
    for (int i = 1; i <= in; i++)
    {
        s = ran(m, i, c, s);
        cout << s << "\n";
	}
}
