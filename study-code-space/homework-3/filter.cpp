#include <iostream>
#include <fstream> 
#include <cstdlib>
#include <string>
using namespace std;
int main()
{
	//setlocale(LC_ALL, "Russian");
    char nums[11] = {'0','1','2','3','4','5','6','7','8','9',' '};
    string s;
    int len;
    ifstream fin("input.txt");
	while(!fin.eof())
	{
		getline(fin,s);
		len = s.length();
		for (int ch = 0; ch < len; ch++)
		{
			for (int i = 0; i < 11; i++) if (nums[i] == s[ch]) cout << s[ch];	
		}
		cout << '\n';
	}
	return 0;
}
