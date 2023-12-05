//{ Driver Code Starts
// C++ program to rearrange an array in minimum
// maximum form
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    // Function to rearrange  the array elements alternately.

    // Mine
    void rearrange(long long *arr, int n)
    {
        if (n == 1)
        {
            return;
        }

        int x = n;
        if ((n & 1) == 0)
            x = x / 2;

        int divisor = arr[n - 1] + 1;
        int j = 0;

        for (int i = 0; i < x; i++)
        {
            arr[j] = divisor * (arr[n - 1 - i] % divisor) + arr[j];
            if (j == n - 1)
                break;

            arr[j + 1] = divisor * (arr[i] % divisor) + arr[j + 1];
            j = j + 2;
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i] / divisor;
        }
    }
};

// Someone's (better code)
 void rearrange1(long long *arr, int n) 
    { 
    	
    	// Your code here
    	int lastidx=n-1;
    	int firstidx=0;
    	int maxi=arr[n-1]+1;
    	for(int i=0;i<n;i++)
    	{
    	    if(i%2==0)
    	    {
    	        arr[i]+=(arr[lastidx]%maxi)*maxi;
    	        lastidx--;
    	    }
    	    else
    	    {
    	    arr[i]+=(arr[firstidx]%maxi)*maxi;
    	        firstidx++;
    	    }
    	}
    	for(int i=0;i<n;i++)
    	arr[i]/=maxi;
    	 
    }

//{ Driver Code Starts.

// Driver program to test above function
int main()
{

    // size of array
    int n = 9;
    long long arr[] = {350, 863, 1902, 2328, 2854, 3915, 6800, 8955, 9877};

    // adding elements to the array

    Solution ob;

    // calling rearrange() function
    ob.rearrange(arr, n);

    // printing the elements
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}

// } Driver Code Ends