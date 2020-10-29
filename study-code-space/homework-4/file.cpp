#include <cstdlib>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    double sum;
    ofstream fout;
    fout.open("file.txt");
    string input;
    for(int i = 0; i < 10; i++)
    {
        cin >> input;
        fout << input << "\n";
    } 
    fout.close();

    ifstream fin;
    fin.open("file.txt");
    while(!fin.eof())
    {
        getline(fin, input);
        sum += atof(input.c_str());
    }
    
    cout << sum << "\n";
    
    return 0;
}