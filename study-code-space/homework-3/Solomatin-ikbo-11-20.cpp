#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
//Раздел 1. Задание 5
/*
int main()
{
	int D, S;
	cin >> S;
	cin >> D;
	cout << S/D;
	return 0;
}
*/
//Раздел 2. Задание 6
/*
int main()
{
	float x, y;
	cin >> x;
	cin >> y;
	if (((y <= 1)&&(x <= 1)&&(y >= 0)&&(x >= 0))||(x*x + y*y <= 1))
	{
		cout << "YES" << "\n";
	}
	else
	{
		cout << "NO" << "\n";
	}
	return 0;
}
*/
//Раздел 3. Задание 5
/*
int main()
{
	int k = 0, num = 1, sum = 0;
	while (num != 0)
	{
		cin >> num;
		if ((num % 11 == 0) && (num != 0)) 
		{
			k++;
			sum += num;
		}
	}
	cout << sum/k << "\n";
	return 0;
}
*/
//Раздел 4. Задание 4
/*
int sum_find()
{
	int num;
	cin >> num;
	if (num != 0)
	{	
		if (num % 8 == 0)
		{
			return sum_find() + num;
		}
		else return sum_find();
	}
}
int main()
{
	int num = 1, sum = 0;
	sum = sum_find();
	cout << sum << "\n";
	return 0;
}
*/
//Раздел 5. Задание 2
/*
int main()
{
	int big_three = 0, biggest = 0;
	cin >> nums;
	int A[100];
	for (int i = 0; i < nums; i++) cin >> A[i];
	for (int i = 0; i < nums; i++) 
	{
		if ((A[i] > big_three) && (A[i] % 3 == 0)) big_three = A[i];
		else if (A[i] > biggest) biggest = A[i];
	}
	if (big_three != 0) cout << big_three << "\n";
	else cout << biggest << "\n";
	return 0;
}
*/
//Раздел 6. Задание 1
/*
int main()
{
	int size, max = 0, count = 0;
	cin >> size;
	int *s = new int(size);
	int N[*s];
	for (int i = 0; i < *s; i++)
	{
		cin >> N[i];
		if (N[i] > max) max = N[i];
	}
	for (int i = 0; i < *s; i++)
	{
		if (N[i] == max) count+=1;
	}
	cout << max << " " << count << "\n";
}
*/
//Раздел 7. Задание 1
/*
int main()
{
	int n,m, sum;
	cin >> n >> m;
	int *N = new int(n);
	int *M = new int(m);
	int A[*N][*M];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (A[i][j] % 7 == 0) sum+= A[i][j];
		}
	}
	cout << sum << "\n";
	return 0;
}
*/
//Раздел 8. Задание 5
#include <fstream> 
#include <string>
int main()
{
	char buff[50];
	string s;
	int num, max = 0;
	ifstream fin("input.txt");
	ofstream fout("output.txt");
	while(true)
	{
		if (fin.eof()) break;
		fin.getline(buff, 50);	
	s = string(buff);
	num = atoi(s.c_str());
	if ((num > max) && (num % 11 == 0)) max = num;
	}
	fout << max;
	fout.close();
	return 0;
}
