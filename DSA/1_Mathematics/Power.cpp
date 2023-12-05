// Power

#include <iostream>
#include "supplement.h"
using namespace std;

/* Iterative Function to calculate (x^y) in O(logy) */
int power(int x, unsigned int y)
{
	int res = 1; // Initialize result

	while (y > 0) {
		// If y is odd, multiply x with result
		if (y & 1)
			res = res * x;

		// y must be even now
		y = y >> 1; // y = y/2
		x = x * x; // Change x to x^2
	}
	return res;
}
// Time Complexity: O(logy)
// Auxiliary Space: O(1)



// Efficient
int power_e(int x, int n)
{
    if (n == 0)
        return 1;
    int temp = power_e(x, n / 2);
    temp = temp * temp;
    if (n % 2 == 0)
        return temp;
    else
        return temp*x;
}
// Time Complexity: Θ(logn)
// Auxiliary Space: Θ(logn)

// Naive
int power_n(int x, int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        res = res * x;
    }
    return res;
}
// Time Complexity:O(n)
// Auxiliary Space:O(1)

// Driver Code
int main()
{
    int n, x;
    cout << "please enter a numberand its exponent\n";
    cin >> x >> n;
    cout << power_n(x, n) << endl;
    cout << power_e(x, n) << endl;
    cout << power(x, n) << endl;
    return 0;
}
