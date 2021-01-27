//Соломатин ИКБО-11-20
//Эратосфен
#include <iostream>
int main()
{
    int n; 
    std::cin >> n; //получаем размер динамического массива
    int *a = new int[n](); //выделяем память для д. массива необходимой длинны + инициализируем его нулями
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
    delete[] a; //очищаем память
    return 0;
}