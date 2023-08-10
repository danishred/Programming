// Count odd numbers in array

#include <iostream>
#include "supplement.h"
using namespace std;

// Mine Efficient (bitwise)



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
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        if (count % 2 != 0)
        {
            cout << arr[i] << endl;
            return;
        }
        }
    }
}
// Time Complexity:O(n^2) 
// Auxiliary Space:O(n)



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
