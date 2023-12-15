/* Given an array arr[], the task is to find the elements
 of a contiguous subarray of numbers that has the largest sum.*/

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
        int res = INT_MIN, subArSum = 0;
        for (int i = 0; i < n; i++)
        {
            // Summing value from index i to n
            for (int j = i; j < n; j++)
            {
                subArSum += arr[j];
                // current highest value from all
                // sub-array's sum that lies betn range i to n
                res = max(res, subArSum);
            }
            // Resetting variable
            subArSum = 0;
        }
        return res;
    }
    // Time Complexity:O(n^2)
    // Auxiliary Space:O(1)

    // Efficient (hinted)
    int maxSubArray1(int arr[], int n)
    {
        int currMax = 0, res = 0;
        for (int i = 0; i < n; i++)
        {
            // Extend the current subarray or start a new one
            currMax = max(arr[i] + currMax, arr[i]);
            // Store the max value
            res = max(res, currMax);
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