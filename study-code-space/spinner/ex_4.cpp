#include <iostream>
//проверка на наличее значения в массиве
int in_arr(int *arr, int num, int s)
{
    for (int i = 0; i < s; i++) if(arr[i] == num) return 0;
    return -1;
}
int main()
{
    
    int s;
    std::cin >> s;
    //создаём массив со свободными номерами
    int *N = new int[s]();
    //заполняем его
    for (int i = 0; i < s; i++)
    {
        std::cin >> N[i];
    }
    //переменные-флажки для подсчёта кол-ва куппе подряд
    int row_con = 0; int row_con_biggest = 0;
    //идём по вогону как по левой, так и по правой стороне 
    //начальные номера
    int curr_left = 1; int curr_right = 54;
    //имеем вот такую карту, с помощью которой можно проверить принадлежность значений N к определённому купе
    //итератором выбираем купе
    // |curr_left + 4*i, curr_left + 1 + 4*i    |
    // |curr_left + 2 + 4*i, curr_left + 3 + 4*i|
    //
    // |curr_right - 2*i, curr_right - 1 - 2*i  |
    
    for (int i = 0; i < 9; i++)
    {
        //если где-то не совподает, то обнуляем подсчёт последовательности
        if((in_arr(N, curr_left+4*i, s) == -1) || 
        (in_arr(N, curr_left+1+4*i, s) == -1) || 
        (in_arr(N, curr_left+2+4*i, s) == -1) ||
        (in_arr(N, curr_left+3+4*i, s) == -1) || 
        (in_arr(N, curr_right-2*i, s) == -1) ||
        (in_arr(N, curr_right-1-2*i, s) == -1)) row_con = 0;
        //если купе заполнено, засчитываем его 
        else 
        {
            row_con+=1;
            //если количество куппе подряд больше, чем было до этого, обновляем
            if (row_con_biggest < row_con) row_con_biggest = row_con;
        }
    }
    //выводим наиб. кол-во купе подряд
    std::cout << row_con_biggest << "\n";
    delete[] N; 
    return 0;
}