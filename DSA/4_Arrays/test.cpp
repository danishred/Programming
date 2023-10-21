//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    long long numGame(long long n)
    {
        // code here
        long long m = pow(10, 9) + 7;
        int k = n-1, i = 1;

        while (i != n+1)
        {
            k++;
            for (i = 1; i <= n; i++)
            {
                if (k % i != 0)
                    break;
            }
        }

        return k;
    }
};

//{ Driver Code Starts.
int main()
{

    long long n = 6;
    Solution ob;
    cout << ob.numGame(n) << endl;
    return 0;
}
// } Driver Code Ends