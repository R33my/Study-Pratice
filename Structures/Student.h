#pragma once
#define STOP "*"

#include <iostream>
#include <string>

using namespace std;
struct STUDENT
{
	int num;
	string name;
	int mark1;
	int mark2;
	int mark3;
	int mark4;
	double avr;
};

int InputStudents(STUDENT*);
void AverageStudents(STUDENT*, int);
void DataStudents(STUDENT*, int);