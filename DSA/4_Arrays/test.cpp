// Max Index

#include <bits/stdc++.h>
using namespace std;

// Bruteforce
int maxIndex(int arr[], int n)
{
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        // We can use j = i+1 to reduce some complexity
        for (int j = 0; j < n; j++)
        {
            if (arr[i] <= arr[j] && i < j)
            {
                mx = max(j - i, mx);
            }
        }
    }

    return mx;
}

int maxIndex1(int arr[], int n)
{
    int max = 0;
    // current max (in maxright) or min (in minleft) is checked
    int maxright[n];
    int minleft[n];

    maxright[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (maxright[i - 1] > arr[i])
        {
            maxright[i] = maxright[i - 1];
        }
        else
            maxright[i] = arr[i];
    }

    minleft[n - 1] = arr[n - 1];
    for (int i = n - 2; i > 0; i--)
    {
        if (minleft[i + 1] > arr[i])
        {
            
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << maxright[i] << " ";
    }

    return max;
}

int main()
{
    int arr[] = {34, 8, 10, 3, 2, 80, 30, 33, 1}, n = 9;
    // int res = maxIndex(arr, n);
    maxIndex1(arr, n);
    // cout << res << endl;
    return 0;
}
