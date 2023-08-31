// Recursive program to check for palindrome

#include <iostream>
using namespace std;

// Mine
int ropeCutting(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;
    // here int res works cause I don't need
    // to keep previous value intact i.e
    // new res on every recursive call
    // max function only works on two at a values at a time
    int res = max(ropeCutting(n - a, a, b, c),
                  max(ropeCutting(n - b, a, b, c),
                      ropeCutting(n - c, a, b, c)));
    if (res == -1)
        return -1;
    return res + 1;
}
// Time Complexity: Θ(d) or O(logn) same thing
// Auxiliary Space: Θ(d) or O(logn) same thing

int main()
{
    int n, a, b, c;
    cout << "please enter rope size\n";
    cin >> n;
    cout << "please enter 3 values for rope size \n";
    cin >> a >> b >> c;
    cout << "Maxcuts: " << ropeCutting(n, a, b, c) << endl;
    return 0;
}
