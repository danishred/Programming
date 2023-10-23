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

    // Efficient (hinted)
    int maxSubArray1(int arr[], int n)
    {
        int curr = 0, temp = 0, res = 0;
        for (int i = 0; i < n; i++)
        {
            temp = arr[i]+curr;
            curr = max(temp, arr[i]);
            res = max(res,curr);
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int arr[] = {-3, 8, -2, 4, -5, 6};
    int n = sizeof(arr) / sizeof(int);
    cout << n << endl;
    Solution ob;
    cout << ob.maxSubArray1(arr, n) << endl;
    return 0;
}
// } Driver Code Ends