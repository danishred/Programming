//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Bruteforce
    int maxcnsctv1(bool arr[], int n)
    {
        // code here
        int count = 0, temp = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 1)
            {
                count = max(count, temp);
                temp = 0;
            }
            else
                temp++;
        }
        count = max(count, temp);
        return count;
    }
};

//{ Driver Code Starts.
int main()
{
    bool arr[] = {1,0,1,1,1,1,0,1,1};
    int n = (int)sizeof(arr);
    cout << n << endl;
    Solution ob;
    cout << ob.maxcnsctv1(arr, n) << endl;
    return 0;
}
// } Driver Code Ends