#include <iostream>
using namespace std;

/*program for scoping rule

*/
int x = 10;
int main()
{
	int x = 20;
	{
		int x = 30;
		cout << x << endl;
		cout << ::x << endl;
		{
			int x = 40;
			cout << x << endl;
			cout << ::x << endl;  //Takes to the global scope
		}
	}
	cout << x << endl;
	cout << ::x << endl;
}