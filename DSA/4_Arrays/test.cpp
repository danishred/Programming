// Trapping rain water

#include <iostream>
// #include <math.h>
using namespace std;

int getWater(int arr[], int n)
{
    int res = 0, lmax[n], rmax[n];

    lmax[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(arr[i], lmax[i - 1]);
    }

    rmax[n - 1] = arr[n - 1];
    for (int i  = n-2; i >= 0; i--)
    {
        rmax[i] = max(arr[i], rmax[i + 1]);
    }
    for (int i = 1; i < n - 1; i++)
    {
        res += (min(lmax[i], rmax[i])) - arr[i];
    }
    return res;
}

int main()
{
    int arr[] = {3, 0, 0, 2, 0, 3};
    int n = sizeof(arr) / sizeof(int);
    cout << getWater(arr, n) << endl;
    return 0;
}
