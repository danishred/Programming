#include <iostream>
using namespace std;

int main()
{
	int n, r, rev = 0, m;
	cout << "Enter the Number\n";
	cin >> n;
	m = n;

	while (n > 0)
	{
		r = n % 10;
		n = n / 10;
		rev = rev * 10 + r; // there is a difference between reverse number and digit(check the other program)
	}

	cout << "Reverse Number is " << rev << "\n";

	if (rev == m)
	{
		cout << "\nNumber is a palindrome";
	}
	else
	{
		cout << "\nNumber is not a palindrome";
	}
	return 0;
}