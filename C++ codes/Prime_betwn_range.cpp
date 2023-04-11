#include <iostream>
using namespace std;

// Find prime numbers between the given range

int main()
{
    int from, to, n, m = 0;
    cout << "Please enter the range\n\n"
         << "From No.\n";
    cin >> from;
    cout << "\nTo No."
         << "\n";
    cin >> to;
    cout << "\n";
    n = (to - from) + 1;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = from + i;
    }
    cout << "Numbers in the range:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    int arr1[n];
    cout << "\nFollowing are Prime Numbers\n";
    for (int i = 0; i <= n; i++)
    {
        if (m == 2)
        {
            arr1[i - 1] = arr[i - 1];
            cout << arr1[i - 1] << " ";
        }

        m = 0;

        for (int j = 1; j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                m = m + 1;
            }
        }
    }
}
