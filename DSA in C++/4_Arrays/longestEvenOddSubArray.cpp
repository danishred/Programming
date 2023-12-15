// Given an array a[] of N integers, 
// the task is to find the length of the longest Alternating Even Odd subarray present in the array. 

// { Driver Code Starts
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
        int maxCount = 1,            // keeps the longest count found yet
            odd_flag = 0,            // whether last element was odd or not
            currentLongestCount = 0; // count for current longest even-odd sub-array

        for (int i = 0; i < n; i++)
        {
            if (odd_flag == 0) // if last element was even

            {
                if (arr[i] & 1) // if current element is odd
                {
                    odd_flag = 1;                                  // switch flag to 1
                    currentLongestCount++;                         // increment count
                    maxCount = max(maxCount, currentLongestCount); // store current count if its higher
                }
                else
                    currentLongestCount = 1; // reset current longest count
            }

            else // if last element was odd
            {
                if ((arr[i] & 1) == 0) // if current element is even
                {
                    odd_flag = 0;                                  // switch flag to 0
                    maxCount++;                                    // increment count
                    maxCount = max(maxCount, currentLongestCount); // store current count if its higher
                }
                else
                    currentLongestCount = 1; // reset current longest count
            }
        }
        return maxCount;
    }
    // Time Complexity:O(n^2)
    // Auxiliary Space:O(1)
};

//{ Driver Code Starts.
int main()
{
    int arr[] = {10, 12, 14, 7, 8};
    int n = sizeof(arr) / sizeof(int);
    // cout << n << endl;
    Solution ob;
    cout << ob.maxEvenOddSubArray(arr, n) << endl;
    return 0;
}
// } Driver Code Ends
