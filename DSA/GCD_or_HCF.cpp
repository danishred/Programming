// GCD of two numbers
#include <iostream>
#include <algorithm>

using namespace std;

// Naive Solution to find HCF
int GCD(int n1, int n2)
{
    int mini = min(n1, n2);

    while (mini > 0)
    {
        if (n1 % mini == 0 && n2 % mini == 0)
        {
            break;
        }
        mini--;
    }

    return mini;
}
// Time Complexity: O(min(a,b))
// Auxiliary Space: O(1)

// Euclidean Algorithm
int gcdEu(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}
// Time Complexity: O(min(a,b))
// Auxiliary Space: O(1)

// Euclidean Algorithm (Optimised)
int gcdEuOp(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcdEuOp(b, a % b);
}
// Time Complexity: O(log(min(a,b))
// Auxiliary Space: O(log(min(a,b))

int main()
{
    int n1, n2;
    cout << "Enter the two no:\n";
    cin >> n1 >> n2;
    cout << "Basic: " << GCD(n1, n2);
    cout << "\n"
         << "Euclidean: " << gcdEu(n1, n2);
    cout << "\n"
         << "Optimised: " << gcdEuOp(n1, n2);
    return 0;
}