//

#include <iostream>
using namespace std;

int largest(int arr[], int n)
{
    int idx;
    int min = 0;
    for (int i = 0; i < n; i++)
    {
        if (min < arr[i])
        {
            min = arr[i];
            idx = i;
        }
    }

    return idx;
}

int main()
{
    int arr[] = {10, 5, 20, 8}, n = 4;
    int idx = largest(arr, n);
    cout << idx << endl;
    return 0;
}
