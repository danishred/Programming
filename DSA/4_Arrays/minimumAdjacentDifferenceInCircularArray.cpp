//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    //Function to find minimum adjacent difference in a circular array.
    // arr[]: input array
    // n: size of array
    int minAdjDiff(int arr[], int n){    
        // Your code here
        int minimumDifference=INT_MAX, k;
        for(int i = 0;  i < n; i++)
        {
            k = (i+1)%n; //for cycling
            minimumDifference = min(abs(arr[i]-arr[k]),minimumDifference);
        }
        return minimumDifference;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; //Input testcases
    
    while(t--) //While testcases exist
    {
        int n;
        cin>>n; //Input size of array
        
        int arr[n]; //Array of size n
        
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i]; //input elements of array
        }
        Solution ob;
        
        cout << ob.minAdjDiff(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends