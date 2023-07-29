// Seive_of_Eratosthenes

#include <iostream>
#include "supplement.h"
using namespace std;

// using prime function
void print_prime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isprime(i))
        {
            cout << i;
        }
    }
}
// Time Complexity:O(n) 
// Auxiliary Space:O(1) 


// Driver Code
int main()
{
    int n = 0;
    cout << "enter the number:" << endl;
    cin >> n;
    print_prime(n);
    cout << endl;
    return 0;
}
