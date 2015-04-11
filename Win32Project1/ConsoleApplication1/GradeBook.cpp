#include <iostream>
#include "GradeBook.h"
#include <string>
using namespace std;

GradeBook::GradeBook(string name)
{
	setCourseName(name);
}//constructor

void GradeBook::setCourseName(string name)
{
	if (name.length() <= 25)
	{
		courseName = name;
	}//if

	if (name.length() > 25)
	{
		courseName = name.substr(0.25);
		cout << "Course name exceeds 25 characters. \n" << endl;
	}//if

	//courseName = name;
}//setCourseName

string GradeBook::getCourseName()
{
	return courseName;
}//getCourseName


void GradeBook::displayMessage()
{
	cout << "Welcome to the grade book for: " << getCourseName() << endl;
}//display message