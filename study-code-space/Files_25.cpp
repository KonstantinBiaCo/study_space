//Соломатин ИКБО-11-20
//Файлы. 25-ый номер
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
//функция проверки на правельный порядок т.е 
//идут ли символы по возрастанию
bool check(string l)
{
    //проверка на пустую строку
    if(l.length() == 0) return false;
    for(int i = 1; i < l.length(); i++) 
    {
        //удаляем пробелы
        if(l[i] == ' ') 
        {
            l.erase(i,1);
            i--;
        } 
        if (l[i] < l[i-1]) return false;
    }
    return true;
}
int main()
{
    int n; //общее число строк
    int ans = 0;
    ofstream file;
    file.open("file.txt");
    string line;
    getline(cin, line); 
    n = atoi(line.c_str());
    for(int i = 0; i < n; i++)
    {
        getline(cin, line);
        file << line << "\n"; 
        ans += ((check(line)) ? 1:0); //проверка строки
    }
    cout << ans << endl; //вывод не пустых строк, удовлетв. условию
    return 0;
}