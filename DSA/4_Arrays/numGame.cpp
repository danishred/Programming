//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Efficient
    long long gcd(long long a, long long b)
    {
        if (b == 0)
        {
            return a % 1000000007;
        }
        else
            return gcd(b, a % b);
    }

    long long numGame(long long n)
    {
        // code here
        long long modulo = 1000000007;
        long long res = 1;

        for (long long i = 2; i <= n; i++)
        {
            res = ((res * i) / gcd(res, i)) % modulo;
        }
        return res % modulo;
    }

    // Bruteforce
    long long numGame1(long long n)
    {
        // code here
        long long m = pow(10, 9) + 7;
        int k = n - 1, i = 1;

        while (i != n + 1)
        {
            k++;
            for (i = 1; i <= n; i++)
            {
                if (k % i != 0)
                    break;
            }
        }

        return k % m;
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