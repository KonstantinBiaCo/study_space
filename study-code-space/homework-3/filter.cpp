#include <iostream>
#include <fstream> 
#include <cstdlib>
using namespace std;
int main()
{
    
    char nums[11] = {'0','1','2','3','4','5','6','7','8','9',' '};
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);
    char new_string[255];
    char buff[255];
    ifstream fin("input.txt");
	while(true)
	{
		if (fin.eof()) break;
		fin.getline(buff, 255);
        for(int i = 0; i < 255; i++)
        {
            for(int j = 0; j < 11; j++)
            {
                if (buff[i] == nums[j]) 
                {
                    new_string[i] = nums[j];
                }
            }
            if (buff[i] == '\n') continue;
        }
	    cout << new_string << endl;
        for(int i = 0; i < 255; i++)new_string[i] = '\0';  
	}
	return 0;
}