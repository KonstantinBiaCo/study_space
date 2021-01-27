//Соломатин ИКБО-11-20
//Былая слава
#include <cstdlib>
#include <iostream>
using namespace std;
string p1 = "* * * * * *";
string p2 = " * * * * * ";
void lines(int num)
{
    for(int i = 0; i < num; i++) cout << "-";
    cout << "\n";
}
int main()
{
    for (int i = 0; i < 13; i++)
    {
        if (i < 9 && i%2 == 0) {cout << p1; lines(29);} 
        else if (i < 9 && i%2 != 0) {cout << p2; lines(29);}
        else lines(40);
    }
    return 0;
}
