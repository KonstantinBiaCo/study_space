//Соломатин ИКБО-11-20
//Фильтр
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	setlocale(LC_ALL, "RUS");
	fstream F;
	int num;
	F.open("input.txt"); //подключаем файл
	while (!F.eof()){
        //записываем строку в переменную, как число
		if (F >> num) cout << num << " "; //и выводим
		else{
			F.clear(); //сбрасываем состояние ошибки, которое может возникнуть, если имеем не число
			F.ignore(1, ' '); //игнорируем символы
		}	
	}
	cout << "\n";
	return 0;
}
