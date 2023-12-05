// Reverse array in groups

#include <iostream>
using namespace std;

void revGroup(int arr[], int n, int k)
{
    int start, end;
    for (int i = 0; i < n; i += k)
    {
        start = i;
        end = i + k - 1;

        if (end > n - 1)
            end = n - 1;

        while (start < end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}

int main()
{
    int n = 4, k = 3;
    int arr[] = {5, 6, 8, 9};
    revGroup(arr, n, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
