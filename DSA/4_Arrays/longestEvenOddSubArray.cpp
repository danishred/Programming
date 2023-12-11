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
        int result = 1, // keeps the max 
        odd_flag = 0,   // whether last element was odd or not
         = 0;      // count for current longest even-odd subarray
        for (int i = 0; i < n; i++)
        {
            if (odd_flag == 0)
            {
                if (arr[i] & 1) // if current number is odd
                {
                    odd_flag = 1; // switch flag to 1
                    count++; // increment count
                    result = max(result, count); // store current count if its high 
                }
                else
                    count = 1;
            }

            else
            {
                if ((arr[i] & 1) == 0)
                {
                    odd_flag = 0;
                    count++;
                    result = max(result, count);
                }
                else
                    count = 1;
            }
        }
        return result;
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
