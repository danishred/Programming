// Check for power of 2 using brian kanningham

#include <iostream>
#include "supplement.h"
using namespace std;


// Efficient solution
void chk2p(int n)
{
    if (n == 0)
    {
        cout << "not divisible by 2" << endl;
        return;
    }
    if ((n & n - 1) == 0)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}
// Time Complexity:Θ(1)
// Auxiliary Space:Θ(1)

// Naive Solution
void chk2n(int n)
{
    if (n == 0)
    {
        cout << "not divisible by 2" << endl;
        return;
    }
    while (n > 1)
    {
        if (n % 2 != 0)
        {
            cout << "not a power of 2" << endl;
            return;
        }
        n = n / 2;
    }
    cout << "n is a power of 2" << endl;
}
// Time Complexity: O(logn)
// Auxiliary Space: O(1)

int main()
{
    int n;
    cin >> n;
    chk2n(n);
    chk2p(n);
    return 0;
}



// --------------------

// // C++ program of the above approach

// #include <bits/stdc++.h>
// using namespace std;

// /* Function to check if x is power of 2*/
// bool isPowerofTwo(long long n)
// {
// 	return (n != 0) && ((n & (n - 1)) == 0);
// }

// // Driver code
// int main()
// {
// 	// Function call
// 	isPowerofTwo(30) ? cout << "Yes\n" : cout << "No\n";
// 	isPowerofTwo(128) ? cout << "Yes\n" : cout << "No\n";
// 	return 0;
// }


// ------------------------

// // C++ Program to find whether a
// // no is a power of two
// #include <bits/stdc++.h>
// using namespace std;

// // Function to check if x is power of 2
// bool isPowerOfTwo(int n)
// {
// 	if (n == 0)
// 		return false;

// 	return (ceil(log2(n)) == floor(log2(n)));
// }

// // Driver code
// int main()
// {
// 	// Function call
// 	isPowerOfTwo(31) ? cout << "Yes" << endl
// 					: cout << "No" << endl;
// 	isPowerOfTwo(64) ? cout << "Yes" << endl
// 					: cout << "No" << endl;

// 	return 0;
// }