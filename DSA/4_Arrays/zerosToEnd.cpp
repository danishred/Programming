// Move zeros to end

#include <iostream>
using namespace std;

void zerosToEnd(int arr[], int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            k++;
        }
        if (k && arr[i] != 0)
        {
            arr[i - k] = arr[i];
            arr[i] = 0;
            k = 1;
        }
    }
}

int main()
{
    int n = 7;
    int arr[] = {8, 5, 0, 10, 0, 0, 20};
    zerosToEnd(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
