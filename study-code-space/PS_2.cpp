//Соломатин ИКБО-11-20
//PermSort. Второй вариант реализации
#include <algorithm>
#include <iostream>
#include <vector>
bool is_sorted(std::vector<int> a, int n)
{
    for(int i = 1; i < n; i++) if(a[i] < a[i-1]) return false; 
    return true;
}
std::vector<int> next_permutation(std::vector <int> a, int n)
{
    for (int i = n - 2; i >= 0; i--) { 
            if (a[i] < a[i+1]){
                int min = i + 1;  
                for (int j = i + 2; j < n; j++) {
                    if (a[j] > a[i] && a[j] < a[min]) min = j;
                }
                std::swap(a[i], a[min]);
                std::reverse(&a[i+1], &a[n]);
                break;
            }
            if (i == 0) std::reverse(&a[i], &a[n]);
        }
    return a;
}
int main()
{
    std::vector<int> a {2, 1, 9, 4 ,3, 0, 8, 5, 7, 6};
    while(!is_sorted(a, 10)) a = next_permutation(a,10);
    for(int i = 0; i < 10; i++) std::cout << a[i] << " ";
    std::cout << "\n"; 
    return 0;
}