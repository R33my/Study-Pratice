#include<iostream>
#include <algorithm>

using namespace std;
int main()
{
	int arrA[5] = { 9, 7, 3, 2, 4 };
	int arrB[10] = { 20, 18, 19, 15, 16, 14, 11, 13, 12, 17 };
	int arrC[15];

	//Використовуємо фунцкію сортування sort для першого масиву
	sort(arrA, arrA + 5);

	cout << "Array A:\n";
	for (int i = 0; i < 5; i++)
	{
		cout << arrA[i] << " \n";
	}

	//Використовуємо фунцкію сортування sort для другого масиву
	sort(arrB, arrB + 10);

	cout << "Array B:\n";
	for (int i = 0; i < 10; i++)
	{
		cout << arrB[i] << " \n";
	}

	int i = 0, j = 0, k = 0;
	while (i < 5 && j < 10)
	{
		if (arrA[i] < arrB[j])
		{
			arrC[k++] = arrA[i];
			i++;
		}
		else
		{
			arrC[k++] = arrB[j];
			j++;
		}
	}

	while (i < 5)
	{
		arrC[k++] = arrA[i];
		i++;
	}

	while (j < 10)
	{
		arrC[k++] = arrB[j];
		j++;
	}

	//Оскільки перші два масива вже впорядковані, третій впорядкован автоматично.
	cout << "\nArray C:\n";
	for (int i = 0; i < 15; i++)
	{
		cout << arrC[i] << " \n";
	}

}

/*
//Закидуємо вже впорядковані елементи перших двух масивів у третій масив
	int k = 0;
	while (k < 15)
	{
		for (int i = 0; i < 5; i++)
		{
			arrC[k++] = arrA[i];
		}

		for (int j = 0; j < 10; j++)
		{
			arrC[k++] = arrB[j];
		}
	}


*/