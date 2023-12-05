//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b)
    {

        int x = a ^ b, res = 0;

        while (x != 0)
        {
            x = (x & (x - 1));
            res++;
        }
        return res;
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{

    int a, b;
    cin >> a >> b; // input a and b

    Solution ob;
    cout << ob.countBitsFlip(a, b) << endl;

    return 0;
}
// } Driver Code Ends