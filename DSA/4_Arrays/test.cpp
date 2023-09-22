// Find leaders in array
#include <iostream>
using namespace std;

// Sir's
void leaders(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
                break;

            if (j == n - 1)
                cout << arr[i]<<" ";
        }
    }
    cout<<arr[n-1];
}
// Time Complexity:O(n^2) 
// Auxiliary Space:O(1 )


int main()
{
    int n = 7;
    int arr[] = {7, 10, 4, 10, 6, 5, 2};
    leaders(arr, n);
    cout << endl;
    return 0;
}
