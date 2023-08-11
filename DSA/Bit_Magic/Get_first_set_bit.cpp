
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

void getFirstSetBitEF(int n)
{
    cout << log2(n & -n)+1;
}

void getFirstSetBit(int n)
{
    if (n == 0)
    {
        return;
    }

    int pos = 1;
    while ((n & 1) == 0)
    {
        n = n >> 1;
        pos++;
    }
    cout << pos;
}

//{ Driver Code Starts.

// Driver code
int main()
{

    int n;
    cin >> n;            // input n
    getFirstSetBit(n);   // function to get answer
    getFirstSetBitEF(n); // function to get answer

    return 0;
}

// } Driver Code Ends

// ALSO (You can include cmath)
//   Time Comp - 0(1)       Space Comp - 0(1)

//     unsigned int getFirstSetBit(int n)
//     {
//         if(n==0)
//             return 0;
//         return log2( n & -n) + 1; or  return log2(n & (~n+1))+1;
//     }