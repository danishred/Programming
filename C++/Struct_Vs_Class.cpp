#include <iostream>
using namespace std;

struct Demo
// class Demo
{	/* We need to write public in class, that is the only
  difference as class members are private by default but struct members are public by default */
	// public:
	int x;
	int y;

	void display()
	{
		cout << x << " " << y << endl;
	}
};

int main()
{
	Demo d;
	d.x = 10;
	d.y = 20;
	d.display();
}