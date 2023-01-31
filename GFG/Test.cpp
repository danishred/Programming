// Factorial Iterative

// Theta (n)
// Auxilary space requirement big O (1)
#include <iostream>
using namespace std;
int factzero(int n)
{
    int fact = 1;
    int count = 0;

    for (int i = 0; i < n; i++
    {
        fact = fact * (i + 1);
    }

    while (fact % 10 == 0)
    {
        count++;
        fact /= 10;
    }

    return (count);
}

int main()
{
    int n;
    cin >> n;
    cout << factzero(n);
    return 0;
}

TC