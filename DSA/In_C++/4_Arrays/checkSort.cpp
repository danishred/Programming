// check if array is sorted

#include <iostream>
using namespace std;

// Efficient mine
int checkSort(int arr[], int n)
{
    if (n == 1)
        return true;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
            return false;
    }
    return true;
}

// Time Complexity: O(n)
// Auxiliary Space: O(1)

int main()
{
    int n = 3;
    int arr[] = {100, 20, 200};
    cout << checkSort(arr, n) << endl;
    return 0;
}
