//Соломатин ИКБО-11-20
//Обработка txt. Поиск подстроки
#include <iostream>
#include <algorithm>
int pos(std::string s, std::string c, int n)
{
	int i, j; // Счетчики для циклов
		
	for (i = 0; i <= s.length() - c.length(); i++) // пока есть возможность поиска
	{
		for (j = 0; s[i + j] == c[j]; j++); // проверяем совпадение посимвольно
		// если посимвольно совпадает по длине искомого...
 		if (j - c.length() == 1 && i == s.length() - c.length() && !(n - 1)) return i;
		if (j == c.length())
		if (n - 1) n--; 
		else return i; //возвращаем индекс подстроки
	}
	return -1; //подстроки нет
}

int main()
{   
    std::string main_s = "aasdssssdfmmdsdsfdfmsmsas"; //основная строка
    std::string sub_s = "df"; //подстрока для поиска
	int i, n = 0;
    
	for (i = 1; n != -1; i++)
	{
		n = pos(main_s, sub_s, i);

		if (n >= 0)
			std::cout << n << std::endl; //8 и 17
	}
}