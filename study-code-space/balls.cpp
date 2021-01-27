//Соломатин ИКБО-11-20
//Шарики
#include <iostream>
#include <vector>
using namespace std;
//Рекурсивная функция нахождения факториала числа N 
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

//Количество сочетаний из n по k.
unsigned C(unsigned n, unsigned k) {
    return factorial(n) / factorial(k) / factorial(n - k);
}
 
//Вычисление количества перестановок с хотя бы одним совпадением
//по рекурентной формуле с переходом от задачи N к задаче N - 1.
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
    cin >> n; //Два различных ввода: 4 и 10 (первое для проверки)

    unsigned *sc = new unsigned[n + 1]; //Количество с хотя бы одним совподением 
    unsigned *uc = new unsigned[n + 1]; //количество "несовподающих" 
 
    recFormula(sc, uc, n); 
    cout << "Количество ситуаций с совпадением: " << sc[n] << endl; //Ответ: 15 и 2293839
    return 0;
}