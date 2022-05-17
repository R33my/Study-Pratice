#include<iostream>

//Самостійне завдання 154A. Варіант 13.
long long factorial(int i);
using namespace std;
int main()
{
	int m, n, k = 0;
	long long sum = 0;
	cout << "Enter the initial value: \n";
	cin >> m;
	cout << "Enter the end value: \n";
	cin >> n;

	for (int i = m; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			sum += factorial(i);
		}
	}

	cout << "Sum of pair factorials: " << sum;
}

long long factorial(int i)
{
	if (i < 0)
	{
		return 0;
	}
	else if (i == 0)
	{
		return 1;
	}
	else
	{
		return i * factorial(i - 1);
	}
}