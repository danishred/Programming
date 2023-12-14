// Given a circular array of size n, find the maximum subarray sum of the non-empty subarray.

#include <iostream>
using namespace std;

class Solution
{
public:
    // Sir's Efficient
    // Function for finding normal max circular sum using kadane's algorithm
    // View max subarray sum for more information
    int normalMaxSum(int arr[], int n)
    {
        int res = arr[0];

        int maxEnding = arr[0];

        for (int i = 1; i < n; i++)
        {
            maxEnding = max(maxEnding + arr[i], arr[i]);

            res = max(maxEnding, res);
        }

        return res;
    }

    // Main code
    int overallMaxSum(int arr[], int n)
    {
        // Calculating normal max subarray
        int max_normal = normalMaxSum(arr, n);

        // Making sure not all elements of array are negative ( if it is then normal max sum will be )
        if (max_normal < 0)
            return max_normal;

        int arr_sum = 0;
        // inverting array elements
        for (int i = 0; i < n; i++)
        {
            arr_sum += arr[i];

            arr[i] = -arr[i];
        }
        // using the same kadane's function to find max circular sum subarray
        // Adding to array sum since the array was inverted
        int max_circular = arr_sum + normalMaxSum(arr, n);

        return max(max_circular, max_normal);
    }

    // -----------------------------------------------------

    // Sir's Naive
    int maxCircularSum(int arr[], int n)
    {
        int res = arr[0];

        for (int i = 0; i < n; i++)
        {
            // Take every element as beginning element
            int curr_max = arr[i];
            int curr_sum = arr[i];

            // There can be n subarrays that begins with it
            for (int j = 1; j < n; j++)
            {
                // when value of i+j is more than n
                int index = (i + j) % n;
                // calculating every subarray for current element
                curr_sum += arr[index];
                // checking it against current max subarray sum for current element
                curr_max = max(curr_max, curr_sum);
            }
            // storing current max if more than subarray of all previous elements traversed
            res = max(res, curr_max);
        }
        return res;
    }

    // Time Complexity: O(n)
    // Auxiliary Space: O(n^2)

    // ------------------------------------------------------

    // Mine bruteforce
    int maximumCircularSumSubArray(int arr[], int n)
    {
        int currentMaximum = 0, maximum = 0, j = 0;
        // getting max for circular and normal subarray for each element
        for (int i = 0; i < n; i++)
        {
            // keeping the current max and maximum till last element beginning from ith element
            for (int j = i; j < n; j++)
            {
                currentMaximum = currentMaximum + arr[j];
                maximum = max(currentMaximum, maximum);
            }
            // keep testing for max till 1 less than value of i extending current max and maximum
            if (j = n - 1)

            {
                for (int k = 0; k < i; k++)
                {
                    currentMaximum = currentMaximum + arr[k];
                    maximum = max(currentMaximum, maximum); // max remains constant for element's subarray sum that is max
                }
            }
            // currentMaximum resets after maximum subarray found for an element
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