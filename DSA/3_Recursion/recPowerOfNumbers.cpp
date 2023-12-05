//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // You need to complete this fucntion

    long long power(long long N, long long R)
    {
        int mod=1000000007;
        if (R == 0)
            return 1;
        if (R == 1)
            return N;
        long long val = power(N, R / 2) % mod;
        val = (val * val) % mod;
        if (R & 1)
            val = (val * N) % mod;

        return val;
    }
    //     Time Complexity - O( log(b) )
    // As we have to divide b continuously until it becomes 1. Assume we divide b by 2 for k times until it becomes 1.

    // Thus, b/(2^k) =1 

    // b = 2 ^ k

    // k= log(b)  (In coding , whenever log is written , it is simply log base 2 ).

    

    // Space Complexity - O ( log(b) ) 
    // As recursive calls are made, so at max log(b) recusive stack calls are made to store values until b is not 1.
    };

//{ Driver Code Starts.

// compute reverse of a number
long long rev(long long n)
{
    long long rev_num = 0;
    while (n > 0)
    {
        rev_num = rev_num * 10 + n % 10;
        n = n / 10;
    }
    return rev_num;
}

int main()
{

    long long N;
    cin >> N; // input N

    long long R = 0;

    // reverse the given number n
    R = rev(N);
    Solution ob;
    // power of the number to it's reverse
    long long ans = ob.power(N, R);
    cout << ans << endl;
}
// } Driver Code Ends