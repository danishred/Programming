// For a number whether kth bit is set or not

#include <iostream>
using namespace std;

void isSet(int n, int k)
{
    int x = 1;
    for (int i = 0; i < k - 1; i++)
        x = x * 2;

    if ((n & x) != 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return;
}

//{ Driver Code Starts.

int main()
{

    int a, m;
    // taking input a and m
    cin >> a >> m;
    isSet(a, m);
    return 0;
}
// } Driver Code Ends