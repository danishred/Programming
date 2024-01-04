// Left rotate(anticlockwise) array by d
#include <iostream>
using namespace std;

// Sir's
void reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[high], arr[low]);

        low++;
        high--;
    }
}

void rotateLeft2(int arr[], int d, int n)
{
    reverse(arr, 0, d - 1);

    reverse(arr, d, n - 1);

    reverse(arr, 0, n - 1);
}
// Time Complexity:Θ(n)
// Auxiliary Space:Θ(1)

// Mine
void rotateLeft1(int arr[], int n, int d)
{
    int temp[d];

    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }

    for (int i = 0; i < d; i++)
    {
        arr[n - d + i] = temp[i];
    }
}
// Time Complexity:Θ(n)
// Auxiliary Space:Θ(d)

// Mine
void rotateLeft(int arr[], int n, int d)
{
    for (int j = 0; j < d; j++)
    {
        int temp = arr[0];
        for (int i = 1; i < n; i++)
        {
            arr[i - 1] = arr[i];
        }
        arr[n - 1] = temp;
    }
}
// Time Complexity:Θ(dn)
// Auxiliary Space:Θ(1)

int main()
{
    int n = 5, d = 2;
    int arr[] = {1, 2, 3, 4, 5};
    // rotateLeft(arr, n, d);
    // rotateLeft1(arr, n, d);
    rotateLeft2(arr, d, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
