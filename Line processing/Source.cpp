#include <iostream>
#include <Windows.h>

using namespace std;
string Crypt(string);
int main()
{
	SetConsoleCP(1251); // ������������ ��������� Windows-1251 �  ���� ��������
	SetConsoleOutputCP(1251); // ������������ ��������� Windows-1251 �  ���� ���������

	string crypt_str;
	string str = "� �������";
	cout << "�����: " << str;
	crypt_str = Crypt(str);
	cout << "\n������������ �����: " << crypt_str << "\n";
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