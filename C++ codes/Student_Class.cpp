// Program with a Class for Student
#include <iostream>
#include <cstring>
using namespace std;
class Student
{
private:
	int roll;
	string name;
	int mathMarks;
	int phyMarks;
	int chemMarks;

public:
	Student(int r, string n, int m, int p, int c)
	{
		roll = r;
		name = n;
		mathMarks = m;
		phyMarks = p;
		chemMarks = c;
	}
	int total()
	{
		return mathMarks + phyMarks + chemMarks;
	}
	char grade()
	{
		float average = total() / 3;
		if (average > 60)
			return 'A';
		else if (average >= 40 && average < 60)
			return 'B';
		else
			return 'C';
	}
};

int main()
{
	int roll;
	string name;
	int m, p, c;
	cout << "Enter roll no. of the student" << endl;
	cin >> roll;
	cout << "Enter name of the student" << endl;
	cin.ignore();
	getline(cin, name);
	cout << "Enter Physics Marks of the student" << endl;
	cin >> p;
	cout << "Enter Maths Marks of the student" << endl;
	cin >> m;
	cout << "Enter Chemistry Marks of the student" << endl;
	cin >> c;

	Student s(roll, name, m, p, c);
	cout << "\n"
		 << "Name of student\n"
		 << name
		 << "Total Marks" << endl
		 << s.total() << endl;
	cout << "Grade of student" << endl
		 << s.grade();
}