// Print sum of all numbers upto n

#include <iostream>
using namespace std;

// Head recursive
int sum(int n)
{
    if (n <= 0)
        return 0;
    return n + sum(n - 1);
}
// Time Complexity: Θ(n)
// Auxiliary Space: Θ(n)

int main()
{
    int n;
    cin >> n;
    cout << sum(n) << endl;

    return 0;
}
