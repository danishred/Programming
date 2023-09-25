// maximum value of arr[i] - arr[j] such that j>i

#include <iostream>
#include <climits>
using namespace std;

// Mine
int maxVal1(int arr[], int n)
{
    int temp = INT_MIN;
    int diff;
    // index providing max difference
    int element;

    for (int i = n - 1; i > 0; i--)
    {
        diff = (arr[i] - arr[i - 1]);

        if (diff > temp)
        {
            temp = diff;
            element = arr[i];
        }
        else
        {
            temp = max(temp, element - arr[i - 1]);
        }
    }
    return temp;
}
// Time Complexity:Θ(n)
// Auxiliary Space:Θ(1)

// Mine
int maxVal(int arr[], int n)
{
    int x;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            mx = max(mx, arr[j] - arr[i]);
        }
    }
    return mx;
}
// Time Complexity:O(n^2)
// Auxiliary Space:O(1)

int main()
{
    int arr[] = {7,9,5,6,3,2};
    int n = 6;
    // cout << maxVal(arr, n) << endl;
    cout << maxVal1(arr, n) << endl;
    return 0;
}
