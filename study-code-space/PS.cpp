#include <algorithm>
#include <iostream>
#include <vector>
template<typename ForwardIterator>
 void permutation_sort(ForwardIterator begin, ForwardIterator end)
{
  while (std::next_permutation(begin, end)){}
}
int main()
{
    std::vector <int> a {2, 1, 3, 4, 0, 5};
    permutation_sort(a.begin(), a.end());
    for(int i = 0; i < 6; i++) std::cout << a[i] << "\n";
    return 0;
}