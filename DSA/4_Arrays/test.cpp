//

#include <iostream>
using namespace std;

int checkSort(int arr[], int n)
{
    if (n == 1)
        return true;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
            return false;
    }
    return true;
}

int main()
{
    int n = 3;
    int arr[] = {100,20,200};
    cout << checkSort(arr, n) << endl;
    return 0;
}
