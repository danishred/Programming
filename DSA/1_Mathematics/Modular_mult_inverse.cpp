// Modular mutiplicative inverse

#include <iostream>
using namespace std;

// Mine
// User function Template for C++
class Solution
{
public:
    // Complete this function
    int modInverse(int a, int m)
    {
        if (m == 1)
        {
            return -1;
        }

        if (a == 1)
        {
            return 1;
        }
        int inverse = -1;
        for (int i = 1; i <= a; i++)
        {
            if (((m * i) + 1) % a == 0)
            {
                inverse = (m * i + 1) / a;
                break;
            }
        }
        return (inverse);
    }
};
// Time Complexity: O(loga) 
// Auxiliary Space: O(1)


//{ Driver Code Starts.

int main()
{

    int a, m;
    // taking input a and m
    cin >> a >> m;
    Solution ob;
    // calling function modInverse()
    cout << ob.modInverse(a, m) << endl;
    return 0;
}
// } Driver Code Ends