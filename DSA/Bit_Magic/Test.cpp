// Find gray code of the decimal N and
// convert it into decimal

#include <iostream>
using namespace std;

int greyConverter(int n)
{
    n = n ^ n >> 1;

    return ();
}

int main()
{
    int n;
    cin >> n;
    cout << greyConverter(n) << endl;
    return 0;
}
