// Left rotate(anticlockwise) array by one

#include <iostream>
using namespace std;

void rotateLeft1(int arr[], int n, int d)
{
    int temp[d];

    for (int j = 0; j < d; j++)
    {
        temp[j] = arr[j];
    }

    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }

    for (size_t i = 0; i < count; i++)
    {
        /* code */
    }
    
}
// Time Complexity:Θ(n)
// Auxiliary Space:Θ(d)
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
    rotateLeft1(arr, n, d);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
