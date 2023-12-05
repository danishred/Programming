//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
	int findMin(int A[], int n)
	{
		int res = INT_MAX;
		int k = 0;
		unsigned long long sum = 0;
		unsigned long long min = INT_MAX;

		for (int i = 0; i < n; i++)
		{
			sum = sum + A[i];
		}
		if ((sum & 1) == 0)
		{
			return 0;
		}

		else
		{
			for (int i = 0; i < n; i++)
			{
				if ((1 & A[i]) == 0)
				{
					while ((A[i] & 1) != 1)
					{
						A[i] = A[i] / 2;
						k++;
					}
				}
				if (k < res && k > 0)
				{
					res = k;
				}

				k = 0;
			}
			return res;

			if (res == INT_MAX)
			{
				return -1;
			}
		}
	}
};

//{ Driver Code Starts.
int main()
{

	int N;
	cin >> N;
	int A[N];

	for (int i = 0; i < N; i++)
		cin >> A[i];

	Solution ob;
	cout << ob.findMin(A, N) << "\n";

	return 0;
}

// } Driver Code Ends