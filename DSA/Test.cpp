//

#include <iostream>
using namespace std;

bool isprime(int n)
{
    if (n <= 1)
        return false;

    if (n == 2 || n == 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

void divisors(int n)
{
    int count = 0;
    for (int i = 2; (i * i) <= n; i++)
    {
        if (isprime(i))
        {
            count++;
        }
    }
    cout << count << endl;
}

int main()
{
    int n;
    cout << "Enter a number to check for Prime:" << endl;
    cin >> n;
    divisors(n);
    return 0;
}
