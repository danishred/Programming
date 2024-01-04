

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to count the frequency of all elements from 1 to N in the array.

    // Mine
    // void frequencyCount(vector<int>& arr,int n, int p)
    // {

    //     int mx = p+1, x=0;
    //     for(int i=0; i<n; ++i)
    //     {
    //         // index of array
    //         x = arr[i] % mx-1;
    //         arr[x] += mx*1;
    //     }

    //     for(int i=0; i<n; ++i)
    //     {
    //         arr[i] /= mx;
    //     }

    // }

    void frequencyCount(vector<int> &arr, int n, int P)
    {
        int one = 0;

        // Step 1: Count ones and convert elements that are greater than or equal to n to 0
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
                one++;
            if (arr[i] >= n)
                arr[i] = 0;
            else
                arr[i]--;
        }

        // Step 2: Increment the count of elements at the corresponding index
        for (int i = 0; i < n; i++)
        {
            arr[arr[i] % n] += n;
        }

        // Step 3: Compute the frequencies by dividing each element by n
        for (int i = 0; i < n; i++)
        {
            arr[i] /= n;
        }

        // Step 4: Update the frequency of ones at arr[0]
        arr[0] = one;
    }
};

//{ Driver Code Starts.

int main()
{
    long long t;

    int N, P;
    // size of array
    cin >> N;

    vector<int> arr(N);

    // adding elements to the vector
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cin >> P;
    Solution ob;
    // calling frequncycount() function
    ob.frequencyCount(arr, N, P);

    // printing array elements
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}