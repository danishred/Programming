//{ Driver Code Starts
// Initial Template for C++

// CPP program to generate power set
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

void solve(string ans, vector<string> &res, string s, int ind)
{
    if (ind == s.length())
    {
        res.push_back(ans);
        return;
    }
    solve(ans + s[ind], res, s, ind + 1);
    solve(ans, res, s, ind + 1);
}
vector<string> powerSet(string s)
{
    vector<string> res;
    string curr = "";
    solve(curr, res, s, 0);
    return res;
}

//{ Driver Code Starts.

// Driver code
int main()
{

    string s;
    cin >> s; // input string

    // calling powerSet() function
    vector<string> ans = powerSet(s);

    // sorting the result of the powerSet() function
    sort(ans.begin(), ans.end());

    // printing the result
    for (auto x : ans)
        cout << x << " ";
    cout << endl;

    return 0;
}
// } Driver Code Ends