// maximum value of arr[i] - arr[j] such that j>i

#include <iostream>
#include <climits>
using namespace std;

// Mine
void printFreq(int arr[], int n)
{
    int temp = arr[0];
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            count++;
        }
        else
        {
            cout << temp << " " << count << endl;
            temp = arr[i];
            count = 1;
        }
    }
    cout << temp << " " << count << endl;
}
// Time Complexity:O(n) 
// Auxiliary Space:O(1)


int main()
{
    int arr[] = {10, 20, 20};
    int n = 3;
    printFreq(arr, n);
    return 0;
}
