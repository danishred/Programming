// Exactly 3 Divisors

#include <iostream>
using namespace std;

// Prime function as a module
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
// Time Complexity:O(sqrt(n)) 
// Auxiliary Space:O(1)


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
// Time Complexity:O(sqrt (n) 
// Auxiliary Space:O(1)


// Driver code
int main()
{
    int n;
    cout << "Enter a number to check for Prime:" << endl;
    cin >> n;
    divisors(n);
    return 0;
}
