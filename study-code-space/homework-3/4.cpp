//��������� ����-11-20
//������
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	setlocale(LC_ALL, "RUS");
	fstream F;
	int num;
	F.open("input.txt"); //���������� ����
	while (!F.eof()){
        //���������� ������ � ����������, ��� �����
		if (F >> num) cout << num << " "; //� �������
		else{
			F.clear(); //���������� ��������� ������, ������� ����� ����������, ���� ����� �� �����
			F.ignore(1, ' '); //���������� �������
		}	
	}
	cout << "\n";
	return 0;
}
