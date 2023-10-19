// Trapping rain water

#include <iostream>
// #include <math.h>
using namespace std;

int getWater(int arr[], int n)
{
    int water = 0, wallval = arr[0], mwall_val = arr[0], wallid = 0,
        mwallid = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > wallval && mwallid != wallid)
        {
            water += ((min(arr[i],mwall_val))-wallval) * (i - mwallid - 1);
        }
        if (arr[i] >= mwall_val)
        {
            mwall_val = arr[i];
            mwallid = i;
        }
        if (arr[i] > 0)
        {
            water += (i - wallid - 1) * (min(wallval, arr[i]));
            wallval = arr[i];
            wallid = i;
        }
    }
    return water;
}

int trap(int arr[], int n)
{
    int water = 0, wall_val = 0, wall_idx = 0, tmp_water = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= wall_val)
        {
            wall_val = arr[i];
            water += tmp_water;
            tmp_water = 0;
            wall_idx = i;
            continue;
        }
        if (i == (n - 1))
        {
            tmp_water = arr[i] * (n - 1 - wall_idx);
            water += tmp_water;
        }
        else
        {
            tmp_water += wall_val - arr[i];
        }
    }

    return water;
}

int main()
{
    int arr[] = {3,0,1,2,5};
    int n = sizeof(arr) / sizeof(int);
    cout << getWater(arr, n) << endl;
    return 0;
}
