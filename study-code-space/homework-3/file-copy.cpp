#include <iostream>
#include <fstream> 
#include <cstdlib>
using namespace std;
int main()
{
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);
	char buff[255];
    ifstream fin("input.txt");
	while(true)
	{
		if (fin.eof()) break;
		fin.getline(buff, 255);	
	    cout << buff << endl;
	}
	return 0;
}