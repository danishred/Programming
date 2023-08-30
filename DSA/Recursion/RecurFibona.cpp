// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // Complete this function
    int fibonacci(int n)
    {
        if (n == 1)
            return 1;
        if (n == 0)
            return 0;
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
};

//{ Driver Code Starts.
int main()
{

    int n;
    // taking number n
    cin >> n;
    Solution ob;
    // calling fibonacci() function
    cout << ob.fibonacci(n) << endl;

    return 0;
}
// } Driver Code Ends