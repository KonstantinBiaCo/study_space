//��������� ����-11-20
//��������� txt. ����� ���������
#include <iostream>
#include <algorithm>
int pos(std::string s, std::string c, int n)
{
	int i, j; // �������� ��� ������
		
	for (i = 0; i <= s.length() - c.length(); i++) // ���� ���� ����������� ������
	{
		for (j = 0; s[i + j] == c[j]; j++); // ��������� ���������� �����������
		// ���� ����������� ��������� �� ����� ��������...
 		if (j - c.length() == 1 && i == s.length() - c.length() && !(n - 1)) return i;
		if (j == c.length())
		if (n - 1) n--; 
		else return i; //���������� ������ ���������
	}
	return -1; //��������� ���
}

int main()
{   
    std::string main_s = "aasdssssdfmmdsdsfdfmsmsas"; //�������� ������
    std::string sub_s = "df"; //��������� ��� ������
	int i, n = 0;
    
	for (i = 1; n != -1; i++)
	{
		n = pos(main_s, sub_s, i);

		if (n >= 0)
			std::cout << n << std::endl; //8 � 17
	}
}