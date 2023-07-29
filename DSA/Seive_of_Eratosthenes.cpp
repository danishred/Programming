// Seive_of_Eratosthenes

#include <iostream>
#include <vector>
#include "supplement.h"
using namespace std;


// using prime function
void print_prime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isprime(i))
        {
            cout << i << " ";
        }
    }
}
// Time Complexity:O(n*sqrtn)
// Auxiliary Space:O(1)

// using sieve
void sieve(int n)
{
    vector<bool> arr(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (arr[i])
        {
            for (int j = 2 * i; j <= n; j = j + i)
            {
                arr[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == true)
        {
            cout << i << " ";
        }
    }
}
// Time Complexity:O(n*sqrtn)
// Auxiliary Space:O(1)

// Driver Code
int main()
{
    int n = 0;
    cout << "enter the number:" << endl;
    cin >> n;
    print_prime(n);
    cout << endl;
    sieve(n);
    cout << endl;
    return 0;
}
