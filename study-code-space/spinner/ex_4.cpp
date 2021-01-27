#include <iostream>
//�������� �� ������� �������� � �������
int in_arr(int *arr, int num, int s)
{
    for (int i = 0; i < s; i++) if(arr[i] == num) return 0;
    return -1;
}
int main()
{
    
    int s;
    std::cin >> s;
    //������ ������ �� ���������� ��������
    int *N = new int[s]();
    //��������� ���
    for (int i = 0; i < s; i++)
    {
        std::cin >> N[i];
    }
    //����������-������ ��� �������� ���-�� ����� ������
    int row_con = 0; int row_con_biggest = 0;
    //��� �� ������ ��� �� �����, ��� � �� ������ ������� 
    //��������� ������
    int curr_left = 1; int curr_right = 54;
    //����� ��� ����� �����, � ������� ������� ����� ��������� �������������� �������� N � ������������ ����
    //���������� �������� ����
    // |curr_left + 4*i, curr_left + 1 + 4*i    |
    // |curr_left + 2 + 4*i, curr_left + 3 + 4*i|
    //
    // |curr_right - 2*i, curr_right - 1 - 2*i  |
    
    for (int i = 0; i < 9; i++)
    {
        //���� ���-�� �� ���������, �� �������� ������� ������������������
        if((in_arr(N, curr_left+4*i, s) == -1) || 
        (in_arr(N, curr_left+1+4*i, s) == -1) || 
        (in_arr(N, curr_left+2+4*i, s) == -1) ||
        (in_arr(N, curr_left+3+4*i, s) == -1) || 
        (in_arr(N, curr_right-2*i, s) == -1) ||
        (in_arr(N, curr_right-1-2*i, s) == -1)) row_con = 0;
        //���� ���� ���������, ����������� ��� 
        else 
        {
            row_con+=1;
            //���� ���������� ����� ������ ������, ��� ���� �� �����, ���������
            if (row_con_biggest < row_con) row_con_biggest = row_con;
        }
    }
    //������� ����. ���-�� ���� ������
    std::cout << row_con_biggest << "\n";
    delete[] N; 
    return 0;
}