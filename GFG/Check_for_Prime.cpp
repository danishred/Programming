// Functions for Prime

#include <iostream>
#include <algorithm>

using namespace std;

// Sir's More Efficient
bool isPrimen(int n)
{
    if (n == 1)
        return false;

    if (n == 2 || n == 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}
// Time Complexity: O(sqrt(n))
// Auxiliary Space: O(1)

// Sir's effiecient
bool isPrime(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}
// Time Complexity: O(sqrt(n));
// Auxiliary Space: O(1);

// Mine
bool Prime(int a)
{
    int count = 0;

    if (a == 1)
        return false;

    for (int i = 1; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            count++;
        }
    }

    if (count == 1)
    {
        return true;
    }

    return false;
}
// Time Complexity: theta(n/2)
// Auxiliary Space: O(1)

int main()
{
    int n1;
    cout << "Enter a number to check for prime:\n";
    cin >> n1;
    cout << "No. is Prime: ";
    if (Prime(n1) == 1)
        cout << "true";
    else
        cout << "false";
    printf("\n\nEffiecient: %s", isPrime(n1) ? "true" : "false");
    printf("\n\nMore Effiecient: %s", isPrimen(n1) ? "true" : "false");
    return 0;
}
