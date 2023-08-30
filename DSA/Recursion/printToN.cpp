// Print all numbers upto n (Head recursion)

#include <iostream>
using namespace std;

// Head recursive
void printToN(int n)
{
    if (n == 0)
        return;
    printToN(n - 1);
    cout << n << " ";
    return;
}
// Time Complexity: Θ(n)
// Auxiliary Space: Θ(n)

// converted to tale recursive
void print1ToN(int n, int k)
{
    if (n == 0)
        return;
    cout << k << " ";
    print1ToN(n - 1, k + 1);
}
// Time Complexity: Θ(n)
// Auxiliary Space: Θ(1) <-- note

int main()
{
    int n, k = 1;
    cin >> n;
    printToN(n);
    cout << endl;
    print1ToN(n, k);
    return 0;
}
