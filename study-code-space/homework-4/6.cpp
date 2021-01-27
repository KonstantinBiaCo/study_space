//Соломатин ИКБО-11-20
//Автоматический распознаватель
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
int conv(char num)
{
    switch(num)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
    return 0;
}

int main()
{
    string s;
    int counter, last, error = 0, sum = 0;
    cin >> s;
    for(int i = 0; i < s.length(); i++)
    {
        if(conv(s[i]) >= conv(s[i+1])) 
        {
            if (last == conv(s[i])) counter++;
            else 
            {
                last = conv(s[i]);
                counter = 1;
            }
            if (counter == 4)
            {
            cout << "error\n";
            return 0;
            break;
            } 
            sum +=conv(s[i]);
        }
        else 
        {
            sum-=conv(s[i]);
        }
    }
    cout << sum << "\n";
    return 0;
}
