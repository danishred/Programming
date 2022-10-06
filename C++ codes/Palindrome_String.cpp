#include <iostream>
using namespace std;

int main()
{
	string str = "MAdAM";
	string rev = "";
	int len = (int)str.length();
	cout << len << "\n";
	rev.resize(len);

	for (int i = 0, j = len - 1; i < len; i++, j--) 
	{
		if (str[j] >= 65 && str[j] < 97)
			rev[i] = str[j];
		else
		{
			str[j] -= 32;
			rev[i] = str[j];
		}
	}
	rev[len] = '\0';

	if (str.compare(rev) == 0)
	{
		cout << rev << "\n";
		cout << str << "\n";
		cout << "Palindrome" << endl;
	}
	else
	{
		cout << rev << "\n";
		cout << str << "\n";
		cout << "Not a Palindrome" << endl;
	}
	return 0;
} 