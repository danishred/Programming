// Given a circular array of size n, find the maximum subarray sum of the non-empty subarray.

#include <iostream>
using namespace std;

class Solution
{
public:
    //
    int maximumCircularSumSubArray(int arr[], int n)
    {
        int currentMaximum = 0, maximum = 0, j = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                currentMaximum = currentMaximum + arr[j];
                maximum = max(currentMaximum, maximum);
            }
            if (j = n - 1)

            {
                for (int k = 0; k < i; k++)
                {
                    currentMaximum = currentMaximum + arr[k];
                    maximum = max(currentMaximum, maximum);
                }
            }
            currentMaximum = 0;
        }

        return maximum;
    }
    // Time Complexity: O(n^2)
    // Auxiliary Space: O(1)

    // Sir's Naive
    int maxCircularSum(int arr[], int n)
    {
        int res = arr[0];

        for (int i = 0; i < n; i++)
        {
            int curr_max = arr[i];
            int curr_sum = arr[i];

            for (int j = 1; j < n; j++)
            {
                int index = (i + j) % n;

                curr_sum += arr[index];

                curr_max = max(curr_max, curr_sum);
            }

            res = max(res, curr_max); // I think the code will still work without this line (test)
        }
        return res;
    }
};

// Driver Code
int main()
{

    // create array snippet
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution ob;
    cout << ob.maximumCircularSumSubArray(arr, n) << endl;

    return 0;
}