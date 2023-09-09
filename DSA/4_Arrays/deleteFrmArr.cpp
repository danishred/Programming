#include <iostream>
#include <cmath>
using namespace std;

int insert(int arr[], int n, int x)
{
    int pos = 0;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            break;
        }
    }

    if (i == n)
    {
        return n;
    }

    for (int j = i; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }
    return (n - 1);
}
// Time Complexity:Θn
// Auxiliary Space:Θn

int main()
{

    int arr[5], cap = 5, n = 5;

    arr[0] = 3;
    arr[1] = 8;
    arr[2] = 12;
    arr[3] = 5;
    arr[4] = 6;

    cout << "Before Insertion" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    int x = 12;

    n = insert(arr, n, x);

    cout << "After Deletion" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}