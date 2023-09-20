// Reverse array in groups

#include <iostream>
using namespace std;

int remvDup(int arr[], int n)
{
    int k = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] != arr[i])
        {
            arr[k] = arr[i];
            k++;
        }
    }
    return k;
}

int main()
{
    int n = 6;
    int arr[] = {10, 20, 20, 30, 30, 30};
    int k = remvDup(arr, n);
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << k;
    cout << endl;

    return 0;
}
