#include <iostream>
using namespace std;

void cubeByReference(int *);

int main()
{
	int num = 5;
	cubeByReference(&num);
	cout << "The new value is num is: " << num<<endl;
	system("pause");

}//main method

void cubeByReference(int *nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr;

}//