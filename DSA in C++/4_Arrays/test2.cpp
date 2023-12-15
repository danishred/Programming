//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to find the days of buying and selling stock for max profit.
    vector<vector<int>> stockBuySell(vector<int> A, int n)
    {

        vector<vector<int>> s;
        for (int i = 0; i < n - 1; i++)

            if (A[i] < A[i + 1])
                s.push_back({i, i + 1});

        for (int i = 0; i < n; i++)
        {
            A[i];
        }
        cout << endl;
        return s;
    }
};

//{ Driver Code Starts.

int check(vector<vector<int>> ans, vector<int> A, int p)
{
    int c = 0;
    for (int i = 0; i < ans.size(); i++)
        c += A[ans[i][1]] - A[ans[i][0]];
    return (c == p) ? 1 : 0;
}

int main()
{

    int n = 7;
    vector<int> A = {100, 180, 260, 310, 40, 535, 695};
    Solution ob;
    vector<vector<int>> ans = ob.stockBuySell(A, n);
    int p = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int x = A[i + 1] - A[i];
        if (x > 0)
            p += x;
    }
    if (ans.size() == 0)
        cout << "No Profit";
    else
    {
        cout << check(ans, A, p);
    }
    cout << endl;

    return 0;
}

// } Driver Code Ends