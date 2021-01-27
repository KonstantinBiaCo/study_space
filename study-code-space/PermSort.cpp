#include <iostream>
class PermSortAlgorithm{
	//Отсортировали подмассив?
    bool issorted(int a[], int i){
		for (int j = a.length-1; j > 0; j--) {
			//Сравниваем и если что - меняем
			compex(j, j - 1); 
			if(a[j] < a[j - 1]) {
				return false;
			}
		}
		return true;
    }
	//Рекурсивный PermSort
    bool sort(int a[], int i){
		int j;
		// Проверка на упорядоченность подмассива
		if (issorted(a, i)) {
			return true;
        }
		// Подмассив не отсортирован. 
		// Поэтому перебираем перестановки элементов.		
		for(j = i+1; j < a.length; j++) {			
			compex(i, j); 
			//Попробуем-ка переставить
			int T = a[i];
			a[i] = a[j];
			a[j] = T;
			//Рекурсивно призываем новую перестановку
			if(sort(a, i + 1)) {
				return true;
			}
			//Возврат к исходному состоянию
			T = a[i];
			a[i] = a[j];
			a[j] = T;
		}
		return false;
    }
	//Сортируем исходный массив с помощью алгоритма PermSort.
	void sort(int a[]){
		sort(a, 0);
    }
}
int main()
    {
        int mas = {2, 0, 1, 4, 3, 5};

        return 0;
    }