//��������� ����-11-20
//������
#include <iostream>
#include <vector>
using namespace std;
//����������� ������� ���������� ���������� ����� N 
unsigned factorial(unsigned n) {
    static vector<unsigned> saved;
    if (saved.size() < n + 1) {
        saved.resize(n + 1, 0);
    }
 
    if (saved[n] == 0) {
        saved[n] = ((n > 1) ? n * factorial(n - 1) : 1);
    }
    return saved[n];
}

//���������� ��������� �� n �� k.
unsigned C(unsigned n, unsigned k) {
    return factorial(n) / factorial(k) / factorial(n - k);
}
 
//���������� ���������� ������������ � ���� �� ����� �����������
//�� ����������� ������� � ��������� �� ������ N � ������ N - 1.
void recFormula(unsigned *sc, unsigned *uc, unsigned n) {
    if (n == 0) {
        sc[n] = 0;
        uc[n] = 1;
    }
    else {
        recFormula(sc, uc, n - 1);

        sc[n] = 0;
        for (unsigned i = 1; i <= n; i++) {
            sc[n] += C(n, i) * uc[n - i];
        }
 
        uc[n] = factorial(n) - sc[n];
    }
}

int main() {
    unsigned n;
    cin >> n; //��� ��������� �����: 4 � 10 (������ ��� ��������)

    unsigned *sc = new unsigned[n + 1]; //���������� � ���� �� ����� ����������� 
    unsigned *uc = new unsigned[n + 1]; //���������� "�������������" 
 
    recFormula(sc, uc, n); 
    cout << "���������� �������� � �����������: " << sc[n] << endl; //�����: 15 � 2293839
    return 0;
}