#include "Student.h"

void AverageStudents(STUDENT* students, int count)
{
	for (int j = 0; j < count; j++)
	{
		students[j].avr += (students[j].mark1 + students[j].mark2 + students[j].mark3) / 3.;
	}
}
