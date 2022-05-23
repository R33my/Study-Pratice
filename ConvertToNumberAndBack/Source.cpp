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
	cin >> str;

	ss << str;
	ss >> num;

	num += 10;
	cout << "Converted string to number: " << num;

}