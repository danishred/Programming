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
