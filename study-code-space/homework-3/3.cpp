//Соломатин ИКБО-11-20
//Копирование файла
#include <iostream>
#include <fstream> 
#include <cstdlib>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
	string buff;
    ifstream fin("input.txt");
	while(!fin.eof())
	{
		getline(fin, buff);	
	    cout << buff << endl;
	}
	return 0;
}
