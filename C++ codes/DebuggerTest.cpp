
#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	int A[] = {1, 2, 5, 8, 9};
	for (auto x : A)
	{
		sum = sum + x;
	}
	cout << sum;
	return 0;
}
