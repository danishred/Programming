// Find gray code of the decimal N and
// convert it into decimal

#include <iostream>
using namespace std;

int greyConverter(int n)
{
    return (n ^ n >> 1);
}

int main()
{
    int n;
    cin >> n;
    cout << greyConverter(n) << endl;
    return 0;
}
