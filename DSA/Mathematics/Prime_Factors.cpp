// Functions for Prime

#include <iostream>
#include <algorithm>

using namespace std;

bool isPrimen(int n);

// Sir's More Ef
void PrimeFactorsMef(int N)
{
    if (N <= 1)
        return;

    while (N % 2 == 0)
    {
        cout << "2 ";
        N /= 2;
    }

    while (N % 3 == 0)
    {
        cout << "3 ";
        N /= 3;
    }

    for (int i = 5; i * i <= N; i = i + 6)
    {
        while (N % i == 0)
        {
            cout << i << " ";
            N /= i;
        }

        while (N % (i + 2) == 0)
        {
            cout << i + 2 << " ";
            N /= i + 2;
        }
    }

    if (N > 3)
        cout << (N);
}
// Time Complexity: theta(sqrt(n)) when in worse case
// Auxiliary Space: O (1)

// Sir's Efficient
void PrimeFactorsEf(int N)
{
    for (int i = 2; i * i <= N; i++)
    {
        if (N <= 1)
            return;
        while (N % i == 0)
        {
            cout << i << " ";
            N /= i;
        }
    }
    // case when largest prime has only one power
    if (N > 1)
        cout << (N);
}
// Time Complexity: O(sqrt(n))
// Auxiliary Space: O(1)

// Mine
void PrimeFactors(int N)
{
    for (int i = 2; i <= N; i++)
    {
        if (isPrimen(i))
        {
            while (N % i == 0)
            {
                cout << i << " ";
                N /= i;
            }
        }
    }
}
// Time Complexity: O(n*logn) (sir ne bola not confirmed)
// Auxiliary Space: O(1)

int main()
{
    int N;
    cout << "Enter a number to get prime factors:\n";
    cin >> N;
    cout << "Prime factors of the given No:\n";
    PrimeFactors(N);
    cout << "\n";
    PrimeFactorsEf(N);
    cout << "\n";
     PrimeFactorsMef(N);
    cout << endl;

    return 0;
}

// Efficient prime function (as a module only)
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