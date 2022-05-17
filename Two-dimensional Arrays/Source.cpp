#include<iostream>

//Самостійне завдання 84A. Варіант 13.
using namespace std;
int main()
{
	srand(time(NULL));

	const int n = 4;
	int array[n][n];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j + i == n - 1)
			{
				array[i][j] = n - j;
			}	
			else
			{
				array[i][j] = 0;
			}	
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << " " << array[i][j];
		}
		cout << endl;
	}

}
