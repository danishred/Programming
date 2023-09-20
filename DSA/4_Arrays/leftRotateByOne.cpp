// Left rotate(anticlockwise) array by one

#include <iostream>
using namespace std;

void rotateLeft(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    rotateLeft(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
