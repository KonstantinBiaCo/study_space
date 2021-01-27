#include <iostream>
bool issorted(int *a, int size, int i){
		for (int j = size - i; j > 0; j--) {
			//Сравниваем и если что - меняем
			//compex(j, j - 1);
			if(a[j] < a[j - 1]) {
				return false;
			}
		}
		return true;
    }
int* sort(int *a, int size, int i){
        for (int j = 0; j < size; j++)
        {
            std::cout << a[j] << " ";
        }
		int j;
		// Проверка на упорядоченность подмассива
		if (issorted(a, size, i)) {
			return a;
        }
		// Подмассив не отсортирован. 
		// Поэтому перебираем перестановки элементов.		
		for(j = i+1; j < size; j++) {			 
			//Попробуем-ка переставить
			int T = a[i];
			a[i] = a[j];
			a[j] = T;
			//Рекурсивно призываем новую перестановку
            if (!issorted(a, size, i+1)) {
			int* a = sort(a, size, i + 1);
            }
			//Возврат к исходному состоянию
			T = a[i];
			a[i] = a[j];
			a[j] = T;
		}
        for (int i = 0; i < size; i++)
        {
            std::cout << a[i] << " ";
        }
		return a;
    }
int main()
{
    int mas[6] = {5, 3, 4, 2, 0, 1};
    int* sorted_mas = sort(mas, 6, 0);
    //for (int i = 0; i < 6; i++)
    //{
    //std::cout << sorted_mas[i] << " ";
    //}
    //std::cout << sorted_mas << "\n";
    return 0;
}