// Recursive program to check for palindrome

#include <iostream>
#include <cstring>
using namespace std;

// Mine
int countdigits(int n)
{
    if (n <= 9)
        return 1;
    int k = countdigits(n / 10);
    k = k + 1;
    return k;
}
// Time Complexity: Θ(d) or O(logn) same thing
// Auxiliary Space: Θ(d) or O(logn) same thing

int main()
{
    int n;
    cin >> n;
    cout << countdigits(n) << endl;
    return 0;
}
