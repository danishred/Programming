//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        //Complete this function
    double termOfGP(int A,int B,int N)
    {
        float cr = (float) B / A ;
        float nth;
        nth = A * pow(cr,N-1);
        return nth;
    }
};
// Expected Time Complexity : O(logN)
// Expected Auxilliary Space : O(1)


//{ Driver Code Starts.


int main()
{

        int A,B;
        cin>>A>>B; //input first and second term of gp
        int N;
        cin>>N; //input n
        Solution ob;
        cout<<floor(ob.termOfGP(A,B,N))<<endl;
    return 0;
}


// } Driver Code Ends