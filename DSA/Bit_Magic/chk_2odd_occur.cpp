// Count odd numbers in array
// The constraint is there can be only one odd

#include <iostream>
#include <cmath>
#include "supplement.h"

using namespace std;

// Mine Efficient (bitwise)

void chkodd_arrEf(int arr[], int n)
{
    int val = 0, setbit = 0;
    int res0, res1;

    val = arr[0];
    for (int i = 1; i < n; i++)
        val = val ^ arr[i]; 
    
    // calculate first set bit's number
    setbit = val & -val; // or (val & ~val+1) or (val & ~(val-1))

    if ((arr[0] & setbit) == 0)
    {
        res0 = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] & setbit == 0)
            {
                res0 = res0 ^ arr[i];
            }
        }
        res1 = val ^ res0;
    }
    else
    {
        res1 = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] & setbit == 1)
            {
                res1 = res1 ^ arr[i];
            }
        }
        res0 = val ^ res1;
    }

    cout << res1 << " " << res0 << endl;
}
// Time Complexity:Θ(n)
// Auxiliary Space:Θ(1)

// Mine
void chkodd_arr(int arr[], int n)
{
    int count = 0, temp = 0;

    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            // prevents repeating of output
            if (arr[i] == arr[j] && j < i)
                break;
            if (arr[i] == arr[j])
                count++;
        }
        if (count % 2 != 0)
            cout << arr[i] << endl;
    }
    return;
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
    // chkodd_arr(arr, n);
    return 0;
}
