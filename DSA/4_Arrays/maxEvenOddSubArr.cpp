//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Efficient Mine
    int maxEvenOddSubArray(int arr[], int n)
    {
        // code here
        int res = 1, odd_cnt = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (odd_cnt == 0)
            {
                if (arr[i] & 1)
                {
                    odd_cnt = 1;
                    cnt++;
                    res = max(res, cnt);
                }
                else
                    cnt = 1;
            }

            else
            {
                if ((arr[i] & 1) == 0)
                {
                    odd_cnt = 0;
                    cnt++;
                    res = max(res, cnt);
                }
                else
                    cnt = 1;
            }
        }
        return res;
    }
    // Time Complexity:O(n^2)
    // Auxiliary Space:O(1)
};

//{ Driver Code Starts.
int main()
{
    int arr[] = {10,12,8,4};
    int n = sizeof(arr) / sizeof(int);
    // cout << n << endl;
    Solution ob;
    cout << ob.maxEvenOddSubArray(arr, n) << endl;
    return 0;
}
// } Driver Code Ends
