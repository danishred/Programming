// Recursive program to check for palindrome

#include <iostream>
#include <cstring>
using namespace std;

// Mine
int subset(string &str)
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
    string str;
    cout << "please enter string\n";
    cin >> str;
    subset(str);
    return 0;
}
