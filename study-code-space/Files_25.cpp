//��������� ����-11-20
//�����. 25-�� �����
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
//������� �������� �� ���������� ������� �.� 
//���� �� ������� �� �����������
bool check(string l)
{
    //�������� �� ������ ������
    if(l.length() == 0) return false;
    for(int i = 1; i < l.length(); i++) 
    {
        //������� �������
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
    int n; //����� ����� �����
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
        ans += ((check(line)) ? 1:0); //�������� ������
    }
    cout << ans << endl; //����� �� ������ �����, ��������. �������
    return 0;
}