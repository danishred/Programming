//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    
    int segregate (int arr[], int n)
    {
        int x=-1;
        
        for(int i=0; i<n; i++)
        {
            if(arr[i]>0)
                continue;
            if(arr[i]<=0 && x==(i-1))
                x=i;
            else 
            {
                swap(arr[i],arr[x+1]);
                x+=1;
            }
                
        }
        
        return x+1;
    }
    
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        
        int x = segregate(arr, n);
        // cout<<x<<endl;
        // for(int i=0; i<n; i++)
        // {
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;
        for(int i=x; i<n; i++)
        {
            if(abs(arr[i])>n-x)
                continue;
            arr[abs(arr[i])+x-1]=-abs(arr[abs(arr[i])+x-1]);
        }
        // for(int i=x; i<n; i++)
        // {
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;
        for(int i=x; i<n; i++)
        {
            if(arr[i]>0)
                return i-x+1;
        }
            return n-x+1;
    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
 
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    
    return 0; 
} 
// } Driver Code Ends