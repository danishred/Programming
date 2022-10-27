// Collatz Conjecture - It states that it is always possible to
// get back to '1'
#include <iostream>
using namespace std;

// Function Prototype
int collatz(int n);

int main()
{
    int n = 0;
    cin >> n;
    cout << collatz(n);
    return 0;
}

int collatz(int n)
{
    int count = 0;
    if (n == 1)
    {
        return (n - 1);
    }
    else if (n % 2 == 0)
    {
        return 1 + collatz(n / 2);
    }
    else
    {
        return 1 + collatz(3 * n + 1);
    }
}
