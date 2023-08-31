// Tower of Hanoi
#include <iostream>
using namespace std;

void towerOfHanoi(int n)
{
    if (ind == s.length())
    {
        res.push_back(ans);
        return;
    }
    solve(ans + s[ind], res, s, ind + 1);
    solve(ans, res, s, ind + 1);
}

//{ Driver Code Starts.

// Driver code
int main()
{

    int n;
    cin >> n;   
    towerOfHanoi(n);
    return 0;
}
// } Driver Code Ends