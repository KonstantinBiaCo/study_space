//��������� ����-11-20
//���������
#include <iostream>
int main()
{
    int n; 
    std::cin >> n; //�������� ������ ������������� �������
    int *a = new int[n](); //�������� ������ ��� �. ������� ����������� ������ + �������������� ��� ������
    for (int i = 0; i < n; i++) a[i] = i;
    a[1] = 0;
    int j = 0;
    for(int m = 2; m < n; ++m)
    {
        if(a[m]!=0)
        {
            j = m*2;
            while(j<n)
            {
                a[j] = 0;
                j+=m;
            }
        }
    }
    for (int i = 0; i<n; i++) if(a[i]!=0) std::cout << a[i] << " ";
    std::cout << "\n";
    delete[] a; //������� ������
    return 0;
}