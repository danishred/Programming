// Count odd numbers in array
// The constraint is there can be only one odd

#include <iostream>
#include "supplement.h"
using namespace std;

// Mine Efficient (bitwise)

void chkodd_arrEf(int arr[], int n)
{
    int val = 0;

    if ((n & 1) == 0)
    {
        cout << "no odd" << endl;
        return;
    }

    val = arr[0];

    for (int i = 1; i < n; i++)
    {
        val = val ^ arr[i];
    }
    cout << val << endl;
}
// Time Complexity:Θ(n)
// Auxiliary Space:Θ(1)

// Mine
void chkodd_arr(int arr[], int n)
{
    if ((n & 1) == 0)
    {
        cout << "no odd" << endl;
        return;
    }

    int count = 0, temp = 0;

    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            cout << arr[i] << endl;
            return;
        }
    }
}
// Time Complexity:O(n^2)
// Auxiliary Space:O(1)

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\n";
    chkodd_arrEf(arr, n);
    cout << "\n";
    chkodd_arr(arr, n);
    return 0;
}
