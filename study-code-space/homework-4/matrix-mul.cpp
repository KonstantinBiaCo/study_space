#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //Таблица А
	int an, am, bn, bm, cn, cm;
    cout << "Введите размерность таблицы A\n";
	cin >> an >> am;
	int *AN = new int(an);
	int *AM = new int(am);
	int A[*AN][*AM];
    cout << "Вводите таблицу A\n";
    for (int i = 0; i < an; i++)
    {
        for (int j = 0; j < am; j++) cin >> A[i][j];
    }
    cout << "--------------------\n";
    //Таблица В
    cout << "Введите размерность таблицы B\n";
    cin >> bn >> bm;
    int *BN = new int(bn);
	int *BM = new int(bm);
	double B[*BN][*BM];
    cout << "Вводите таблицу B\n";
    for (int i = 0; i < bn; i++)
    {
        for (int j = 0; j < bm; j++) cin >> B[i][j];
    }
    cout << "--------------------\n";
    //Таблица С
    cn = an;
    cm = bm;
    int *CN = new int(cn);
    int *CM = new int(cm);
    double C[*CN][*CM];
    cout << "Таблица С" << "\n";
    cout << "Размерность " << cn << "x" << cm << "\n";
    for(int i = 0; i < cn; i++)
    {
        for(int j = 0; j < cm; j++)
        {
            for(int k = 0; k < am; k++)C[i][j]+=A[i][k]*B[k][j];
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "--------------------\n";
    double cash[2][2] = {{C[0][0], C[0][0]}, {1, 1}};
    double comm[2][2] = {{C[0][1], C[0][1]}, {1, 1}};
    double sum = 0, cash_sum = 0, comm_sum = 0;
    for(int j = 0; j < cm; j++)
    {
        for(int i = 0; i < cn; i++)
        {
            switch(j)
            {
                case 0:
                cash_sum+=C[i][j];
                if (C[i][j] > cash[0][0])
                {
                    cash[0][0] = C[i][j];
                    cash[1][0] = i+1;
                }
                if (C[i][j] < cash[0][1])
                {   
                    cash[0][1] = C[i][j];
                    cash[1][1] = i+1;
                }
                break;
                case 1:
                comm_sum+=C[i][j];
                if (C[i][j] > comm[0][0])
                {
                    comm[0][0] = C[i][j];
                    comm[1][0] = i+1;
                }
                if (C[i][j] < comm[0][1])
                {   
                    comm[0][1] = C[i][j];
                    comm[1][1] = i+1;
                }
                break;
            }       
        }
    }
    sum = comm_sum + cash_sum;
    cout <<"Наибольшая выручка ("<<cash[0][0]<<") у продовца № "<<cash[1][0]<<"\n"; 
    cout <<"Наименьшая выручка ("<<cash[0][1]<<") у продовца № "<<cash[1][1]<<"\n";
    cout <<"Наибольшие коммиссионные ("<<comm[0][0]<<") у продовца № "<<cash[1][0]<<"\n";
    cout <<"Наименьшие коммиссионные ("<<comm[0][1]<<") у продовца № "<<comm[1][1] <<"\n";
    cout << "Общая выручка: " << cash_sum << "\n";
    cout << "Сумма коммиссионных: " << comm_sum << "\n";
    cout << "Всего прошло через руки продовцов: " << sum << "\n";
    return 0;
}