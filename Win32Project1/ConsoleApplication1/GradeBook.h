#include <iostream>
#include <string>

using namespace std;

//GradeBook class defintion

class GradeBook
{
public:
	GradeBook(string);
	void setCourseName(string );
	string getCourseName();
	void displayMessage();


private:
	string courseName;
};