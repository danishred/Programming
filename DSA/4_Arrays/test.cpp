// Second Largest element
#include <iostream>
#include <climits>

using namespace std;

int secondLargest(int arr[], int n)
{
    // second value
    int scnd = INT_MIN;
    // first and second max index
    int mx = 0, mx2 = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[mx] < arr[i])
        {
            mx = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[mx]>arr[i])
        {
            if (scnd < arr[i])
            {
                scnd = arr[i];
                mx2 = i;
            }
        }
    }
    return mx2;
}
int main()
{
    int arr[] = {10,10,10}, n = 3;
    cout << secondLargest(arr, n) << endl;
    return 0;
}
