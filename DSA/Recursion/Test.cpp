// Recursive program to check for palindrome

#include <iostream>
#include <cstring>
using namespace std;

// Mine
int countdigits(int n)
{
    if (n == 0)
        return 0;
    return n % 10 + countdigits(n / 10);
}
// Time Complexity: O(n) ( Θ(n) in the worst case )
// Auxiliary Space: O(n) ( Θ(n) in the worst case )

int main()
{
    int n;
    cin >> n;
    cout << countdigits(n) << endl;
    return 0;
}
