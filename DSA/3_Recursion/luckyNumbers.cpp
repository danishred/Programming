// Lucky numbers

#include <iostream>
using namespace std;

int k = 1;

//Mine
bool isLucky(int n)
{
    if (n == 1 || k > n)
    {
        return 1;
    }
    k = k + 1;
    if (n % k == 0)
    {
        return 0;
    }
    n = n - n / k;
    return isLucky(n);
}
// Time Complexity: O(sqrt(N)).
// Auxiliary Space: O(sqrt(N)).

int main()
{
    int n;
    cin >> n;
    cout << isLucky(n) << endl;
    return 0;
}
