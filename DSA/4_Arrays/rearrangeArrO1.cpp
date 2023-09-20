// Move zeros to end

#include <iostream>
using namespace std;

void rearrange(int arr[], int n)
{
    int i;
    long long mx = n;
    for (i = 0; i < n; i++)
    {
        arr[i] = arr[i] + (arr[arr[i]] % mx) * mx;
    }
    for (i = 0; i < n; i++)
    {
        arr[i] /= mx;
    }
}

int main()
{
    int n = 5;
    int arr[] = {4, 0, 2, 1, 3};
    // turn into arr[] ={3,4,2,0,1}
    rearrange(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
