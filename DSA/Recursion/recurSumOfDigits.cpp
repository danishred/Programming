// Recursive program to check for palindrome

#include <iostream>
#include <cstring>
using namespace std;

// Mine
int sumofdigits(int n)
{
    // or if(n <=9 ) saves one recursive call
    if (n == 0) 
        return 0;
    return n % 10 + sumofdigits(n / 10);
}
// Time Complexity: Θ(digits)
// Auxiliary Space: Θ(digits)

int main()
{
    int n;
    cin >> n;
    cout << sumofdigits(n) << endl;
    return 0;
}
