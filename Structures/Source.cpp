#include "Student.h"

//Самостійне завдання 284A.Варіант 13.
using namespace std;
int main()
{
	static STUDENT s[10];
	int count;

	cout << "Enter the name of the students: " << endl;
	count = InputStudents(s);
	
	AverageStudents(s, count);
	cout << "Students with an average mark is >= 4: \n";
	DataStudents(s, count);

	return 0;
}