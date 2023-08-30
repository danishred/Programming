// Print all numbers upto n

#include <iostream>
using namespace std;

// Head recursive
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}
// Time Complexity:Θ(n)
// Auxiliary Space: Θ(n)

// Tail recursive

int fact1(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}
// Time Complexity:Θ(n)
// Auxiliary Space: Θ(n)

int main()
{
    int n;
    cin >> n;
    cout << fact(n) << endl;
    cout << fact1(n) << endl;
    return 0;
}
