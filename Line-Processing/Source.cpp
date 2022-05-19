#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <Windows.h>

//Самостійне завдання 273B. Варіант 13.
using namespace std;

string Encrypt(string);
string Decrypt(string);
void Read();

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string str = "Я студент";
	string crypt_str = Encrypt(str);
	string decrypt_str = Decrypt(crypt_str);

	cout << "\nEnter to see decrypted text..." << endl;
	
	getchar();

	Read();

	return 0;
}

string Encrypt(string s)
{
	string crypt_str;
	for  (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'Я')
		{
			s[i] = 'А';
		}
		else
		{
			s[i]++;
		}
	}

	crypt_str = s;

	cout << "Text has been encrypted";
	cout << "\nEncrypted text: " << crypt_str;
	return crypt_str;
}


string Decrypt(string s)
{
	string decrypt_str;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'А')
		{
			s[i] = 'Я';
		}
		else
		{
			s[i]--;
		}
	}
	
	decrypt_str = s;

	ofstream fout;
	fout.open("lp.txt");

	if (!fout.is_open())
	{
		cout << "Error!" << endl;
	}
	else
	{
		fout << decrypt_str;
	}

	fout.close();

	return decrypt_str;
}

void Read()
{
	cout << endl << "Read File: \n";
	string read;

	ifstream fout;
	fout.open("lp.txt");

	if (!fout.is_open())
	{
		cout << "Error!" << endl;
	}
	else
	{
		while (!fout.eof())
		{
			fout >> read;
			cout << read << " ";
		}
	}
	cout << endl;
	fout.close();

}




//D:\KROK-C++\Practice\CS2_Makohonenko\Line-Processing