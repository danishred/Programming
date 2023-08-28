// Power of numbers using recursion
// for small numbers

#include <iostream>
using namespace std;

long long recursivePower(long long x, long long n)
{
    if (n == 0)
    {
        return 1;
    }
    return x * recursivePower(x, n - 1);
}

int main()
{
    long long x, n;
    cin >> x >> n;
    cout << recursivePower(x, n) << endl;
    return 0;
}
