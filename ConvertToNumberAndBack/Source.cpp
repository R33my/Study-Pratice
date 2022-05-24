#include <iostream>
#include <sstream>

//Практичне заняття 9. Завдання 9.
using namespace std;
int main()
{
	stringstream ss;
	string str;
	int num;

	cout << "Enter the number: ";
	cin >> num;

	ss << num;
	ss >> str;

	cout << "Converted string to number: " << str;

}