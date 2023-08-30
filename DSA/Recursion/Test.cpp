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
int fact1(int n, int k)
{
    if (n == 0 || n == 1)
        return k;
    return fact1(n - 1, k *(n));
}
// Time Complexity: Θ(n)
// Auxiliary Space: O(1)

int main()
{
    int n, k = 1;
    cin >> n;
    cout << fact(n) << endl;
    cout << fact1(n, k) << endl;
    return 0;
}
