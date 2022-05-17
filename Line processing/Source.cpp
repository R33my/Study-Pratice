#include <iostream>
#include <Windows.h>

using namespace std;
string Crypt(string);
int main()
{
	SetConsoleCP(1251); // встановлення кодування Windows-1251 в  потік введення
	SetConsoleOutputCP(1251); // встановлення кодування Windows-1251 в  потік виведення

	string crypt_str;
	string str = "Я студент";
	cout << "Рядок: " << str;
	crypt_str = Crypt(str);
	cout << "\nЗашифрований рядок: " << crypt_str << "\n";
}

string Crypt(string s)
{
	string crypt_str;
	for (int i = 0; i < s.size(); i++)
	{
		s[i]++;
	}

	return crypt_str = s;
}

/*
D:\KROK-C++\Practice\CS2_Makohonenko\Line processing
*/