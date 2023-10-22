//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Bruteforce Mine
    int maxSubArray(int arr[], int n)
    {
        // code here
        int res = INT_MIN, sub = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                sub += arr[j];
                res = max(res, sub);
            }
            sub = 0;
        }
        return res;
    }
    // Time Complexity:O(n^2)
    // Auxiliary Space:O(1)
};

//{ Driver Code Starts.
int main()
{
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    int n = sizeof(arr) / sizeof(int);
    cout << n << endl;
    Solution ob;
    cout << ob.maxSubArray(arr, n) << endl;
    return 0;
}
// } Driver Code Ends