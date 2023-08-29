// Find gray code of the decimal N and
// convert it into decimal

#include <iostream>
#include <vector>
using namespace std;

int greyToBinaryConverter(int n)
{
    int res = n;
    while (n > 0)
    {
        n >>= 1;
        res ^= n;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << greyToBinaryConverter(n) << endl;
    return 0;
}
