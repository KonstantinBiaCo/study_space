#include <iostream>
#include <cmath> 
#include <cstdlib>
#include <string>
using namespace std;
int main()
{
	//setlocale(LC_ALL, "Russian");
    string buff = "asdasdlcvMapwmxpopwVdmdxicnDoq";
    int l = buff.length();
    int el;
	for (int i = 1; i < l; i++)
	{
		int j = i;
		while (buff[j] < buff[j - 1])
		{
			el = buff[j - 1];
			buff[j - 1] = buff[j];
			buff[j] = el;
			if (j!=1) j--;
		}
	}
	cout << buff;
    return 0;
}
