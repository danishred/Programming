#include <iostream>
#include <vector>
using namespace std;
// int k = 0;
// void printSub(int arr[], int curr[], int index, int n)
// {
//     if (index == n)
//     {
//         cout << curr[] << " " << flush;
//         return;
//     }

//     // if (n ==)
//     // {
//     //     k = k + 1;
//     // }

//     printSub(arr, curr, index + 1, n);
//     printSub(arr, curr. arr[index], index + 1, n);
// }
// // Time Complexity:O(2^n)
// // Auxiliary Space:O(n)

int main()
{
    int n;
    cin >> n;
    vector<int> arr[n];
    vector<int> curr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (auto x : arr)
    {
        cout << x << endl;
    }
    printSub(arr, curr, 0, n);
    return 0;
}