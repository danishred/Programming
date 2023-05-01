#include <iostream>
using namespace std;

/*program for recursive function

DEBUG TO UNDERSTAND

*/
void fun(int n)
{
	if (n > 0)
	{
		cout << n << endl;
		fun(n - 1);
		cout << n << endl;
	}
}
int main()
{
	int x = 5;
	fun(x);
}