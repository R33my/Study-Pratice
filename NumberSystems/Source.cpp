#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <sstream>
#include <math.h>

using namespace std;
int SystemTo10(char[], int);
int TMP(int, int);

int main()
{
	int radix, radix2, res = 0, deg = 0, tmp; //radix - ������ ������� ��������, res - ���������, deg - ������
	char val[100] = " "; //����� � ��� ������ �����
	cout << "Enter the value: ";
	gets_s(val);

	cout << "Enter the radix system: ";
	cin >> radix; //������� ������� �������� ��� ��������� �����

	res = SystemTo10(val, radix); //������, ������������ � 10-� ������� ��������

	cout << "What number system do you want to convert the number to?\n";
	cin >> radix2; //������� ������� �������� � ��� �� ������ ��������� �����

	tmp = TMP(res, radix2);

	for (int i = 0; i < tmp; i++)
	{
		int b = res % radix2;
		switch (b) // ���������� ����� � �����
		{
		case 10:
		{
			val[i] = 'a';
			res /= radix2;
		}
		break;

		case 11:
		{
			val[i] = 'b';
			res /= radix2;
		}
		break;

		case 12:
		{
			val[i] = 'c';
			res /= radix2;
		}
		break;

		case 13:
		{
			val[i] = 'd';
			res /= radix2;
		}
		break;

		case 14:
		{
			val[i] = 'e';
			res /= radix2;
		}
		break;

		case 15:
		{
			val[i] = 'f';
			res /= radix2;
		}
		break;

		default:
		{
			if (b < 48)
			{
				b += 48;
			}

			val[i] = b;
			res /= radix2;
		}
		break;
		}
	}

	for (int i = tmp - 1; i > -1; i--)
	{
		cout << val[i];
	}
	cout << endl;
}

int SystemTo10(char str[], int sys)
{
	int value, res = 0, deg = 0, tmp = strlen(str); // �� tmp ������������ ��������, ��� ������� ������� �������� ������
	for (int i = tmp - 1; i >= 0; i--) // ������� ����� �� �����
	{
		switch (str[i])
		{
		case 'a':
			value = 10;
			break;
		case 'b':
			value = 11;
			break;
		case 'c':
			value = 12;
			break;
		case 'd':
			value = 13;
			break;
		case 'e':
			value = 14;
			break;
		case 'f':
			value = 15;
			break;
		default: value = (int)str[i]; //���� ���� �����, �� �� ��������� ������������ ����� value ����� � ������.
			break;
		}

		if (value >= 45)
		{
			value -= 48;
		}

		if (value >= sys)
		{
			cout << "The value " << value << " can not be in this radix system";
		}
		else if (value != sys)
		{
			res += pow(sys, deg) * value;
			deg++;
		}
	}

	return res;
}

int TMP(int Value, int System)
{
	int a = Value, tmp = 0, b;

	while (a > System - 1)
	{
		b = a % System;
		tmp++;
		a /= System;
	}
	tmp++;

	return tmp;
}