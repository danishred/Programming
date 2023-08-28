// Power of numbers using recursion
// for small numbers

#include <iostream>
#include <math.h>
using namespace std;

long long recursivePower(long long x, long long n)
{
    long long m = pow(10, 9) + 7;
    if (n == 0)
    {
        return 1;
    }
    return x * recursivePower(x, n - 1) % m;
}

int main()
{
    long long x, n;
    cin >> x >> n;
    cout << recursivePower(x, n) << endl;
    return 0;
}
