#include "Student.h"

int InputStudents(STUDENT* students)
{
	int i = 0;
	string name;

	do
	{
		cout << "\nName:" << endl;
		cin >> name;
		if (name != STOP)
		{
			students[i].name = name;

			cout << "Number of the student:" << endl;
			cin >> students[i].num;

			cout << "Mark 1:" << endl;
			cin >> students[i].mark1;
			cout << "Mark 2:" << endl;
			cin >> students[i].mark2;
			cout << "Mark 3:" << endl;
			cin >> students[i].mark3;
			i++;
		}
	} while (name != STOP);

	return i;
}

void DataStudents(STUDENT* students, int count)
{
	for (int i = 0; i < count; i++)
	{
		if (students[i].avr >= 4)
		{
			cout << endl << "Number: " << students[i].num << endl
				<< "Name: " << students[i].name << endl
				<< "Mark 1: " << students[i].mark1 << endl
				<< "Mark 2: " << students[i].mark2 << endl
				<< "Mark 3: " << students[i].mark3 << endl
				<< "Average mark: " << students[i].avr << endl;
		}
	}
}