// Increment and Decrement Operators

#include <iostream>
using namespace std;
int main()
{
    int i = 5, j;
    j = i++;
    cout << j << " " << i << endl; // if we loop only then j would become equal to 6

    for (i = 0; i < j; i++) // only here i's increment after loop
    {
        cout << i;
    }
    {
        cout << "\n";
    }

    int k = 5, l;
    l = ++k;
    cout << l << " " << k << endl;
    int a = 5, b;
    b = 2 * ++a + 2 * a++; // do not use multiple in single expression as results aren't guaranteed as in this case it makes no sense, but in xcode it does.
    cout << b << " " << a << endl;
    ;
    int c = 5, d;
    d = 2 * c++ + 2 * c++;
    cout << d << " " << c << endl;
    cout << j << "\n"; // if we loop only then j would become equal to 6
    //https://www.youtube.com/watch?v=XKPPLdKZIYs

    // CPP program to demonstrate special case of post increment operator

    int x = 10;

    cout << "Value of x before post-incrementing";

    cout << "\nx = " << x;

    x = x++;

    cout << "\nValue of x after post-incrementing";

    // Value of a will not change
    cout << "\nx = " << x;

    return 0;
}
