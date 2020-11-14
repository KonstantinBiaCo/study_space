#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;
int in_mass(int *mas, int n, int num)
{
    for (int i = 0; i < n; i++) if(mas[i] == num) return 0;
    return -1;
}
int main()
{
    int nums;
    cin >> nums;
    int *n = new int(nums);
    int N[*n];
    int row_con = 0;
    int row_con_biggest = 0;
    int curr_left = 1;
    int curr_right = 54;
    for (int i = 0; i < nums; i++)
    {
        cin >> N[i];
    }
    for (int i = 0; i < 9; i++)
    {
        if((in_mass(N, nums, curr_left+4*i) == -1) || 
        (in_mass(N, nums, curr_left+1+4*i) == -1) || 
        (in_mass(N, nums, curr_left+2+4*i) == -1) ||
        (in_mass(N, nums, curr_left+3+4*i) == -1) || 
        (in_mass(N, nums, curr_right-2*i) == -1) ||
        (in_mass(N, nums, curr_right-1-2*i) == -1)) row_con = 0;
        else 
        {
            row_con+=1;
            row_con_biggest = row_con;
        }
    }
    cout << row_con_biggest << "\n";
    return 0;
}