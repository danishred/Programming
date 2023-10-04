// class Solution{
//     public:
//     //Function to count the frequency of all elements from 1 to N in the array.
//     void frequencyCount(vector<int>& arr,int n, int p)
//     { 
        
//         int mx = p+1, idx, count;
//         for(int i=0; i<n; ++i)
//         {
//             idx = i+1;
//             count = 0;
//             for(int j=0; j<n; ++j)
//             {
//                 if(arr[j]%(mx)==idx)
//                 {
//                     ++count;
//                 }
//             }
//             arr[i]+=mx*count;
//         }
        
//         for(int i=0; i<n; ++i)
//         {
//             arr[i]/=mx;
//         }
        
//     }
// };

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends

class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int n, int p)
    { 
        
        int mx = p+1, x=0;
        for(int i=0; i<n; ++i)
        {
            // index of array
            x = arr[i] % mx-1;
            arr[x] += mx*1;
        }
        
        for(int i=0; i<n; ++i)
        {
            arr[i] /= mx;
        }
        
    }
};


//{ Driver Code Starts.

int main() 
{ 
	long long t;
	

	    
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	
	return 0; 
}