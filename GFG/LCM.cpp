// LCM of two given numbers

#include <iostream>
#include <algorithm>

using namespace std;

// Mine
int LCM(int a, int b)
{
    int mini = min(a, b);
    int maxi = max(a, b);

    for (int i = 1; i <= mini; i++)
    {
        if ((maxi * i) % mini == 0)
        {
            return maxi * i;
        }
    }
    return 0;
}
// Time Complexity: O(mini)
// Auxiliary Space: O(1)

// Sir's
int LCM_Sir(int a, int b)
{
    int res = max(a, b);

    while (true)
    {
        if (res % a == 0 && res % b == 0)
            return res;
        res++;
    }
    return res;
}
// Time Complexity: O((a*b)-max(a,b))
// Auxiliary Space: O(1)

// Function for HCF
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
    cout << "Sir's: " << LCM(n1, n2);
    cout << "\n"
         << "mine: " << LCM_Sir(n1, n2);
    cout << "\n"
         << "Optimised : " << n1 * n2 / gcdEuOp(n1, n2);
         // Time Complexity: O(log(min(a,b))
         // Auxiliary Space: O(log(min(a,b))
    return 0;
}
