// For a number whether kth bit is set or not\

#include <iostream>
using namespace std;

// Efficient Method 1:
// We reduce n to (n/2^(k-1))
void isSetxe(int n, int k)
{
    int x = (1 << (k - 1));

    if ((n & x) != 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return;
}
// Time Complexity:Θ(k)
// Auxiliary Space:Θ(1)

// Efficient Method 2:
void isSetne(int n, int k)
{

    int x = (n >> (k - 1));

    if ((x & 1) != 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return;
}
// Time Complexity:Θ(k)
// Auxiliary Space:Θ(1)

// Naive method 1
// We reduce n to (n/2^(k-1))
void isSetx(int n, int k)
{
    int x = 1;
    for (int i = 0; i < k - 1; i++)
        x = x * 2;

    if ((n & x) != 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return;
}
// Time Complexity:Θ(k)
// Auxiliary Space:Θ(1)

// Naive method: 2
void isSetn(int n, int k)
{
    for (int i = 0; i < k - 1; i++)
        n = n / 2;

    if ((n & 1) != 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return;
}
// Time Complexity:Θ(k)
// Auxiliary Space:Θ(1)

//{ Driver Code Starts.

int main()
{

    int a, m;
    // taking input a and m
    cin >> a >> m;
    isSetx(a, m);
    isSetn(a, m);
    isSetxe(a, m);
    isSetne(a, m);
    return 0;
}
// } Driver Code Ends