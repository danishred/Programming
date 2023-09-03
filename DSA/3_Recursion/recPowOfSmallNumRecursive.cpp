// Power of numbers using recursion
// for small numbers

#include <iostream>
#include <math.h>
using namespace std;

long long RecursivePower(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    return n * RecursivePower(n, p - 1);
}

int main()
{
    long long x, n;
    cin >> x >> n;
    cout << RecursivePower(x, n) << endl;
    return 0;
}
