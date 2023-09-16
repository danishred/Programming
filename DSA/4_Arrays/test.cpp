// Max Index

#include <bits/stdc++.h>
using namespace std;

// Bruteforce
int maxIndex(int A[], int n)
{
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        // We can use j = i+1 to reduce some complexity
        for (int j = 0; j < n; j++)
        {
            if (A[i] <= A[j] && i < j)
            {
                mx = max(j - i, mx);
            }
        }
    }

    return mx;
}

int maxIndex1(int A[], int n)
{
    int res = 0;

    // right to left storing max value
    int leftmin[n];
    // left to right storing min value
    int maxright[n];

    leftmin[0] = A[0];
    for (int i = 1; i < n; i++)
    {
        if (leftmin[i - 1] < A[i])
        {
            leftmin[i] = leftmin[i - 1];
        }
        else
            leftmin[i] = A[i];
    }

    maxright[n - 1] = A[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (maxright[i + 1] > A[i])
        {
            maxright[i] = maxright[i + 1];
        }
        else
            maxright[i] = A[i];
    }

    int ans = 0;
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (maxright[j] >= leftmin[i])
        {
            res = j - i;
            continue;
        }
        ans = max(res, ans);
        i++;
    }
    ans = max(res, ans);

    for (int i = 0; i < n; i++)
    {
        cout << maxright[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << leftmin[i] << " ";
    }
    cout << endl;

    return ans;
}

int main()
{
    int A[] = {82, 63, 44, 74, 82, 99, 82}, n = 7;
    // int res = maxIndex(A, n);
    int res = maxIndex1(A, n);
    cout << res << endl;
    return 0;
}
