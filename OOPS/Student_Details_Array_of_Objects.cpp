/*C++ program to create student class, read and print N student's details
(Example of array of objects).*/

#include <iostream>
using namespace std;

#define MAX 10

class student
{
private:
	string name;
	int rollNo;
	int total;
	float perc;

public:
	// member function to get student's details
	void getDetails(void);
	// member function to print student's details
	void putDetails(void);
	// member function to print student's details
	int getroll();
};
// member function definition, outside of the class
void student::getDetails(void)
{
	cout << "Enter name: ";
	cin.ignore();
	getline(cin, name);
	cout << "Enter roll number: ";
	cin >> rollNo;
	cout << "Enter total marks out of 500: ";
	cin >> total;

	perc = (float)total / 500 * 100;
}
// member function definition, outside of the class
void student::putDetails(void)
{
	cout << "Student details:\n";
	cout << "Name:" << name << ",Roll Number:" << rollNo << ",Total:" << total << ",Percentage:" << perc << "\n";
}
// member function definition, outside of the class
int student::getroll()
{
	return rollNo;
}

int main()
{
	student std[MAX]; // array of objects creation (Ye abhi seekha maine)
	int n, loop, rno;
	cout << "Enter total number of students: ";
	cin >> n;

	for (loop = 0; loop < n; loop++)
	{
		cout << "\nEnter details of student " << loop + 1 << ":\n";
		std[loop].getDetails();
	}

	cout << endl;

	for (loop = 0; loop < n; loop++)
	{
		cout << "Details of student " << (loop + 1) << ":\n";
		std[loop].putDetails();
	}

	cout << "\nEnter roll number of student\n";
	cin >> rno;

	for (loop = 0; loop < n; loop++)
	{
		if (rno == std[loop].getroll())

		{
			std[loop].putDetails();
		}
	}
	return 0;
}