// Count odd numbers in array

#include <iostream>
#include "supplement.h"
using namespace std;

// Mine
void chkodd_arr(int arr[], int n)
{
    if (n & 1 == 0)
    {
        cout << "no odd" << endl;
    }

    int count = 0, temp = 0;

    for (int i = 0; i < n; i++)
    {
        if (count % 2 != 0)
        {
            cout << temp << endl;
            return;
        }
        count = 0;
        temp = arr[i];
        for (int j = 0; j < n; j++)
        {
            if (temp == arr[j])
            {
                count++;
            }
        }
    }
}
// Time Complexity:O(logn) 
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
    chkodd_arr(arr, n);
    return 0;
}
