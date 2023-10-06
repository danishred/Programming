//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n)
    {
        vector<vector<int> > arr;
        
        int buy = 0, sell = 0;

        if (n == 1)
            return 0;
    
        for (int i = 0; i < n; i++)
        {
            if (i - 1 < 0 && arr[i] < arr[i + 1])
            {
                buy = arr[i];
                continue;
            }
            if (i - 1 < 0)
            {
                continue;
            }
            if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
            {
                sell = sell + arr[i] - buy;
                continue;
            }
            if (arr[i - 1] > arr[i] && arr[i] < arr[i + 1])
            {
                buy = arr[i];
                // sell = sell - arr[i];
                continue;
            }
            if (arr[i - 1] < arr[i] && i + 1 > n - 1)
                sell = sell + arr[i] - buy;
        }
        return sell;
    }
};

//{ Driver Code Starts.

int check(vector<vector<int>> ans, vector<int> A, int p)
{
    int c = 0;
    for(int i=0; i<ans.size(); i++)
        c += A[ans[i][1]]-A[ans[i][0]];
    return (c==p) ? 1 : 0;
}

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        int p = 0;
        for(int i=0; i<n-1; i++)
        {
            int x = A[i+1]-A[i];
            if(x>0)
                p += x;
        }
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            cout<<check(ans,A,p);
        }cout<<endl;
    }
    return 0;
}


// } Driver Code Ends