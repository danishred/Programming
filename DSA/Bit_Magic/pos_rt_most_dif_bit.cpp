//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        if (m == n)
            return -1;
        int x = m ^ n;
        return log2(x & -x) + 1;
    }
};

// Time Complexity: O(max(log m, log n))
// Auxiliary Space: O(1), We are not using any extra space.

//{ Driver Code Starts.

// Driver Code
int main()
{

    int m,
        n;
    cin >> m >> n; // input m and n
    Solution ob;
    cout << ob.posOfRightMostDiffBit(m, n) << endl;

    return 0;
}
// } Driver Code Ends

// -----------------------
// ALSO
// 
// class Solution
// {
//     public:
//     //Function to find the first position with different bits.
//     int posOfRightMostDiffBit(int m, int n)
//     {
//         // Your code here
//         int pos=1;
//         while(n>0 || m>0) {
//             if(n%2 != m%2) {
//                 return pos;
//             }
//             pos++;
//             n=n>>1;
//             m=m>>1;
//         }
//         return -1;
//     }
// };