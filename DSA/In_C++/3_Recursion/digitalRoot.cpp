//{ Driver Code Starts
// Initial Template for C++

#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int k;
    // Complete this function
    int digitalRoot(int n)
    {
        // getting answer for 1 and 2 digit will mean the answer for the rest
        // (most of the time, let recursion do its magic)
        if (n / 10 == 0)
            return n;
        k = n % 10 + digitalRoot(n / 10);
        return digitalRoot(k);
    }
};

//{ Driver Code Starts.

int main()
{

    int n;
    cin >> n; // taking number n

    // calling digitalRoot() function
    Solution obj;
    cout << obj.digitalRoot(n) << endl;

    return 0;
}
// } Driver Code Ends