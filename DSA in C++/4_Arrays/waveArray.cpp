// Given a sorted array arr[] of distinct integers.
// Sort the array into a wave-like array(In Place).
// In other words, arrange the elements into a
// sequence such that arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5].....

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// #include <algorithm>

// } Driver Code Ends
class Solution
{
public:
    // arr: input array
    // n: size of array
    // Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int> &arr)
    {

        // Your code here
        // notice traversing only to less than n-1 element
        for (int i = 0; i < n - 1; i += 2)
        {
            // swapping
            swap(arr[i], arr[i + 1]);
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int n;
    cin >> n;         // input size of array
    vector<int> a(n); // declare vector of size n / 5
    for (int i = 0; i < n; i++)
        cin >> a[i]; // input elements of array / 1 2 3 4 5
    sort(a.begin(), a.end());
    Solution ob;
    ob.convertToWave(n, a);

    for (int i = 0; i < n; i++)
        cout << a[i] << " "; // print array

    cout << endl;
}