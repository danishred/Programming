//Factorial Iterative (Better than recursive in terms of space)

// Theta (n) time complexity
// Auxilary space requirement big O (1)
#include <iostream>
using namespace std;

int fact(int n)
{
    int fact = 1;
    for (int i = 0; i < n; i++)
    {
        fact = fact * (i+1);
    }

    return (fact);
}

int main()
{
    int n;
    cin >> n;

    cout << fact(n);
    return 0;
}
