//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // n: input to count the number of set bits
    // Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        n++;
        int pow2 = 0, temp, setnum, ttl_cnt = 0;
        for (int i = 0; i * i <= n; i++)
        {
            pow2 = pow(2, i);
            setnum = n / pow2;
            temp = setnum / 2;
            if (setnum & 1 == 1)
                ttl_cnt = ttl_cnt + temp*pow2 + n % pow2;
            else
                ttl_cnt = ttl_cnt + temp*pow2;
        }
        return ttl_cnt;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{

    int n;
    cin >> n; // input n
    Solution ob;
    cout << ob.countSetBits(n) << endl; // print the answer

    return 0;
}

// } Driver Code Ends