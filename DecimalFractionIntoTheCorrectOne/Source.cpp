#include <iostream>
#include <sstream>
#include <math.h>

//Практичне заняття 9. Завдання 11.
using namespace std;
int NOK(int, int);
int main()
{
	stringstream ss, first, second;

	char cDec[100];
	string countUp, countAfter, numerator, denominator, n, strDec;

	int i = 0, j = 0, count = 0, dec = 0;
	int firstValue, secondValue, div;

	cout << "Enter the decimal fraction value: ";
	cin >> cDec;

	//Counting numbers up to the dot
	do
	{
		if (cDec[0] != '0')
		{
			countUp += cDec[i];
		}
		i++;
	} while (cDec[i] != '.');

	i++;

	//Counting numbers after the dot
	do
	{
		countAfter += cDec[i];
		i++;
		count++;
	} while (cDec[i] != '\0');

	n = countUp + countAfter;
	secondValue = pow(10, count);

	ss << n;
	ss >> firstValue;

	div = NOK(firstValue, secondValue);

	firstValue /= div;
	secondValue /= div;

	first << firstValue;
	first >> numerator;

	second << secondValue;
	second >> denominator;

	strDec = numerator + "/" + denominator;

	cout << endl << strDec;
}

int NOK(int firstValue, int secondValue)
{
	int result;
	while (firstValue != secondValue)
	{
		if (firstValue > secondValue)
		{
			firstValue -= secondValue;
		}
		else
		{
			secondValue -= firstValue;
		}
	}

	if (firstValue == secondValue)
	{
		result = firstValue;
	}

	return result;
}